#include<bits/stdc++.h>

using namespace std;
void divideNumber(double num) {
    cout << setprecision(10) << fixed;
    double discriminant = sqrt(num * num - 4 * num);
    double x = (num + discriminant) / 2.0;
    double y = (num - discriminant) / 2.0;
    cout << "Y " << x << " " << y << endl;
}

int main() {
    double number;
    int t;
    cin >> t;
    while (t--)
    {
      cin >> number;
      if(number<=3 && number>0){
          cout << "N" << endl;
          continue;
      }
       divideNumber(number);
    }
    return 0;
}
