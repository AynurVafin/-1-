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
    int i = 0, j = n;
    for (int diag = n-1; diag >=0 ; --diag) {
        j = diag;
        i = 0;
        while(i!=n){
            s[i][(j+n)%n]=count;
            count++;
            i++;
            j--;
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

