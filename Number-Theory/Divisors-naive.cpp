#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define uint unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ff first
#define ss second
#define fopen freopen("input.txt", "r", stdin)
#define fclose freopen("output.txt", "w", stdout)
#define sz(a) (int)a.size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

void dsp(vector<int> v) { for(auto x : v) cout << x << ' '; }

void init() {
	#ifndef ONLINE_JUDGE
	fopen; fclose;
	#endif // ONLINE_JUDGE	
}

int n;

int32_t main() {
	
	fast_io
	// init();

	set<int> div;
	cin >> n;
	for(int i = 1; i * i <= n; ++i) {
		if(n % i == 0) {
			div.insert(i);
			div.insert(n / i);
		}
	}
	cout << sz(div) << '\n';
	for(auto x : div) cout << x << ' ';
	cout << '\n';
	return 0;
}
