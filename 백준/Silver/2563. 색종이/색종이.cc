#include <iostream>

using namespace std;

int main(){
	int N;
	int canvas[100][100] = {0};
	int cover = 0;
	cin >> N;
	int x,y = 0;
	for ( int i=0; i < N; i++){
		cin >> x;
		cin >> y;
		for( int dx = x; dx < x+10 ; dx++ ){
			for( int dy = y; dy < y+10; dy++){
				if( canvas[dx][dy] ) continue;
				cover += 1;
				canvas[dx][dy] = 1;
			}
		}
	}
	cout << cover;
}