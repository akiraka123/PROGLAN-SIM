#include <iostream>
#include "include/matkul.hpp"


matkul::matkul(int idMK, std::string MK)
		: idMK(idMK), MK(MK)
{
}

void matkul::setidMK(int idmk){
    this->idMK = idmk;

}
int matkul::getidMK(){

    return this->idMK;
}

void matkul::setMK(std::string mk){
    this->MK = mk;

}
std::string matkul::getMK(){

    return this->MK;
}