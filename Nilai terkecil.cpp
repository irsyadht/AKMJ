#include <iostream>
#include <conio.h>

using namespace std;

int main (){

	int a,b,c;
	
	cout<<"\t\tBilangan Terkecil"<<endl;
	cout<<"\nMasukkan angka pertama	= ";
	cin>>a;
	cout<<"\nMasukkan angka kedua	= ";
	cin>>b;
	cout<<"\nMasukkan angka ketiga	= ";
	cin>>c;
	
if (a<b){
	cout<<"\nNilai Terkecil adalah	= "<<a<<endl;
}else if (b<c){
	cout<<"\nNilai Terkecil adalah	= "<<b<<endl;
}else{
	cout<<"\nNilai Terkecil adalah	= "<<c<<endl;
}
getch();
}

