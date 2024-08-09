#include <iostream>
#include <string>

using namespace std;
int isEnglish(char c){
    int a = c -'a';
    if(  -1 < a && a < 27){
        return a;
    }
    a = c - 'A';
    if( -1 < a && a < 27){
        return a;
    }
    return -1;
}
int main(){
    string str;
    getline( cin, str);
    //cout<<isEnglish(str[7])<<str[7]<<(char)( str[7]-13) <<endl;
    
    for( int i = 0; i < str.length(); i++){
        int a = isEnglish(str[i]);
        if( a > -1 ){
            if( a < 13){
                cout << (char)(str[i]+13);
            }else{
                cout << (char)(str[i]-13);
            }
        }else{
            cout<<str[i];
        }
    }
}