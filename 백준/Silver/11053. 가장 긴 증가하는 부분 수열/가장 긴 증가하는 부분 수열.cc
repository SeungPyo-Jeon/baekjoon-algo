#include <iostream>
using namespace std;

int max( int i, int j ){
	if( i > j)
		return i;
	return j;
}

int main(){
	int T;
	cin >> T;
	int arr[T];
 	int part[T] = {1};
 	
	for( int i = 0; i < T; i++){
		cin >> arr[i];
		part[i] = 1;
	}
	int maximum = 0;
	for( int i =0; i < T; i++){
		for( int j = 0; j < i; j++){
			if( arr[i] > arr[j] ){
				part[i] = max( part[i], part[j]+1);
			}
		}
		maximum= max(part[i] , maximum);
		
	}
	cout << maximum;
}