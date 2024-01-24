#include <bits/stdc++.h>
using namespace std;

int r, c;
int mat[300][300];

int calMaxHist(int row[])
{
    stack<int> st;
    int tp;
    int mxa = 0;
    int ar = 0;
    int i = 0;

    while (i < c)
    {
        if (st.empty() || row[st.top()] <= row[i])
            st.push(i++);
        else
        {
            tp = row[st.top()];
            st.pop();
            ar = tp * i;

            if (!st.empty())
                ar = tp * (i - st.top() - 1);

            mxa = max(ar, mxa);
        }
    }

    while (!st.empty())
    {
        tp = row[st.top()];
        st.pop();
        ar = tp * i;

        if (!st.empty())
            ar = tp * (i - st.top() - 1);

        mxa = max(ar, mxa);
    }

    return mxa;
}

int calMaxRec()
{
    int res = calMaxHist(mat[0]);

    for (int i = 1; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j])
                mat[i][j] += mat[i - 1][j];
        }
        res = max(res, calMaxHist(mat[i]));
    }

    return res;
}

int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << calMaxRec() << endl;

    return 0;
}