#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main (){
	setlocale(LC_ALL, "Russian");
	
    int maswtab;
	cout <<"Введите масштаб :(100 или 50)" << endl;
    cin >> maswtab;

    if (maswtab == 100 ||maswtab == 50) {}
    else {cout << "Wrong!"<<endl;}
    
    char naz1,naz2,naz3,naz4,naz,naz6,naz7,naz8,naz9;              //N            1:1000000
    int nom1,nom2,nom3,nom4,nom,nom6,nom7,nom8,nom9;               //N-36           1:500000
    int msto1,msto2,msto3,msto4,msto,msto6,msto7,msto8,msto9;      //N-36-79           1:100000
    char abvg1,abvg2,abvg3,abvg4,abvg,abvg6,abvg7,abvg8,abvg9;     //N-36-79-A           1:50000
    
    
    if (maswtab == 100){
    cout <<"Пример ввода для масштаба 1:100000 = N-36-79 " << endl;
	cout <<"Введите букву листа *-36-79 " << endl;
    cin >> naz;
    cout <<"Введите номер листа N-*-79 " << endl;
    cin >> nom;
    cout <<"Введите число листа 100го масштаба N-36-* " << endl;
    cin >> msto;
    cout <<"Начальная номенклатура : "<<naz<<"-"<<nom<<"-"<<msto<<endl;}
    

    if (maswtab == 50){
    cout <<"Пример ввода для масштаба 1:50000 = N-36-79-A " << endl;
	cout <<"Введите букву листа *-36-79-A " << endl;
    cin >> naz;
    cout <<"Введите номер листа N-*-79-A " << endl;
    cin >> nom;
    cout <<"Введите число листа 100го масштаба N-36-*-A " << endl;
    cin >> msto;
    cout <<"Введите букву листа 50го масштаба N-36-79-* " << endl;
    cin >> abvg;
    cout <<"Начальная номенклатура : "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<endl;}
    cout <<"" << endl;
    
    if (abvg == "A"){
    	abvg6="Б";
	}

    cout   <<naz1<<"-"<<nom1<<"-"<<msto1<<"-"<<abvg1<<"                   "<<naz2<<"-"<<nom2<<"-"<<msto2<<"-"<<abvg2<<"                   "<<naz3<<"-"<<nom3<<"-"<<msto3<<"-"<<abvg3<<endl;
    cout   <<naz4<<"-"<<nom4<<"-"<<msto4<<"-"<<abvg4<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<"                   "<<naz6<<"-"<<nom6<<"-"<<msto6<<"-"<<abvg6<<endl;
    cout   <<naz7<<"-"<<nom7<<"-"<<msto7<<"-"<<abvg7<<"                   "<<naz8<<"-"<<nom8<<"-"<<msto8<<"-"<<abvg8<<"                   "<<naz9<<"-"<<nom9<<"-"<<msto9<<"-"<<abvg9<<endl;

    

	return 0;
}
