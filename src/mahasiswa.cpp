#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"



mahasiswa::mahasiswa(int id, std::string nama, int dd, int mm, int yy, 
						std::string nrp, std::string departemen, int tahunmasuk,
							int semesterke, int skslulus,float ipk)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk), 
					semesterke(semesterke), skslulus(skslulus), ipk(ipk)
{
	this->ipk = 0.0;
	this->semesterke = 1;
	this->skslulus = 0;

	this->ips = std::vector<float>(14,0);
}
std::string mahasiswa::getNRP(){
	return this -> nrp;
}
std::string mahasiswa::getDepartemen(){
	return this ->departemen;
}

int mahasiswa::gettahunmasuk(){
	return this ->tahunmasuk;
}

int mahasiswa::getSemester()
{
	return this->semesterke;
}

int mahasiswa::getSKSLulus()
{
	return this->skslulus;
}

void mahasiswa::setSemester(int semesterke)
{
	this->semesterke = semesterke;
}

void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

void mahasiswa::hitungIPK()
{

}

void mahasiswa::setIPS(int semester, float ips)
{
	// semester mulai dari 1
	if (semester < 15) {
		this->ips[semester-1] = ips;
		this->hitungIPK();
	}
}

float mahasiswa::getIPS(int semester)
{
	if (semester < 15)
		return this->ips[semester-1];

	return -1.0;
}

std::vector<float> mahasiswa::getAllIPS()
{
	return this->ips;
}



