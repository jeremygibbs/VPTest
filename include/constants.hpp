/*
 * Variable Precision Test
 * 
 * Copyright (c) 2019 Jeremy A. Gibbs
 * Copyright (c) 2019 Pete Willemsen
 * Copyright (c) 2019 Rob Stoll
 * Copyright (c) 2019 Eric Pardyjak
 * 
 * This file is part of UtahLSM.
 * 
 * This software is free and is distributed under the MIT License.
 * See accompanying LICENSE file or visit https://opensource.org/licenses/MIT.
 */

#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

/**
 * Namespace for storing commonly used constants.
 */
namespace constants {
    template<typename TF> constexpr TF vonk    = 0.4;              ///< von Karman constant
    template<typename TF> constexpr TF grav    = 9.81;             ///< acceleration due to gravity [m/s^2]
    template<typename TF> constexpr TF pi      = 3.14159265358979; ///< pi
    template<typename TF> constexpr TF sb      = 5.6697e-8;        ///< Stefan-Boltzmann constant [W/m^2-K^4]
    template<typename TF> constexpr TF sc      = 1367;             ///< solar constant [K-m/s]
    template<typename TF> constexpr TF rho_air = 1.204;            ///< density of air [kg/m^3]
    template<typename TF> constexpr TF rho_wat = 1000.0;           ///< density of water [kg/m^3]
    template<typename TF> constexpr TF Rv      = 461.4;            ///< gas constant for water vapor [J/kg-K]
    template<typename TF> constexpr TF Lv      = 2.45e6;           ///< latent heat of vaporization [J/kg]
    template<typename TF> constexpr TF Ci_wat  = 4186000.0;        ///< volumetric heat capacity of water [J/m^3-K]
    template<typename TF> constexpr TF Cp_air  = 1004.0;           ///< specific heat of air [J/kg-K]
};

#endif