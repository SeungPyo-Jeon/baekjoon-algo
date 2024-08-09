#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool trans( char c){
    if( c == '(') return 0;
    return 1;
}
int main(){
    string str;
    cin >> str;
    
    vector<bool> v;
    bool preChar = trans(str[0]);
    if( preChar==0 ) v.push_back(0);
    int cnt = 0; 
    //cout<< str[0] << " stack: "<<v.size() <<" cnt: "<< cnt<<endl;
    
    for( int i = 1; i < str.length(); i ++){
        bool curChar = trans( str[i] );
        //cout << str[i];
        if( curChar == 1){
            v.pop_back();
            if ( preChar == 0 ) cnt += v.size();
            else cnt+=1;
        }else{
            v.push_back( curChar );
        }
        preChar = curChar;
        //cout<< " stack: "<<v.size() <<" cnt: "<< cnt<<endl;
    }
    cout << cnt ;
}