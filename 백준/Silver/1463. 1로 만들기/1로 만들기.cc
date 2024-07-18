#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int* arr = new int[n+1];
  for(int i = 0; i < n+1; i++){
    arr[i] = 999999;
  }  
  int index = 1;
  arr[index]=0;
  while( index < n){
    if( index*3 <= n && arr[index]+1 < arr[index*3]){
      arr[index*3] = arr[index]+1;
    }
    if( index*2 <= n && arr[index]+1 < arr[index*2]){
      arr[index*2] = arr[index]+1;
    }
    if( index+1 <= n && arr[index]+1 < arr[index+1]){
      arr[index+1] = arr[index]+1;
    }
    index++;
  }
  /*for(int i = 0; i < n+1; i++){
    cout << arr[i] << " ";
  } */
  cout << arr[n];
  return 0;
}