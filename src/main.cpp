#include <iostream>
#include <string>
#include <vector>



#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

float ipk;

int main()
{
	system("cls||clear");
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	
	char menu_terpilih;
	
	string nama,nrp,npp,departemen,pendidikan,unit;

	int dd,mm,yy,tahunmasuk,semesterke=0, skslulus=0;
	

	int idmaba=0, iddosen=0, idtendik=0;

	int noID=0, inputnilai=0;;\
	
	system("cls||clear");


	int kondisi=0;

	//login page

	while (kondisi == 0)
	{	
	cout<< "\n========================================================";
	cout << "\nMake By AKIRAKA ";
	cout << "\nSelamat datang di Universitas X" << endl;
	cout<< "========================================================\n\n";

	string user = "admin";
	string pass = "Admin";
	string username, password;
		cout <<"========================LOGIN PAGE========================\n";
		cout<< "Masukkan username dan password untuk masuk ke menu utama\n\nUsername: ";
		cin >> username;
		cin.ignore();
		cout << "Password: ";
		cin >> password ;
		cout<< "==========================================================";
		cin.ignore();
		if (username==user&&password==pass) kondisi++;
		else{ 
			cout<< "\nUsername atau password salah, silahkan masukkan kembali ";
			cin.ignore();
			system("cls||clear");
			return main();
		}
		
	}

	system("cls||clear");
	//Main menu

	while (kondisi==1) {	
		cout<< "\n========================================================\n";
		cout<< "ENTER untuk masuk ke menu utama  ";
		cout<< "\n========================================================\n";
		cin.ignore();
		system("cls||clear");
		cout<< "\n========================================================\n";
		cout << "SIAKAD";
		cout<< "\n========================================================\n";
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;					//fungsi menambah mahasiswa
		cout << "  2. Tambah Dosen" << endl;								//fungsi menambah dosen	
		cout << "  3. Tambah Tenaga Kependidikan" << endl;							//fungsi menambah mahasiswa
		cout << "  4. Edit atau Tampilkan semua data Mahasiswa" << endl;		//edit data mahasiswa dan menampilkan seluruh data yang didapat
		cout << "  5. Edit atau Tampilkan semua data Dosen" << endl;				//edit data dosen dan menampilkan seluruh data yang didapat
		cout << "  6. Edit atau Tampilkan semua data Tenaga Kependidikan" << endl;		//edit data tendik dan menampilkan seluruh data yang didapat
		cout << "  7. Input Nilai Mahasiswa" << endl;								//input nilai IPS mahasiswa dan total IPKnya
		cout << "  8. logout "<<endl;											//mengulang dari awal int main ()
		cout << "  0. Keluar program";												//mengakhiri program
		cout<< "\n========================================================\n";
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;		
		cin.ignore();
		system("cls||clear");

		switch (menu_terpilih) 
		{
			
			case '1':			//fungsi menambah mahasiswa
			{
			cout<< "\n========================================================\n";	
			cout<< "Isi data-data berikut : ";
			cout<< "\n========================================================\n";
			++idmaba;
			cout << "Masukkan Nama			: ";
			getline(cin,nama);
			cout<< "========================================================\n";	
			cout << "Tanggal Lahir :";
			cout<< "\n========================================================\n";	
			cout<<"Masukkan Tanggal (Angka)	: ";
			cin >> dd;
				
			cout << "Masukkan Bulan (Angka)		: ";
			cin >> mm;

			cout << "Masukkan Tahun (Angka)		: ";
			cin >> yy;
			cout<< "========================================================\n";	
			cout << "Masukkan NRP			: ";
			cin >> nrp;
			cin.ignore();
		
			cout << "Masukkan Departemen		: ";
			getline(cin,departemen);

			cout << "Masukkan Tahun masuk		: ";
			cin >> tahunmasuk;

			cout << "Masukkan semester sekarang	: ";
			cin >> semesterke;

			cout << "Masukkan SKS lulus		: ";
			cin >> skslulus;

			cout << "ipk				: 0.0 ";
			ipk=0.0;
			mahasiswa maba(idmaba, nama,dd,mm,yy,nrp,departemen,tahunmasuk,semesterke, skslulus, ipk);
			recMhs.push_back(maba);
		}
		break;
			case '2':			//fungsi menambah dosen	
			{
			cout<< "\n========================================================\n";	
			cout<< "Isi data-data berikut : ";
			cout<< "\n========================================================\n";	

			++iddosen;	
			cout << "Masukkan Nama			: ";
			getline(cin, nama);
			cout<< "========================================================\n";	
			cout << "Tanggal Lahir : ";
			cout<< "\n========================================================\n";	
			cout <<"Masukkan Tanggal (Angka)	: ";
			cin >> dd;

			cout << "Masukkan Bulan (Angka)		: ";
			cin >> mm;

			cout << "Masukkan Tahun (Angka)		: ";
			cin >> yy;
			cout<< "========================================================\n";	

			cout << "Masukkan NPP			: ";
			cin >> npp;
			cin.ignore();
			cout << "Masukkan Departemen		: ";
			getline(cin, departemen);

			cout << "Masukkan Pendidikan Terakhir	: ";
			cin >> pendidikan;
		
				dosen dosenbaru(iddosen,nama,dd,mm,yy,npp,departemen,pendidikan);
				recDosen.push_back(dosenbaru);
			}
				break;
			case '3':			//fungsi menambah mahasiswa
			{
			cout<< "\n========================================================\n";	
			cout<< "Isi data-data berikut : ";
			cout<< "\n========================================================\n";	
			++idtendik;
			cout << "Masukkan Nama			: ";
			getline(cin,nama);
			cout<< "========================================================\n";	
			cout << "Tanggal Lahir :";
			cout<< "\n========================================================\n";	
			cout << "Masukkan Tanggal (Angka)	: ";
			cin >> dd;

			cout << "Masukkan Bulan (Angka)		: ";
			cin >> mm;

			cout << "Masukkan Tahun (Angka)		: ";
			cin >> yy;cin.ignore();
			cout<< "========================================================\n";
			cout << "Masukkan Unit			: ";
			getline(cin,unit);		
			cout << "Masukkan NPP			: ";
			cin >> npp;
			
			

				tendik tendikbaru(idtendik,nama,dd,mm,yy,npp,unit);
				recTendik.push_back(tendikbaru);
			}
				break;

			case '4':		//edit data mahasiswa dan menampilkan seluruh data yang didapat
			{
				for (unsigned i = 0; i < recMhs.size(); i++)		//menampilkan seluruh data mahasiswa
				{
					cout<< "\n========================================================\n";	
					cout<<recMhs[i].getId()<< ". Nama Mahasiswa	: "<<recMhs[i].getNama()<<endl;
					cout<< "   NRP 			: "<<recMhs[i].getNRP();
				}
				cout<< "\n========================================================\n";	
				cout<< "masukkan nomer ID yang ingin dilihat/diedit : ";
				cin>> noID;
					system("cls||clear");
				cout<< "\n========================================================\n";
				cout<< "Nama Mahasiswa		: "<<recMhs[noID-1].getNama()<<endl;
				cout<< "NRP 			: "<<recMhs[noID-1].getNRP()<<endl;
				cout<< "Tanggal Lahir		: "<<recMhs[noID-1].getTglLahir()<< ", "<< recMhs[noID-1].getBulanLahir()<<", "<<recMhs[noID-1].getTahunLahir()<<endl;
				cout<< "Departemen		: "<<recMhs[noID-1].getDepartemen()<<endl;
				cout<< "Tahun Masuk		: "<<recMhs[noID-1].gettahunmasuk()<<endl;
				cout<< "Semester ke		: "<<recMhs[noID-1].getSemester()<<endl;
				cout<< "SKS Lulus		: "<<recMhs[noID-1].getSKSLulus()<<endl;
				cout<< "Nilai IPK		: "<<recMhs[noID-1].getIPK();
				

					cout<< "\n========================================================\n";	
					cout << "1. Edit data \n";
					cout << "0. Keluar ";
					cout<< "\n========================================================\n";	
					cout<<"TEKAN : ";
					cin>>inputnilai;
				system("cls||clear");
				switch (inputnilai)				//edit data mahasiswa
				{
				case 0: ;
					break;
				case 1: 
				{
					cout<< "\n========================================================\n";	
					cout<< "Isi data-data berikut untuk mengganti menjadi data baru: ";
					cout<< "\n========================================================\n";
					cout << "Masukkan Nama			: "; cin.ignore(); getline(cin,nama); 
					cout<< "========================================================\n";	
					cout << "Tanggal Lahir :";
					cout<< "\n========================================================\n";	
					cout << "Masukkan Tanggal (Angka)	: ";cin >> dd;
					cout << "Masukkan Bulan (Angka)		: ";cin >> mm;
					cout << "Masukkan Tahun (Angka)		: ";cin >> yy;
					cout<< "========================================================\n";	
					cout << "Masukkan NRP			: ";cin >> nrp;cin.ignore();
					cout << "Masukkan Departemen		: ";getline(cin,departemen);
					cout << "Masukkan Tahun masuk		: ";cin >> tahunmasuk;
					cout << "Masukkan semester sekarang	: ";cin >> semesterke;
					cout << "Masukkan SKS lulus		: ";cin >> skslulus;
					
					recMhs[noID-1].setNama(nama);
					recMhs[noID-1].setTglLahir(dd,mm,yy);
					recMhs[noID-1].setNRP(nrp);
					recMhs[noID-1].setDepartemen(departemen);
					recMhs[noID-1].settahunmasuk(tahunmasuk);
					recMhs[noID-1].setSemester(semesterke);
					recMhs[noID-1].setSKSLulus(skslulus);
					
				}
					break;
				}
				break;
			}

			case '5':		//edit data dosen dan menampilkan seluruh data yang didapat
			{	
				for (unsigned i = 0; i < recDosen.size(); i++)  //menampilkan seluruh data dosen yang didapat
				{
					cout<< "\n========================================================\n";	
					cout<<recDosen[i].getId()<< ". Nama Dosen		: "<<recDosen[i].getNama()<<endl;
					cout<< "   NPP 			: "<<recDosen[i].getNPP();
				}
				cout<< "\n========================================================\n";	
				cout<< "masukkan nomer ID yang ingin dilihat : ";
				cin>> noID;
				system("cls||clear");
				cout<< "========================================================\n";	
					cout<< "Nama Dosen			: "<<recDosen[noID-1].getNama()<<endl;
					cout<< "Tanggal Lahir			: "<<recDosen[noID-1].getTglLahir()<< ", "<< recDosen[noID-1].getBulanLahir()<<", "<<recDosen[noID-1].getTahunLahir()<<endl;
					cout<< "NPP 				: "<<recDosen[noID-1].getNPP()<<endl;
					cout<< "Departemen			: "<<recDosen[noID-1].getDepartemen()<<endl;
					cout<< "Pendidikan Terakhir		: "<<recDosen[noID-1].getPendidikan();

					cout << "\n========================================================\n";	
					cout << "1. Edit data \n";
					cout << "0. Keluar ";
					cout << "\n========================================================\n";	
					cout <<"TEKAN : ";
					cin>>inputnilai;
						system("cls||clear");
				switch (inputnilai)				//edit data dosen
				{
				case 0: 
					break;
				case 1: 
				{
					cout<< "\n========================================================\n";	
					cout<< "Isi data-data berikut untuk mengganti menjadi data baru: ";
					cout<< "\n========================================================\n";
					cout << "Masukkan Nama			: "; cin.ignore();getline(cin,nama); 
					cout<< "========================================================\n";	
					cout << "Tanggal Lahir 	:";
					cout<< "\n========================================================\n";

					cout << "Masukkan Tanggal (Angka)	: ";cin >> dd;
					cout << "Masukkan Bulan (Angka)		: ";cin >> mm;
					cout << "Masukkan Tahun (Angka)		: ";cin >> yy;
					cout<< "========================================================\n";	
					cout << "Masukkan NPP			: ";cin >> npp;cin.ignore();
					cout << "Masukkan Departemen		: ";getline(cin,departemen);
					cout << "Pendidikan Terakhir		: ";cin >> pendidikan;
					recDosen[noID-1].setNama(nama);
					recDosen[noID-1].setTglLahir(dd,mm,yy);
					recDosen[noID-1].setNPP(npp);
					recDosen[noID-1].setDepartemen(departemen);
					recDosen[noID-1].setPendidikan(pendidikan);
				}
					break;
				}	
			}
				break;

			case '6':				//edit data tendik dan menampilkan seluruh data yang didapat
			{
				for (unsigned i = 0; i < recTendik.size(); i++)				//menampilkan seluruh data tekdik yang didapat
				{
					cout<< "========================================================\n";	
					cout<< recTendik[i].getId()<< ". Nama Tendik	: "<<recTendik[i].getNama()<<endl;
					cout<< "   NPP 		: "<<recTendik[i].getNPP()<<endl;
				}
				cout<< "========================================================\n";	
				cout<< "masukkan nomer ID yang ingin dilihat : ";
				cin>> noID;
				system("cls||clear");
					cout<< "========================================================\n";
					cout<< "Nama Tendik		: "<<recTendik[noID-1].getNama()<<endl;
					cout<< "NPP 			: "<<recTendik[noID-1].getNPP()<<endl;
					cout<< "Tanggal Lahir		: "<<recTendik[noID-1].getTglLahir()<< ", "<< recTendik[noID-1].getBulanLahir()<<", "<<recTendik[noID-1].getTahunLahir()<<endl;
					cout<< "Unit			: "<<recTendik[noID-1].getUnit();
					cout<< "\n========================================================\n";	
					cout << "1. Edit data \n";
					cout << "0. Keluar ";
					cout<< "\n========================================================\n";	
					cout<<"TEKAN : ";
					cin>>inputnilai;	
					system("cls||clear");
					switch (inputnilai)				//edit data tendik
				{
				case 0: 
					break;
				case 1: 
				{
					cout << "\n========================================================\n";	
					cout << "Isi data-data berikut untuk mengganti menjadi data baru: ";
					cout << "\n========================================================\n";
					cout << "Masukkan Nama			: ";cin.ignore(); getline(cin,nama); 
					cout << "========================================================\n";	
					cout << "Tanggal Lahir 	:";
					cout << "\n========================================================\n";
						
					cout << "Masukkan Tanggal (Angka)	: ";cin >> dd;
					cout << "Masukkan Bulan (Angka)		: ";cin >> mm;
					cout << "Masukkan Tahun (Angka)		: ";cin >> yy;
					cout << "========================================================\n";	
					cout << "Masukkan NPP			: ";cin >> npp;
					cout << "Masukkan Departemen		: ";getline(cin,departemen);
	
					recTendik[noID-1].setNama(nama);
					recTendik[noID-1].setTglLahir(dd,mm,yy);
					recTendik[noID-1].setNPP(npp);
					recTendik[noID-1].setUnit(unit);
					break;
				}	
				break;
				}
			}
			break;

			case '7':						//menginput nilai mahasiswa
			{	
				float nilaiips;
				ipk=0;
				for (unsigned i = 0; i < recMhs.size(); i++)				
				{
					cout<< "\n========================================================\n";	
					cout<<recMhs[i].getId()<< ". Nama Mahasiswa	: "<<recMhs[i].getNama()<<endl;
					cout<< "   NRP 			: "<<recMhs[i].getNRP();
				}
				cout<< "\n========================================================\n";	
				cout<< "masukkan nomer ID untuk input IPS ";
				cin>> noID;
				system("cls||clear");

				cout<< "\n========================================================\n";	
					cout<<recMhs[noID-1].getId()<< ". Nama Mahasiswa	: "<<recMhs[noID-1].getNama()<<endl;
					cout<< "   NRP 			: "<<recMhs[noID-1].getNRP();
				cout<< "\n========================================================\n";
				cout << "Masukkan Nilai IP Mahasiswa\n";
				cout<< "========================================================\n";
				for (unsigned i = 1; i <= recMhs[noID-1].getSemester(); i++)					//loop menginput nilai per semester dan memasukkan semua nilai juga menjumlah ke ipk
				{
					cout << "Semester " << i << ": "; cin>>nilaiips; recMhs[noID-1].setIPS(i,nilaiips);
					ipk += recMhs[noID-1].getIPS(i);
				}
				ipk/=recMhs[noID-1].getSemester();						//IPK yang didapatkan mahasiswa
				recMhs[noID-1].setIPK(ipk);
				cout<<"NILAI IPK : "<<ipk;
				cout<< "\n\nUntuk melihat data keseluruhan dapat kembali\nke menu utama tekan menu tampilkan semua";
				cin.ignore();
				
			}
			break;

			case '8': kondisi = 0; return main();
			break;

			case '0': return 0; 
			break;
			default: 
				cout<< "Input yang dipilih salah, Silahkan Tekan ENTER untuk  Kembali\n";
				break;
			
		}

			cin.clear();	
			cin.ignore();
			
	}

	return 0;
}
