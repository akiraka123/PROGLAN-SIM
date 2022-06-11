#ifndef __MATKUL_HPP__
#define __MATKUL_HPP__
#include <iostream>


class matkul {

    private: 
        int idMK;
        std::string MK;
        
    public:
        matkul(int idMK, std::string MK);
        std::string getMK();
        void setMK(std::string mk);
        int getidMK();
        void setidMK(int idmk);
       
};


#endif