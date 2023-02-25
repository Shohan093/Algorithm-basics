#include<bits/stdc++.h>
using namespace std;

typedef long long int huge;
typedef unsigned long long int Huge;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define sz(a) (huge)a.size()
#define all(a) a.begin(), a.end()
#define fori(a, n) for(huge i = a; i < n; ++i)
#define nl '\n'

const huge inf = 1e9;
const Huge INF = 1e18;

void loopcheck(vector<huge> &v) { for(int i = 0; i < sz(v); ++i) cout << v[i] << ' '; }

void solve() {
	
	return;
}

int main() {

    fast_io

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    // double startTime = clock();

	int test;
	// test = 1;
	cin >> test;
	for(int test_case = 1; test_case <= test; test_case++) {
		// cout << "Case " << test_case << ": ";
		solve();
	}
	// cerr << (double)(clock() - startTime) / CLOCKS_PER_SEC << '\n';
	return 0;
}
