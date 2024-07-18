#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    int sum = 0;
    char c[101]="";
    cin.getline( c, 101);
    int i =0;

    while( i < n){
        
        //cout << c[i] << endl;
        sum += c[i]-'0';
        i++;
    }
    cout << sum;
    return 0;
}