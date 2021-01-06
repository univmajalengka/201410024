#include<iostream>
using namespace std;

void totaldetik()
{
	cout<<"----------Mencari Total Detik----------"<<endl;
	cout<<""<<endl;
}

void konversi_td()
{
    cout<<"----Mengkonversi Total Detik Ke Jam, Menit, Detik----"<<endl;
    cout<<""<<endl;
}


int total_detik(int j, int m, int d, int td, int sm);
int main()
{
	totaldetik();
	int j,m,d,td,sm; 
	cout<<"Masukan jam : ";
	cin>>j;
	cout<<"Masukan menit : ";
	cin>>m;
	cout<<"Masukan detik : ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"Total Detik : "<<td<<endl;
    cout<<""<<endl;
    
    
	konversi_td();
	cout<<"total detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<j<<":"<<m<<":"<<d;
	
}
