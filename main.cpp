#include <bits/stdc++.h>

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <math.h>
//#include <vector>
//#include <iomanip>
//#include <map>
//#include <cstdio>

using namespace std;
typedef long long ll;
//ifstream cin("input.txt");
//ofstream cout("output.txt");

vector<vector<ll>> s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    s.resize(n, vector<ll>(n));
    int count = 0;
    bool lake = true;
    int i = 0, j = 0;
    while (count != (n*n + 1) / 2) {
        if (lake) {
            if ((i >= 0 && i < n) && (j >= 0 && j < n)) {
                s[i][j] = count;
                s[n - i - 1][n - j - 1] = n*n - count - 1;
                count++;
                i--;
                j++;
            } else {
                if (j < n) {
                    i++;
                    lake = false;
                } else {
                    i -= 2;
                    j--;
                    lake = false;
                }
            }
        } else {
            if ((i >= 0 && i < n) && (j >= 0 && j < n)) {
                s[i][j] = count;
                s[n - i - 1][n - j - 1] = n*n - count - 1;
                count++;
                i++;
                j--;
            } else if (i < n) {
                j++;
                lake = true;
            } else {
                i--;
                j += 2;
                lake = true;
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        for (int l = 0; l < n; ++l) {
            cout << s[k][l] << " ";
        }
        cout<<"\n";
    }
    return 0;
}

