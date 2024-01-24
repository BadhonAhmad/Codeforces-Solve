
#include <iostream>
#include <cmath>

using namespace std;
int convert(long long);

int main() {
  long long n,t;
  cin >> t;

  for (int i = 1; i <= t; i++){
      long long a, b, c, d, aaa, bbb, ccc, ddd, a1, b1, c1, d1;
  char aa, bb, cc, dd;
  scanf("%lld%c%lld%c%lld%c%lld", &a, &aa, &b, &bb, &c, &cc, &d, &dd);
  scanf("%lld%c%lld%c%lld%c%lld", &a1, &aa, &b1, &bb, &c1, &cc, &d1, &dd);
  aaa = convert(a1);
  bbb = convert(b1);
  ccc = convert(c1);
  ddd = convert(d1);
  if (aaa == a && bbb == b && ccc == c && ddd == d)
  {
      cout <<"Case "<<i<<": Yes" << endl;
    }
    else{
        cout <<"Case "<<i<<": No" << endl;
    }
}

 
  return 0;
}

int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  return dec;
}