#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, m;
    cin >> l >> m;
    if (l <= 23 && (m >= 500 && m <= 1000))
        cout << "Take Medicine" << endl;
    else
        cout << "Don't take Medicine" << endl;
}