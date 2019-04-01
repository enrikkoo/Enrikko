#include <iostream>
#include <cstdio>
#include <string>
#include <stdio.h>
using namespace std;
 
int main() {
 setlocale(LC_ALL, "rus");
	int max_sz;
    cout << "VVedite max_sz=";
    cin >> max_sz;
     cout << "Vvedite stroky i=";
    cin >> max_sz;
    char c;
    int i=0;
	int s = 0;
	string out_str;

    FILE * readfile = fopen("file.txt", "r"); 
	while (s != i)
	{
		c = fgetc(readfile);
		if (c == '\n')
		{
			s++;
		}
	}
	s = 0;
	c = fgetc(readfile);
	for (int j = 0; j < max_sz; j++)
	{
		out_str[j] = s;
		if (s != '\n')
		{

			s++;
		}
	}

	    cout << s;
	return 0;
}

