#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  int arr[12]{0};
  
  for( int test = 0 ; test < a ; test++ ){
    int n;
    cin >> n;
    for( int i =0 ; i <= n; i++){
      if(arr[i]!=0){
        continue;
      }else if( i == 1 || i == 0){
        arr[i] = 1;
      }else if( i == 2){
        arr[i] = 2;
      }else{
        arr[i] = (arr[i-1] + arr[i-2] + arr[i-3]);
      }
    }
    cout << arr[n] << endl;
  }
  
}
