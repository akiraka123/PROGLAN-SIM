#include <iostream>
#include <string>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;




int main()
{
	system("cls||clear");
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	
	char menu_terpilih;
	
	string nama,nrp,npp,departemen,pendidikan,unit;

	int dd,mm,yy,tahunmasuk,semesterke, skslulus;
	float ipk=0;

	int idmaba=0, iddosen=0, idtendik=0;

	int noID=0, inputnilai=0;;
	cout << "\nMake By AKIRAKA \nSelamat datang di Universitas X" << endl << endl;
	
	bool kondisi=true;
	while(kondisi) {	
		
		cout<< "ENTER untuk masuk ke menu utama  ";
		cin.ignore();
		system("cls||clear");
		cout << "\n\nSIAKAD\n                                                    "<< endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Edit atau Tampilkan semua data Mahasiswa" << endl;
		cout << "  5. Edit atau Tampilkan semua data Dosen" << endl;
		cout << "  6. Edit atau Tampilkan semua data Tenaga Kependidikan" << endl;
		cout << "  7. Keluar \n" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;
		cin.ignore();
		system("cls||clear");

		switch (menu_terpilih) 
		{
			
			case '1':
			{
				cout<< "\nIsi data-data berikut : "<< endl;
			++idmaba;
			cout << "Masukkan Nama			: ";
			getline(cin,nama);
			
			cout << "Masukkan Tanggal Lahir (Angka)	: ";
			cin >> dd;

			cout << "Masukkan Bulan Lahir (Angka)	: ";
			cin >> mm;

			cout << "Masukkan Tahun Lahir (Angka)	: ";
			cin >> yy;
			
			cout << "Masukkan NRP			: ";
			cin >> nrp;
			cin.ignore();
		
			cout << "Masukkan Departemen		: ";
			getline(cin,departemen);

			cout << "Masukkan Tahun masuk		: ";
			cin >> tahunmasuk;
			cout<< endl;

			cout << "Masukkan semester sekarang		: ";
			cin >> semesterke;
			cout<< endl;

			cout << "Masukkan SKS lulus		: ";
			cin >> skslulus;
			cout<< endl;

			mahasiswa maba(idmaba,nama,dd,mm,yy,nrp,departemen,tahunmasuk,semesterke, skslulus, ipk);
			recMhs.push_back(maba);
		}
		break;
			case '2':
			{
			cout<< "\nIsi data-data berikut : "<< endl;
			++iddosen;	
			cout << "Masukkan Nama			: ";
			getline(cin, nama);

			cout << "Masukkan Tanggal Lahir (Angka)	: ";
			cin >> dd;

			cout << "Masukkan Bulan Lahir (Angka)	: ";
			cin >> mm;

			cout << "Masukkan Tahun Lahir (Angka)	: ";
			cin >> yy;
			
			cout << "Masukkan NPP			: ";
			cin >> npp;
			cin.ignore();
			cout << "Masukkan Departemen		: ";
			getline(cin, departemen);

			cout << "Masukkan Pendidikan Terakhir	: ";
			cin >> pendidikan;
			cout<< endl;

				dosen dosenbaru(iddosen,nama,dd,mm,yy,npp,departemen,pendidikan);
				recDosen.push_back(dosenbaru);
			}
				break;
			case '3':
			{
				cout<< "\nIsi data-data berikut : "<< endl;
			++idtendik;
			cout << "Masukkan Nama			: ";
			getline(cin,nama);

			cout << "Masukkan Tanggal Lahir (Angka)	: ";
			cin >> dd;

			cout << "Masukkan Bulan Lahir (Angka)	: ";
			cin >> mm;

			cout << "Masukkan Tahun Lahir (Angka)	: ";
			cin >> yy;
			
			cout << "Masukkan NPP			: ";
			cin >> npp;
			cin.ignore();

			cout << "Masukkan Unit			: ";
			getline(cin,unit);
			cout<< endl;

				tendik tendikbaru(idtendik,nama,dd,mm,yy,npp,unit);
				recTendik.push_back(tendikbaru);
			}
				break;

			case '4':	
			{
				for (unsigned i = 0; i < recMhs.size(); i++)
				{
					cout<<"\n"<<recMhs[i].getId()<< ". Nama Mahasiswa	: "<<recMhs[i].getNama()<<endl;
					cout<< "   NRP 			: "<<recMhs[i].getNRP()<<"\n";
				}
				cout<< "masukkan nomer ID yang ingin dilihat/diedit : ";
				cin>> noID;
		
					cout<<"\n\n"<<recMhs[noID-1].getId()<< ". Nama Mahasiswa	: "<<recMhs[noID-1].getNama()<<endl;
					cout<< "   NRP 			: "<<recMhs[noID-1].getNRP()<<endl;
					cout<< "   Tanggal Lahir	: "<<recMhs[noID-1].getTglLahir()<< ", "<< recMhs[noID-1].getBulanLahir()<<", "<<recMhs[noID-1].getTahunLahir()<<endl;
					cout<< "   Departemen		: "<<recMhs[noID-1].getDepartemen()<<endl;
					cout<< "   Tahun Masuk		: "<<recMhs[noID-1].getNama()<<"\n\n";

					cout << "1. ";

				if (inputnilai=0)
				{
					/* code */
				}
				


			}
				break;

			case '5':
			{	
				for (unsigned i = 0; i < recMhs.size(); i++)
				{
					cout<<"\n"<<recDosen[i].getId()<< ". Nama Dosen		: "<<recDosen[i].getNama()<<endl;
					cout<< "  NPP 			: "<<recDosen[i].getNPP()<<endl;
					
				}
				cout<< "masukkan nomer ID yang ingin dilihat : ";
				cin>> noID;
					cout<<"\n\n"<<recDosen[noID-1].getId()<< ". Nama Dosen		: "<<recDosen[noID-1].getNama()<<endl;
					cout<< "  Tanggal Lahir		: "<<recDosen[noID-1].getTglLahir()<< ", "<< recDosen[noID-1].getBulanLahir()<<", "<<recDosen[noID-1].getTahunLahir()<<endl;
					cout<< "  NPP 			: "<<recDosen[noID-1].getNPP()<<endl;
					cout<< "  Departemen		: "<<recDosen[noID-1].getDepartemen()<<endl;
					cout<< "  Pendidikan Terakhir	: "<<recDosen[noID-1].getPendidikan()<<endl;
					cout << endl;
			}
				break;

			case '6':
			{
				for (unsigned i = 0; i < recMhs.size(); i++)
				{
					cout<<"\n"<<recTendik[i].getId()<< ". Nama Tendik	: "<<recTendik[i].getNama()<<endl;
					cout<< "  NPP 		: "<<recTendik[i].getNPP()<<endl;
				}
				cout<< "masukkan nomer ID yang ingin dilihat : ";
				cin>> noID;
					cout<<"\n\n"<<recTendik[noID-1].getId()<< ". Nama Tendik	: "<<recTendik[noID-1].getNama()<<endl;
					cout<< "  NPP 			: "<<recTendik[noID-1].getNPP()<<endl;
					cout<< "  Tanggal Lahir		: "<<recTendik[noID-1].getTglLahir()<< ", "<< recTendik[noID-1].getBulanLahir()<<", "<<recTendik[noID-1].getTahunLahir()<<endl;
					cout<< "  Tahun Masuk		: "<<recTendik[noID-1].getUnit()<<endl;
					cout << endl;
			}
			break;
			case '7': return 0;
			break;
			
			default: 
				cout<< "Input yang dipilih salah, Silahkan  Masukkan Kembali\n";
				break;
			
		}
			
			cin.clear();
			cin.ignore();
			
	}

	return 0;
}
