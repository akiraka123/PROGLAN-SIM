#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "  7. Keluar " << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) 
		{
			case 1:
			{
			string nama,nrp,departemen;
			int dd,mm,yy,tahunmasuk,id;
			cout << "Masukkan Nama			: ";
			cin >> nama;

			cout << "Masukkan Tanggal Lahir (Angka)	: ";
			cin >> dd;

			cout << "Masukkan Bulan Lahir (Angka)	: ";
			cin >> mm;

			cout << "Masukkan Tahun Lahir (Angka)	: ";
			cin >> yy;
			
			cout << "Masukkan NRP			: ";
			cin >> nrp;

			cout << "Masukkan Departemen		: ";
			cin >> departemen;

			cout << "Masukkan Tahun masuk		: ";
			cin >> tahunmasuk;
			cout<< endl;

			mahasiswa maba(id,nama,dd,mm,yy,nrp,departemen,tahunmasuk);
			recMhs.push_back(maba);
		}
				break;
			case 2:
			{
				int id,dd,mm,yy;
				string nama,npp,departemen,pendidikan;
			cout << "Masukkan Nama			: ";
			cin >> nama;

			cout << "Masukkan Tanggal Lahir (Angka)	: ";
			cin >> dd;

			cout << "Masukkan Bulan Lahir (Angka)	: ";
			cin >> mm;

			cout << "Masukkan Tahun Lahir (Angka)	: ";
			cin >> yy;
			
			cout << "Masukkan NPP			: ";
			cin >> npp;

			cout << "Masukkan Departemen		: ";
			cin >> departemen;

			cout << "Masukkan Pendidikan Terakhir	: ";
			cin >> pendidikan;
			cout<< endl;

				dosen dosenbaru(id,nama,dd,mm,yy,npp,departemen,pendidikan);
				recDosen.push_back(dosenbaru);
			}
				break;
			case 3:
			{
				int id,dd,mm,yy;
				string nama,npp,departemen,unit;

			cout << "Masukkan Nama			: ";
			cin >> nama;

			cout << "Masukkan Tanggal Lahir (Angka)	: ";
			cin >> dd;

			cout << "Masukkan Bulan Lahir (Angka)	: ";
			cin >> mm;

			cout << "Masukkan Tahun Lahir (Angka)	: ";
			cin >> yy;
			
			cout << "Masukkan NPP			: ";
			cin >> npp;

			cout << "Masukkan Unit			: ";
			cin >> unit;
			cout<< endl;

				tendik tendikbaru( id,nama,dd,mm,yy,npp,unit);
				recTendik.push_back(tendikbaru);
			}
				break;
			case 4:	
			{	
				for (int i = 0; i < recMhs.size(); i++)
				{
					cout<< "Nama Mahasiswa	: "<<recMhs[i].getNama()<<endl;
					cout<< "Tanggal Lahir	: "<<recMhs[i].getTglLahir()<< ", "<< recMhs[i].getBulanLahir()<<", "<<recMhs[i].getTahunLahir()<<endl;
					cout<< "NRP 	: "<<recMhs[i].getNRP()<<endl;
					cout<< "Departemen	: "<<recMhs[i].getDepartemen()<<endl;
					cout<< "Tahun Masuk	: "<<recMhs[i].getNama()<<endl;
					cout << endl;
				}
			}

				break;
			case 5:
			{
				for (int i = 0; i < recMhs.size(); i++)
				{
					cout<< "Nama Mahasiswa	: "<<recDosen[i].getNama()<<endl;
					cout<< "Tanggal Lahir	: "<<recDosen[i].getTglLahir()<< ", "<< recDosen[i].getBulanLahir()<<", "<<recDosen[i].getTahunLahir()<<endl;
					cout<< "NRP 	: "<<recDosen[i].getNPP()<<endl;
					cout<< "Departemen	: "<<recDosen[i].getDepartemen()<<endl;
					cout<< "Pendidikan Terakhir	: "<<recDosen[i].getPendidikan()<<endl;
					cout << endl;
				}
			}
				break;
			case 6:
			{
				for (int i = 0; i < recMhs.size(); i++)
				{
					cout<< "Nama Mahasiswa	: "<<recTendik[i].getNama()<<endl;
					cout<< "Tanggal Lahir	: "<<recTendik[i].getTglLahir()<< ", "<< recTendik[i].getBulanLahir()<<", "<<recTendik[i].getTahunLahir()<<endl;
					cout<< "NRP 	: "<<recTendik[i].getNPP()<<endl;
					cout<< "Tahun Masuk	: "<<recTendik[i].getUnit()<<endl;
					cout << endl;
				}
			}
				break;
			case 7:
				return 0;
		}
	}

	return 0;
}
