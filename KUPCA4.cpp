#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>
using namespace std;


int main (){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
	
    int maswtab;
	cout <<"Введите масштаб :(100 или 50)" << endl;
    cin >> maswtab;

    if (maswtab == 100 ||maswtab == 50) {}
    else {cout << "Ошибка!Неверный масштаб!"<<endl;
	exit(0);
}
    
    char naz1,naz2,naz3,naz4,naz,naz6,naz7,naz8,naz9;              //N            1:1000000
    int nom1,nom2,nom3,nom4,nom,nom6,nom7,nom8,nom9;               //N-36           1:500000
    int msto1,msto2,msto3,msto4,msto,msto6,msto7,msto8,msto9;      //N-36-79           1:100000
    string abvg1,abvg2,abvg3,abvg4,abvg,abvg6,abvg7,abvg8,abvg9;     //N-36-79-A           1:50000
    
    
    if (maswtab == 100){
    cout <<"Пример ввода для масштаба 1:100000 = N-36-79 " << endl;
    
	cout <<"Введите букву листа *-36-79 " << endl;
    cin >> naz;
    
    cout <<"Введите номер листа N-*-79 " << endl;
    cin >> nom;
    if (nom > 36 ) {    
	cout << "Ошибка!Неверный номер листа!"<<endl;
	exit(0);}
    
    cout <<"Введите число листа 100го масштаба N-36-* " << endl;
    cin >> msto;
    if (msto > 144 ) {    
	cout << "Ошибка!Неверное число листа 100го масштаба!"<<endl;
	exit(0);}
}

    

    if (maswtab == 50)
	{
    cout <<"Пример ввода для масштаба 1:50000 = N-36-79-A " << endl;
    
	cout <<"Введите букву листа *-36-79-A " << endl;
    cin >> naz;
    
    cout <<"Введите номер листа N-*-79-A " << endl;
    cin >> nom;
    if (nom > 36 ) 
	{    
	cout << "Ошибка!Неверный номер листа!"<<endl;
	exit(0);
	}
    
    cout <<"Введите число листа 100го масштаба N-36-*-A " << endl;
    cin >> msto;
    if (msto > 144  ) 
	{    
	cout << "Ошибка!Неверное число листа 100го масштаба!"<<endl;
	exit(0);	
	}
	
    cout <<"Введите букву листа 50го масштаба N-36-79-* " << endl;
    cin >> abvg;
    
    cout <<""<< endl;
    cout <<"Начальная номенклатура : "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<endl;}
    cout <<""<< endl;

if (abvg == "А"){
	abvg1="Г";
	abvg2="В";
	abvg3="Г";
	abvg4="Б";
	abvg6="Б";
	abvg7="Г";
	abvg8="В";
	abvg9="Г";
    
}
if (abvg == "Б"){
	abvg1="В";
	abvg2="Г";
	abvg3="В";
	abvg4="А";
	abvg6="А";
	abvg7="В";
	abvg8="Г";
	abvg9="В";
    
}
if (abvg == "В"){
	abvg1="Б";
	abvg2="А";
	abvg3="Б";
	abvg4="Г";
	abvg6="Г";
	abvg7="Б";
	abvg8="А";
	abvg9="Б";
    
}
if (abvg == "Г"){
	abvg1="А";
	abvg2="Б";
	abvg3="А";
	abvg4="В";
	abvg6="В";
	abvg7="А";
	abvg8="Б";
	abvg9="А";
    
}



    cout   <<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg1<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg2<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg3<<endl;
    cout   <<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg4<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg6<<endl;
    cout   <<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg7<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg8<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg9<<endl;


	return 0;
}
