#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"
#include "include/matkul.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;
		
		//ubah id typedata dari sting ke integer
 			// penembahan paramater semesterke, skslulus dan ipk. 
public:
	mahasiswa(int id, std::string nama, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk,
						int semesterke, int skslulus,float ipk);

	void setNRP(std::string nrp );
	std::string getNRP();
	
	void setDepartemen(std::string departemen );
	std::string getDepartemen();

	void settahunmasuk(int tahunmasuk);
	int gettahunmasuk();

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void setIPK(float ipk);
	float getIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif
