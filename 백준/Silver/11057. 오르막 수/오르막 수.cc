#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long arr[1001][10];
  
  for( int i=0; i<10; i++){
    arr[1][i] = 1;
  }
  
  for( int i=2; i<=n; i++){
    for( int j =0; j<10; j++){
      if( j == 0 ){
        arr[i][j] = arr[i-1][j]%10007;
      }else{
      arr[i][j] = (arr[i-1][j]+arr[i][j-1]) %10007; 
      }
    }
  }
  long long sum = 0;
  for( int i=0; i<10; i++){
    sum += arr[n][i]  ;
  } 
  cout << sum %10007 ;
  return 0;
}