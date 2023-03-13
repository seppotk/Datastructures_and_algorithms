#include <iostream>
#include <vector>
#include <math.h>

#define vi vector<int>
#define vii vector<vi>

using namespace std;

// 1. Faith -> (Math Relation)
// 2. Recursive Tree (Recursive Code with Tree)
// 3. Recursive Code -> Memoization
// 4. Observation
// 5. Memoization -> Tabulation
// 6. Optimization

void display(vi &dp)
{
    for (int ele : dp)
    {
        cout << ele << " ";
    }
    cout << endl;
}

void display2D(vii &dp)
{
    for (vi &d : dp)
    {
        display(d);
    }
    cout << endl;
}

int fibo_memo(int n, vi &dp)
{
    if (n <= 1)
    {
        return dp[n] = n;
    }

    if (dp[n] != 0)
        return dp[n];

    int ans = fibo_memo(n - 1, dp) + fibo_memo(n - 2, dp);

    return dp[n] = ans;
}

int fibo_tabu(int N, vi &dp)
{
    for (int n = 0; n <= N; n++)
    {
        if (n <= 1)
        {
            dp[n] = n;
            continue;
        }

        int ans = dp[n - 1] + dp[n - 2]; // fibo_memo(n - 1, dp) + fibo_memo(n - 2, dp);
        dp[n] = ans;
    }
    return dp[N];
}

int fibo_opti(int n)
{
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }

    return a;
}

void multiply(vii &a, vii &b)
{
    int a00 = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    int a01 = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    int a10 = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    int a11 = a[1][0] * b[0][1] + a[1][1] * b[1][1];

    a[0][0] = a00;
    a[0][1] = a01;
    a[1][0] = a10;
    a[1][1] = a11;
}

// a = {{1, 1}, {1, 0}}
void fibo_opti_log(vii &a, int b, vii &res)
{
    if (b <= 1)
        return;

    fibo_opti_log(a, b / 2, res);
    multiply(res, res);

    if (b % 2 != 0)
        multiply(res, a);
}

int fibo_opti_RKnott(int n)
{
    if (n <= 1)
        return n;

    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

void fibo()
{
    int n;
    cin >> n;

    vi dp(n + 1, 0);
    int ans = fibo_memo(n, dp);
    // int ans = fibo_tabu(n, dp);
    // ans = fibo_opti(n);

    display(dp);

    // cout << ans << endl;
    cout << fibo_opti_RKnott(n) << endl;

    // vii a{{1, 1}, {1, 0}};
    // vii res{{1, 1}, {1, 0}};

    // if (n == 0)
    //     cout << 0 << endl;
    // fibo_opti_log(a, n, res);
    // cout << res[0][1] << endl;

    // display2D(res);
}

int main()
{
    fibo();
    return 0;
}