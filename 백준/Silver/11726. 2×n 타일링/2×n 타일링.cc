#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int* arr = new int[1001];
  
  for( int i =0 ; i <= n; i++){
    if( i == 1 || i == 0){
      arr[i] = 1;
    }else{
      arr[i] = (arr[i-1] + arr[i-2])% 10007;
    }
  }
  cout << arr[n];
}
