#include <iostream>
#include <unordered_map>
using namespace std;
#include <algorithm>
int main(){
    int N;
    cin >> N;
    
    unordered_map<__int64_t,int> m;
    __int64_t a;
    for( int i = 0; i < N; i++ ){
        cin >>a;
        m[a]++;
    }
    unordered_map<__int64_t,int>::iterator iter;
    iter = m.begin();
    __int64_t max = iter->first;
    int cnt = iter->second;
    iter++;
    for( iter; iter != m.end(); iter++ ){
        if( cnt == iter->second ){
            max = min (max, iter->first);
        }else if(cnt < iter->second){
            max = iter->first;
            cnt = iter->second;
        }
    }
    cout << max;
}