#include <iostream>
#include <stdio.h>
#include <string>
 
using namespace std;
 
int main() {
	setlocale(LC_ALL, "Russian");
	
    string s;
	cout <<"Введите строку?" << endl;
    cin >> s;
    
    string p;
    cout <<"Введите подстроку?" << endl;
    cin >> p;
    int k ;
    
    
    for (int i = 0;i<p.length();i++){                                          //нашел длину подстроки 
    k++;
}



    for (int i = 0; i < s.length(); i++){                                       //если подстрока из 1 символа,первое совпадение нужной длинны 
    	if (s[i] == p[0] and k == 1) {
    cout <<"Вхождение подстроки длиной 1 начинается с " <<i<<" элемента"<<endl;
    break;
	}
	
	else
	
	{	
	if (s[i] == p[0]) {                                                                     //если подстрока из k символов,нужной длинны подстроки
    	for (int j = 1; j < k; j++){
        if (s[i+j] == p[j]){
        	cout <<"Вхождение начинается с " <<i<<" элемента"<<endl; 
        }     
        }
        break;
    }
    }
}

    return 0;
}
