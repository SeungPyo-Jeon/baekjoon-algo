#include <iostream>

int main(){
    int n, a, b;
    std::cin >> n;
    for( int i=0; i < n; i++){
        std::cin >> a;
        std::cin >> b;
        std::cout << a+b << std::endl;
    }
    return 0;
}