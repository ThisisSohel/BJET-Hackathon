#include <bits/stdc++.h>
using namespace std;
long long findDigits(int n, int b)
{
    if (n < 0)
        return 0;

    if (n <= 1)
        return 1;

    // Use Kamenetsky formula to calculate
    // the number of digits
    double x = ((n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0)) / (log10(b));

    return floor(x) + 1;
}

int main()
{
    int n, num, base;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>num>>base;
        cout << "Case "<<i<<": "<<findDigits(num, base) << endl;
    }
    return 0;
}
