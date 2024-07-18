#include <iostream>
#include <string>

using namespace std;

int main(){
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI","SAT"};
    int daysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};
    
    int month,days;
    cin >> month >> days;
    int sum = days;
    for( int i = 0; i < month-1; i++){
      sum += daysPerMonth[i];
    }
    cout << day[sum%7];
    return 0;
}