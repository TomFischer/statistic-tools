/**
 *
 * \copyright
 * Copyright (c) 2017, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under GPL v3.0 License.
 *              See accompanying file LICENSE
 *
 */

#include "IO/readData.h"

#include <iostream>
#include <numeric>

#include <tclap/CmdLine.h>

int main(int argc, char* argv[])
{
    TCLAP::CmdLine cmd(
        "Computes the average out of a sequence of numbers.",
        ' ',
        "0.1");

    TCLAP::ValueArg<std::string> in_arg(
        "i", "in", "the file containing the data", true, "", "file name");
    cmd.add(in_arg);

    cmd.parse(argc, argv);

    auto const c = IO::readData(in_arg.getValue());
    std::cout << std::accumulate(c.cbegin(), c.cend(), 0.0) /
                     std::distance(c.cbegin(), c.cend())
              << std::endl;

    return EXIT_SUCCESS;
}
