#include <iostream>
#include <cmath>
using namespace std;
void divideNumber(double num) {
    double discriminant = sqrt(num * num - 4 * num);
    double x = (num + discriminant) / 2.0;
    double y = (num - discriminant) / 2.0;

    std::cout <<  x << " " << y << std::endl;
}

int main() {
    double number;
    int t;
    cin >> t;
    while (t--)
    {

    //std::cout << "Enter a number: ";

    
    std::cin >> number;
    divideNumber(number);
    }
    

    return 0;
}
