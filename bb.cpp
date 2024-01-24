#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;
    double u1,u2,u3,ac,acc,t1,t2,t3, bird, train;
    for(int i = 1; i <= testCase; i++){
        scanf("%lf %lf %lf %lf %lf", &u1, &u2, &u3, &ac, &acc);
        t1 = u1/ac;
        t2 = u2/acc;
        t3 = t1;
        if(t1 < t2)
            t3 = t2;
        bird = u3 * t3;
        train = u1 * t1 - .5 * (ac * t1 * t1);
        train += u2 * t2 - .5 * (acc * t2 * t2);
        printf("Case %d: %.9lf %.9lf\n", i, train, bird);
    }
    return 0;
}