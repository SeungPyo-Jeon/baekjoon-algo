#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    //int* arr = (int*)malloc(n * sizeof(int));
    int min, max =0;
    cin >> min;
    max = min;
    int temp =0;
    for( int i = 1; i < n; i++){
        
        cin >> temp;
        if( temp > max ){
            max = temp;
        }
        if( temp < min ){
            min = temp;
        }
        //cout << arr[i] << '\n';
    }
    cout << min << ' ' << max;
    return 0;
}