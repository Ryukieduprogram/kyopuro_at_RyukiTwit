#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <math.h>
#include <ctype.h>
#include <numeric>
#include <stdexcept>
#include <regex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repe(i,x,n) for(int i=x; i<(n); ++i)
#define pie 3.1415926535897932384
#define _GLIBCXX_DEBUG
#define All(a) (a).begin(),(a).end()
#define rAll(a) (a).rbegin(),(a).rend()
#define pb push_back
#define mk make_pair
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define decimal cout << fixed << setprecision(20);
#define nextP next_permutation
#define em emplace_back
using ll = long long;
using P = pair<int, int>;
const ll MOD = 1000000007;
const ll INF1 = 1e18;
const ll mod = 998244353;
const int INF = 100000000;

template<class T> inline bool chmax(T& a, T b) {if(a < b) {a = b; return 1;} return 0; }
template<class T> inline bool chmin(T& a, T b) {if(a > b) {a = b; return 1;} return 0; }

ll isprime(ll N) {
    for(ll i=2; i*i<N; i++) {
        if(N%i == 0) {
            return false;
        }
    }
    return true;
}
