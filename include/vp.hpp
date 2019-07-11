/*
 * Variable Precision Test
 * 
 */

#ifndef VP_HPP
#define VP_HPP

#include <string>
#include <vector>

template<typename FT>
class VP {
    
    public:
        
        /**
         * Constructs a VP object.
         *
         */
        VP();
            
        /**
         * Run VP.
         */
        void run();
    
    private:
        
        int nx, ny;
        std::vector<FT> vector1;
        std::vector<FT> vector2;

};
#endif