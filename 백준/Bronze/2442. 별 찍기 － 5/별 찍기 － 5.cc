#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for( int i = 1; i <= n; i++){
        for( int j = 1; j <=n; j++){
            if( n-i >= j ){
                cout<<" ";
            }else{
                cout <<"*";
            }
        }
        for( int j = i-1; j > 0; j--){
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}