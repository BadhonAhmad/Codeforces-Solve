 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, ax, ay, bx, by, cx, cy, dx, dy, a;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        dx = ax + cx - bx;
        dy = ay + cy - by;
        a = 0.5 * (((ax * by) + (bx * cy) + (cx * dy) + (dx * ay)) - ((ay * bx) + (by * cx) + (cy * dx) + (dy * ax)));
        if (a < 0){
            a *= -1;}
        printf("Case %d: %d %d %d\n", i, dx, dy, a);
    }
    return 0;
}

