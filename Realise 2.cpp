#include <iostream>
#include <string.h>
#include <fstream> 

using namespace std;

int main(){
	
	int  n;
	cout<<"n="; 
	cin>>n;

	ofstream F;
	F.open("C:\\abc.txt", ios::out);
	if (!(F.is_open())){
            cout << "File not found\n";
            cout << "Quit"<<endl;
            ofstream ofs("C:\\abñ.txt"); 
            ofs.close();
        } else {
            cout << "Searching file.. .. .. .. \n";
            cout << "File searched!\n";
    }
        
    for (int i=0; i<n; i++){
        cout<<"0x00 ";
	}

	F.close();
	
    return 0;
}
