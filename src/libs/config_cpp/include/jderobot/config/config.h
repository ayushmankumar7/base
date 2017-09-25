/*
 *  Copyright (C) 1997-2017 JDE Developers Team
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 *  Authors :
 *       Aitor Martinez Fernandez <aitor.martinez.fernandez@gmail.com>
 */

#ifndef JDEROBOT_CONFIG_CONFIG_H
#define JDEROBOT_CONFIG_CONFIG_H

/**
 * @mainpage  Config
 *            JdeRobot COnfig library
 *
 * @author    Aitor Martinez Fernandez , .aitor.martinez.fernandez@gmail.com
 * @date      September 2017
 * @version    0.9.0 (alpha)
 */

#include <yaml-cpp/yaml.h>
#include <jderobot/config/loader.hpp>
#include <jderobot/config/class.hpp>

namespace JdeRobotConfig{


/**
 * @brief loads propierties from a file
 *
 *
 * @param filename
 * 
 *
 * @return config class with all propierties
 */
inline
JdeRobotConfig::Config load(std::string filename)
    {return jderobotconfig::loader::load(filename);}

}
#endif // JDEROBOT_CONFIG_CONFIG_H
