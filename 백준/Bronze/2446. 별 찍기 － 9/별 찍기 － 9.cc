 #include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for( int i = n; i > 0 ; i-- ){
      for( int j = 1; j < n+i ; j++ ){
        if( j > n - i) cout << "*";
        else cout << " ";
      }
      cout << endl;
    }
    for( int i = 2; i <=n ; i++ ){
      for( int j = 1; j < n+i ;   j++ ){
        if( j > n - i ) cout << "*";
        else cout << " ";
      }
      cout << endl;
    }

}