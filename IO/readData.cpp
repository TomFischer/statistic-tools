/**
 *
 * \copyright
 * Copyright (c) 2012-2016, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under GPL v3.0 License.
 *              See accompanying file LICENSE
 *
 */

#include "readData.h"
#include <fstream>
#include <iostream>

namespace IO
{
std::vector<double> readData(std::string const& fname)
{
    std::vector<double> data;
    std::ifstream in(fname);

    if (!in)
        std::cerr << "Could not open file " << fname << std::endl;

    double t;
    while (in >> t)
        data.push_back(t);

    return data;
}
}
