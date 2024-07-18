#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for( int i =0; i<n ; i++){
        for( int j = 1; j <= n+i; j++){
            if( i != n-1){
                if( j == n-i || j == n+i) cout <<"*";
                else cout << " ";
            }else{
                cout <<"*";
            }
        }
       cout << endl;
    }
}