#include<iostream>
#include<string>
//deklarasi konstanta
const float persentunjangan = 0.2;
const float persenpajak = 0.15;
int main()
{
	//inputan nama karyawan
	std::string namakaryawan;
	int gajipokok,tunjangan,pajak,gajibersih;
	std::cout<<"Masukan nama karyawan : ";
	getline(std::cin,namakaryawan);
	std::cout<<"Masukan gaji pokok : Rp.";
	std::cin>>gajipokok;
	//perhitungan gaji pokok
	tunjangan = persentunjangan*gajipokok;
	pajak = persenpajak*gajipokok;
	//penghitungan gaji bersih
	gajibersih=gajipokok+tunjangan-pajak;
	//tampilan akhir
	std::cout<<"Gaji bersih : Rp."<<gajibersih<<std::endl;
	return 0;
}

