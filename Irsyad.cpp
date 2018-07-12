#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char nik [30];
	char name [30];
	char ttl [30];
	char gender[10];
	char alamat[50];
	char agama[10];
	char kewarganegaraan[10];
	cout<<"Input data KTP"<<endl;
	cout<<"NIK : ";
	cin.getline(nik,30);
	cout<<"Nama : ";
	cin.getline(name,30);
	cout<<"TTL : ";
	cin.getline(ttl,30);
	cout<<"Gender : ";
	cin.getline(gender,10);
	cout<<"Alamat : ";
	cin.getline(alamat,50);
	cout<<"Agama : ";
	cin.getline(agama,10);
	cout<<"Kewarganegaraan : ";
	cin>>kewarganegaraan;
getch();
}

