#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <time.h>

//оформление +- пытался сделать похожим :)


using namespace std;


    void print_number_table (short col,short row) {
    	srand ( time(NULL) );  
    	for (int j =0; j<row ;++j){

    	for (int i = 0; i<col + row ; ++i){
		cout << "* ";
		}
			cout << ""<<endl;
	for (int i = 0; i<col ; ++i){

		cout << "|" <<0 + rand () % 9<< "|";
		}
		cout << ""<<endl;
		cout << "|";
	for (int i = 0; i<col ; ++i){
			cout << "-+ " ;
		}
		cout << "|" ;
	cout << ""<<endl;
		}
	}

int main(){
	short col = 3;
	short row = 2;

	
	print_number_table(col,row);

	return 0;
}
