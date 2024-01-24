#include <iostream>
 
using namespace std;
  
int main(){
    int base, exp, i, result = 1;

    base = 2;
    int n;
    cin >> n;
    if(n%2){
        cout << 0;
        return 0;
    }
    exp = n / 2;
    // Calculate base^exponent by repetitively multiplying base
    for(i = 0; i < exp; i++){
        result = result * base;
    }
      
    cout << result;
     
    return 0;
}