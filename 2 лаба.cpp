
#include <iostream>
#include <stdio.h>
#include <string>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++){
        if (s[i] == s[i-1]){
            s.erase(s.begin()+i);
        }
    }
    cout << s << endl;
    return 0;
}
