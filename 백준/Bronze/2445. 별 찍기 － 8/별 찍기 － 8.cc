#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for( int i = 1; i <= 2*n-1; i++){
        for( int j = 1; j <= 2*n; j++ ){
            if( i <= n ){
              if( j <= i || j > 2*n - i) cout << "*";
              else cout<<" ";
            }else{
              if( 2*n - i >=j || i  < j ) cout<<"*";
              else cout << " ";
            }
        }
        cout << endl;
    }
}
