#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
 
using namespace std;
using std::vector;
 
int main() {
    setlocale(LC_ALL, "Russian");
    vector <int> v = {3,2,2,4,7,3,2,76,22,6,4,6,2,677,5,2222,2,2,4};
    
    int d;
    cout <<"¬ведите какую цифру надо удлаить?" << endl;
    cin >> d;
    
    for (int i = 0; i < v.size(); ++i){
        if (v[i] == d){
            v.erase(v.begin()+i);
            i--;
        }
    }
   for (int i = 0; i < v.size(); ++i){
       cout<<v[i]<<" ";
    } 
    return 0;
}
