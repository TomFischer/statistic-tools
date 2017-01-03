/**
 *
 * \copyright
 * Copyright (c) 2012-2016, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under GPL v3.0 License.
 *              See accompanying file LICENSE
 *
 */

#ifndef READDATA_H
#define READDATA_H

#include <string>
#include <vector>

namespace IO
{
std::vector<double> readData(std::string const& fname);
}

#endif
