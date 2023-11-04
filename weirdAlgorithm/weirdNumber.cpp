#include <iostream>
using namespace std;


int main(){
    long number;
    cin >> number;
    cout << number;
    while(number > 1) {
        if (number & 1) number = (number * 3) + 1;
        else number /= 2;
        cout << " " << number ;
    }
}