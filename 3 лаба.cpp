#include <iostream>
#include <stdio.h>
#include <string>
 
using namespace std;
 
int main() {
	setlocale(LC_ALL, "Russian");
	
    string s;
	cout <<"������� ������?" << endl;
    cin >> s;
    
    string p;
    cout <<"������� ���������?" << endl;
    cin >> p;
    int k ;
    
    
    for (int i = 0;i<p.length();i++){                                          //����� ����� ��������� 
    k++;
}



    for (int i = 0; i < s.length(); i++){                                       //���� ��������� �� 1 �������,������ ���������� ������ ������ 
    	if (s[i] == p[0] and k == 1) {
    cout <<"��������� ��������� ������ 1 ���������� � " <<i<<" ��������"<<endl;
    break;
	}
	
	else
	
	{	
	if (s[i] == p[0]) {                                                                     //���� ��������� �� k ��������,������ ������ ���������
    	for (int j = 1; j < k; j++){
        if (s[i+j] == p[j]){
        	cout <<"��������� ���������� � " <<i<<" ��������"<<endl; 
        }     
        }
        break;
    }
    }
}

    return 0;
}
