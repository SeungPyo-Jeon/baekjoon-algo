#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool translate( char c){
    if( c == ')') return 0;
    else if( c=='(') return 1;
}

int main(){
    int N;
    cin >> N;
    string str;  
    
    for( int i = 0; i < N; i++){
        vector<bool> v;
        cin >> str;
        
        for( int idx=0; idx < str.length(); idx++ ){
            bool cur = translate(str[idx]);
            
            if( cur ){
                v.push_back(cur);// ( 삽입
            }else{    // ) 이라면
                if( v.size()==0 ){
                    v.push_back(cur);
                    break;
                }
                v.pop_back();
            }
        }
        
        if( v.size()==0 ) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}