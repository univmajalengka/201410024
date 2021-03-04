#include<iostream>
int main()
{
	int x,bayar;
	std::cout<<"Masukan Total Belanja : Rp.";
	std::cin>>x;
	if(x>=0&&x<=25000){
		bayar = x - 0;
	}else if(x>=25000&&x<=50000){
		bayar = x - 10*x/100;
	}else if(x>=50000&&x<=100000){
		bayar = x - 12.5*x/100;
	}else if(x > 100000){
		bayar = x - 15*x/100;
	}else{
		std::cout<<"NOT FOUND 404"<<std::endl;
	}
	std::cout<<"Jumlah Yang harus Dibayar : Rp."<<bayar<<std::endl;
	
	return 0;
	
} 
