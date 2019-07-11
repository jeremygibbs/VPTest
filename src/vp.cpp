/*
 * Variable Precision Test
 * 
 */

#include "vp.hpp"

#include <algorithm>
#include <cmath>
#include <fstream>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

#include "constants.hpp"

namespace {
    namespace c = constants;
}

// Constructor for VP class
template<typename FT>
VP<FT> :: VP() {

    std::cout<<"[VP] \t\t Preparing to run"<<std::endl;
    
    nx = 10000;
    ny = 10000;
    
    vector1.reserve(ny*nx);
    vector2.reserve(ny*nx);
    
    for (int j=0; j<ny; j++) {
        for (int i=0; i<nx; i++) {
            int id = i + j*nx;
            vector1[id] = rand();
            vector2[id] = rand();
        }
    }

}

// Run VP
template<typename FT>
void VP<FT> :: run() {
    
    std::cout<<"[VP] \t\t Running"<<std::endl;
    
    
    for (int j=0; j<ny; j++) {
        for (int i=0; i<nx; i++) {
            int id = i + j*nx;
            vector1[id] = vector2[id] - (c::grav<FT> + c::rho_air<FT>*c::Lv<FT>);
        }
    }
    
    for (int j=0; j<ny; j++) {
        for (int i=0; i<nx; i++) {
            int id = i + j*nx;
            vector2[id] = vector1[id] + (c::grav<FT> + c::rho_air<FT>*c::Lv<FT>);
        }
    }
    
    
}

template class VP<double>;
template class VP<float>;