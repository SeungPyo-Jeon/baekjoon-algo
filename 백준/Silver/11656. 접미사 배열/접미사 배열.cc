#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    string str;
    cin >> str;
    vector<string> v;
    for( int i = 0; i < str.length(); i++){
        v.push_back( str.substr(i,str.length()));
    }
    sort( v.begin(), v.end());
    vector<string>::iterator iter;
    for( iter=v.begin();iter!= v.end(); iter++){
        cout<<*iter<<"\n";
    }
    
}