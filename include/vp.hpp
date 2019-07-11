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
         * Constructs a UtahLSM object.
         *
         */
        VP();
            
        /**
         * Run UtahLSM.
         */
        void run();
    
    private:
        
        int nx, ny;
        std::vector<FT> vector1;
        std::vector<FT> vector2;

};
#endif