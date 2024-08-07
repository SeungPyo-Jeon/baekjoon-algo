#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Point{
public:
    int x,y;
    Point(int x, int y){
        this-> x = x;
        this-> y = y;
    }
    
    bool operator <( const Point p){
        if( this->y == p.y){
            return this->x < p.x;
        }else{
            return this->y < p.y;
        }
    }
};

int main(){
    int N;
    cin >> N;
    vector<Point> v;
    
    int x,y;
    for( int i = 0; i < N; i++ ){
        scanf("%d %d",&x,&y);
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    
    for( auto p: v){
        auto [x,y] = p;
        printf("%d %d\n",x,y);
    }
} 