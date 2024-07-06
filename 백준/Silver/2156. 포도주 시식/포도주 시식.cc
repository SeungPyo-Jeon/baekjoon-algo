#include <iostream>
using namespace std;

long compare( int i, int j, int k){
    if( i < j ){
        if( j <k ){
            return k;
        }else{
            return j;
        }
    }else{
        if( i < k){
            return k;
        }else{
            return i;
        }
    }
}
int main(){
    int T;
    cin >> T;
    long arr[T];
    long sum[T];
    for( int i =0; i <T; i++ ){
        cin >> arr[i]; 
    }
    if( T > 0) sum[0] = arr[0];
    if( T > 1) sum[1] = arr[0]+arr[1];
    if( T > 2) sum[2] = compare( sum[1], arr[1]+arr[2], arr[0]+arr[2]);
    for(int i = 3; i<T; i++){
        sum[i] = compare( sum[i-1], arr[i]+sum[i-2], arr[i]+arr[i-1]+sum[i-3]);
    }
    cout << sum[T-1] <<endl;
}