#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

class Point{
public:
    int x;
    int y;
    
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    
    bool operator<(const Point &p1 ){
        if( this->x == p1.x){
            return this->y < p1.y;
        }else{
            return this->x < p1.x;
        }
    }
};


int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<Point> arr;
    
    int x;
    int y;
    for( int i = 0; i<N; i++){
        cin >> x >> y;
        arr.push_back(  {x,y} );
    }
    
    sort( arr.begin(), arr.end());
    
    for(auto p: arr){
        auto [x,y] = p;
        cout << x<<" "<<y << "\n";
    }
}