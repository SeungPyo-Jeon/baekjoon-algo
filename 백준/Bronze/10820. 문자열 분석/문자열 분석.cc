#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    
    int upperCase = 0;
    int lowerCase = 0;
    int numberCase = 0;
    int blankCase = 0;
    for( ;; ){
        getline(cin,str);
        if( str.compare("") == 0) break;
        upperCase=0;
        lowerCase=0;
        numberCase=0;
        blankCase=0;
    for( int i = 0; i < str.length(); i++){
        int a = str[i]-'a';
        if( -1 < a && a < 27) lowerCase++;
        a = str[i]-'A';
        if( -1 < a && a < 27) upperCase++;
        a = str[i]-'0';
        if( -1 < a && a < 10) numberCase++;
        a= str[i]-' ';
        if( !a ) blankCase++;
        
    }
    cout <<lowerCase<<" "<< upperCase <<" "<<numberCase<<" "<<blankCase<<"\n";
    str="";
    }
}