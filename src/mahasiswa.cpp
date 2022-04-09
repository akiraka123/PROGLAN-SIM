#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"



mahasiswa::mahasiswa(int id, std::string nama, int dd, int mm, int yy, 
						std::string nrp, std::string departemen, int tahunmasuk,
							int semesterke, int skslulus,float ipk)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk), 
					semesterke(semesterke), skslulus(skslulus), ipk(ipk)
{


	this->ips = std::vector<float>(14,0);
}
std::string mahasiswa::getNRP(){
	return this -> nrp;
}

void mahasiswa::setNRP(std::string nrp){
	this ->nrp = nrp;
}

std::string mahasiswa::getDepartemen(){
	return this ->departemen;
}

void mahasiswa::setDepartemen(std::string departemen){
	this ->departemen = departemen;
}

int mahasiswa::gettahunmasuk(){
	return this ->tahunmasuk;
}

void mahasiswa::settahunmasuk(int tahunmasuk){
	this ->tahunmasuk = tahunmasuk;
}

int mahasiswa::getSemester()
{
	return this ->semesterke;
}

void mahasiswa::setSemester(int semesterke)
{
	this ->semesterke = semesterke;
}


int mahasiswa::getSKSLulus()
{
	return this ->skslulus;
}


void mahasiswa::setSKSLulus(int skslulus)
{
	this ->skslulus = skslulus;
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

void mahasiswa::setIPK(float ipk)
{
	this ->ipk = ipk;
}

float mahasiswa::getIPK()
{
	return this ->ipk;
}

