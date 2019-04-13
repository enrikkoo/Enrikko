#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <vector>
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
    
    char naz1,naz2,naz3,naz4,naz,naz5,naz6;                        //N            1:1000000
    int nom1,nom2,nom3,nom4,nom,nom5,nom6;                        //N-36           1:500000
    int msto1,msto2,msto3,msto4,msto,msto6,msto7,msto8,msto9;              //N-36-79           1:100000
    string abvg1,abvg2,abvg3,abvg4,abvg,abvg6,abvg7,abvg8,abvg9;          //N-36-79-A           1:50000
    vector<int> gor2 = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> gor4 = { 134, 135, 136, 137, 138, 139, 140, 141, 142, 143 };
    vector<int> vert1 = { 13, 25, 37, 49, 61, 73, 85, 97, 109, 121 };
    vector<int> vert3 = { 24, 36, 48, 60, 72, 84, 96, 108, 120, 132 };
    int n=9; 
    int m;
    char nazv[]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    
    if (maswtab == 100){                                                           //ввод начальных значений
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
    if (maswtab == 50)	{                                                         //ввод начальных значений
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
    nom1=nom2=nom3=nom4=nom5=nom6=nom;
    

for (int m=0;m<26;m++){
	if (naz==nazv[m]){
	cout<<m;
	}
}

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



	if (abvg == "А" && maswtab == 50 ){                                            //стандарт
	msto1=msto-13;
	msto2=msto-12;
	msto3=msto-12;
	msto4=msto-1;
	msto6=msto;
	msto7=msto-1;
	msto8=msto;
	msto9=msto;
}
	if (abvg == "Б" && maswtab == 50){                                            //стандарт
	msto1=msto-12;
	msto2=msto-12;
	msto3=msto-11;
	msto4=msto;
	msto6=msto+1;
	msto7=msto;
	msto8=msto;
	msto9=msto+1;
}
	if (abvg == "В" && maswtab == 50 ){                                          //стандарт
	msto1=msto-1;
	msto2=msto;
	msto3=msto;
	msto4=msto-1;
	msto6=msto;
	msto7=msto+11;
	msto8=msto+12;
	msto9=msto+12;
}
	if (abvg == "Г" && maswtab == 50){                                          //стандарт
	msto1=msto;
	msto2=msto;
	msto3=msto+1;
	msto4=msto;
	msto6=msto+1;
	msto7=msto+12;
	msto8=msto+12;
	msto9=msto+13;
}

	if (maswtab == 100){                                                           //стандарт
	msto1=msto-13;
	msto2=msto-12;
	msto3=msto-11;
	msto4=msto-1;
	msto6=msto+1;
	msto7=msto+11;
	msto8=msto+12;
	msto9=msto+13;
	}	
	for (int i=0;i<n+1;i++){                                                      //1 линия
    if (msto == vert1[i] && maswtab == 100){
    msto1=msto-1;
	msto2=msto-12;
	msto3=msto-11;
	msto4=msto+11;
	msto6=msto+1;
	msto7=msto+23;
	msto8=msto+12;
	msto9=msto+13;
	nom1=nom2=nom3=nom-1;}
	else {
	continue;}
	}
	for (int i=0;i<n+1;i++){                                                     //2 линия
    if (msto == gor2[i] && maswtab == 100){
    msto1=msto+131;
	msto2=msto+132;
	msto3=msto+133;
	msto4=msto-1;
	msto6=msto+1;
	msto7=msto+11;
	msto8=msto+12;
	msto9=msto+13;}
	else {
	continue;}
	}
	for (int i=0;i<n+1;i++){                                                    //3 линия
    if (msto == vert3[i] && maswtab == 100){
    msto1=msto-13;
	msto2=msto-12;
	msto3=msto-23;
	msto4=msto-1;
	msto6=msto-11;
	msto7=msto+11;
	msto8=msto+12;
	msto9=msto+1;
	nom4=nom5=nom6=nom+1;}
	else {
	continue;
	}
	}	
	for (int i=0;i<n+1;i++){                                                   //4 линия
    if (msto == gor4[i] && maswtab == 100){
    msto1=msto-13;
	msto2=msto-12;
	msto3=msto-11;
	msto4=msto-1;
	msto6=msto+1;
	msto7=msto-133;
	msto8=msto-132;
	msto9=msto-131;}
	else {
	continue;
	}
	}
	for (int i=0;i<n+1;i++){                                                   //4 линия
    if (msto == gor4[i] && maswtab == 100){
    msto1=msto-13;
	msto2=msto-12;
	msto3=msto-11;
	msto4=msto-1;
	msto6=msto+1;
	msto7=msto-133;
	msto8=msto-132;
	msto9=msto-131;}
	else {
	continue;
	}
	}
	for (int i=0;i<n+1;i++){                                                   //исключение 1 из 100000
    if (msto == 1 && maswtab == 100){
    msto1=144;
	msto2=133;
	msto3=134;
	msto4=12;
	msto6=2;
	msto7=24;
	msto8=13;
	msto9=14;}
	else {
	continue;
	}
	}
		for (int i=0;i<n+1;i++){                                                   //исключение 12 из 100000
    if (msto == 12 && maswtab == 100){
    msto1=143;
	msto2=144;
	msto3=133;
	msto4=11;
	msto6=1;
	msto7=23;
	msto8=24;
	msto9=13;}
	else {
	continue;
	}
	}
			for (int i=0;i<n+1;i++){                                                   //исключение 12 из 100000
    if (msto == 133 && maswtab == 100){
    msto1=132;
	msto2=121;
	msto3=122;
	msto4=144;
	msto6=134;
	msto7=12;
	msto8=1;
	msto9=2;}
	else {
	continue;
	}
	}
			for (int i=0;i<n+1;i++){                                                   //исключение 12 из 100000
    if (msto == 144 && maswtab == 100){
    msto1=131;
	msto2=132;
	msto3=121;
	msto4=143;
	msto6=133;
	msto7=11;
	msto8=12;
	msto9=1;}
	else {
	continue;
	}
	}


if (maswtab == 50){
    cout   <<naz<<"-"<<nom<<"-"<<msto1<<"-"<<abvg1<<"                   "<<naz<<"-"<<nom<<"-"<<msto2<<"-"<<abvg2<<"                   "<<naz<<"-"<<nom<<"-"<<msto3<<"-"<<abvg3<<endl;
    cout   <<naz<<"-"<<nom<<"-"<<msto4<<"-"<<abvg4<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"-"<<abvg<<"                   "<<naz<<"-"<<nom<<"-"<<msto6<<"-"<<abvg6<<endl;
    cout   <<naz<<"-"<<nom<<"-"<<msto7<<"-"<<abvg7<<"                   "<<naz<<"-"<<nom<<"-"<<msto8<<"-"<<abvg8<<"                   "<<naz<<"-"<<nom<<"-"<<msto9<<"-"<<abvg9<<endl;
}
if (maswtab == 100){
    cout   <<naz<<"-"<<nom1<<"-"<<msto1<<"                   "<<naz<<"-"<<nom<<"-"<<msto2<<"                   "<<naz<<"-"<<nom4<<"-"<<msto3<<endl;
    cout   <<naz<<"-"<<nom2<<"-"<<msto4<<"                   "<<naz<<"-"<<nom<<"-"<<msto<<"                   "<<naz<<"-"<<nom5<<"-"<<msto6<<endl;
    cout   <<naz<<"-"<<nom3<<"-"<<msto7<<"                   "<<naz<<"-"<<nom<<"-"<<msto8<<"                   "<<naz<<"-"<<nom6<<"-"<<msto9<<endl;
}

	return 0;
}
