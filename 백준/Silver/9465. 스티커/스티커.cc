#include <iostream>
using namespace std;

int compare( int a, int b){
	if( a > b)
		return a;
	else
		return b; 
}

int main(){
	int T;
	cin >> T;
	for( int t = 0; t < T; t++){
		int T;
		cin >> T;
		int stickers[2][T];
		int arr[2][T] = {0};
		for( int i =0; i < 2; i++){
			for( int j = 0; j < T; j++){
				cin >> stickers[i][j];
			}
		}
		
		for( int i = 0; i< T; i++){
			if( i == 0 ){
				arr[0][i] = stickers[0][i];
				arr[1][i] = stickers[1][i];
			}else if( i == 1){
				arr[0][i] = compare(arr[1][i-1]+stickers[0][i],stickers[0][i]);
				arr[1][i] = compare(arr[0][i-1]+stickers[1][i],stickers[1][i]);
			}else{
				int pre2 = compare(arr[0][i-2],arr[1][i-2] ) + stickers[0][i];
				int pre1 = compare( arr[1][i-1]+stickers[0][i],stickers[0][i] );
				arr[0][i] = compare(pre2, pre1);
				pre2 = compare(arr[0][i-2],arr[1][i-2] ) + stickers[1][i];
				pre1 = compare( arr[0][i-1]+stickers[1][i],stickers[1][i] );
				arr[1][i] = compare(pre2, pre1);
			}
			//cout << i << " "<< arr[1][i] <<" "<<arr[0][i] <<endl;
		}
		
		cout <<compare(arr[0][T-1],arr[1][T-1])<<endl;
	}
	
}