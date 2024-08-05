#include <iostream>
#include <string>
using namespace std;

int main(){
    string s("9");
    string input;
    cin >> input;
    s.append(input);
    
    int size = s.length();
    long long d[size] ={0};
    d[0] =1;
    d[1] = 1;
    
    for( int i = 2; i < s.length(); i++ ){
        if( s[i] != '0')
            d[i] = d[i-1]%1000000;
        else
            d[i] = 0;
            
        if( s[i-1]!= '0' ){
            int pre_cur = (s[i-1]-'0')*10 + (s[i]-'0');
            if( 0 < pre_cur && pre_cur <= 26 ){
                d[i] =( d[i]+ d[i-2] ) %1000000;
            }
        }
    }
    
    if( s.length() < 2){
        cout << 0;
    }else if( s[1] == '0'){
        cout << 0;
    }
    else{
        cout << d[size-1]%1000000;
    }
}