#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <stdio.h>

int main(){
    int N,K;
    cin >> N;
    cin >> K;
    vector<int> v;
    int a ;
    for( int i = 0; i < N; i++){
        scanf("%d",&a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    cout <<v[K-1];
}