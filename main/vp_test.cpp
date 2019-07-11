/*
 * Variable Precision Test
 * 
 */

#include <cmath>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <vector>

#include "constants.hpp"
#include "vp.hpp"

namespace {
    namespace c = constants;
}

int main () {
    
    // Set up time information
    struct timespec start, finish;
    double utc=0,elapsed;
    clock_gettime(CLOCK_MONOTONIC, &start);
    
    // print a nice little welcome message
    std::cout << std::endl;
    std::cout<<"##############################################################"<<std::endl;
    std::cout<<"#                                                            #"<<std::endl;
    std::cout<<"#                     Welcome to VP Test                     #"<<std::endl;
    std::cout<<"#   A simple test application that sets precision at build   #"<<std::endl;
    std::cout<<"#                                                            #"<<std::endl;
    std::cout<<"##############################################################"<<std::endl;
    
    // Initialize the model in precision.
    #ifdef FLOAT_SINGLE
    std::cout<<"[Precision] \t Single (32-bits floats)"<<std::endl;
    VP<float>* vp = new VP<float>();
    #else
    std::cout<<"[Precision] \t Double (64-bits floats)"<<std::endl;
    VP<double>* vp = new VP<double>();
    #endif
    
    // Run the code
    vp->run();
    
    // compute run time information
    clock_gettime(CLOCK_MONOTONIC, &finish);
    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;
    std::cout<<"[VP] \t\t Finished in "<<elapsed<<" seconds!"<<std::endl;
    std::cout<<"##############################################################"<<std::endl;

    return 0;
}
