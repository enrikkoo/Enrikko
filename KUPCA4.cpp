#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main (){
	setlocale(LC_ALL, "Russian");
	
    int maswtab;
	cout <<"������� ������� :(100 ��� 50)" << endl;
    cin >> maswtab;

    if (maswtab == 100 ||maswtab == 50) {}
    else {cout << "Wrong!"<<endl;}
    
    char naz1,naz2,naz3,naz4,naz,naz6,naz7,naz8,naz9;              //N            1:1000000
    int nom1,nom2,nom3,nom4,nom,nom6,nom7,nom8,nom9;               //N-36           1:500000
    int msto1,msto2,msto3,msto4,msto,msto6,msto7,msto8,msto9;      //N-36-79           1:100000
    char abvg1,abvg2,abvg3,abvg4,abvg,abvg6,abvg7,abvg8,abvg9;     //N-36-79-A           1:50000
    
    
    if (maswtab == 100){
    cout <<"������ ����� ��� �������� 1:100000 = N-36-79 " << endl;
	cout <<"������� ����� ����� *-36-79 " << endl;
    cin >> naz;
    cout <<"������� ����� ����� N-*-79 " << endl;
    cin >> nom;
    cout <<"������� ����� ����� 100�� �������� N-36-* " << endl;
    cin >> msto;
    cout <<"��������� ������������ : "<<naz<<"-"<<nom<<"-"<<msto<<endl;}
    

    if (maswtab == 50){
    cout <<"������ ����� ��� �������� 1:50000 = N-36-79-A " << endl;
	cout <<"������� ����� ����� *-36-79-A " << endl;
    cin >> naz;
    cout <<"������� ����� ����� N-*-79-A " << endl;
    cin >> nom;
    cout <<"������� ����� ����� 100�� �������� N-36-*-A " << endl;
    cin >> msto;
    cout <<"������� ����� ����� 50�� �������� N-36-79-* " << endl;
    cin >> abvg;
    cout <<"��������� ������������ : "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<endl;}
    
    
    cout<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<endl;
    cout<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<endl;
    cout<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<endl;

    

	return 0;
}
