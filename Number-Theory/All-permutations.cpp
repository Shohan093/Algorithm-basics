#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define uint unsigned long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ff first
#define ss second
#define fopen freopen("input.txt", "r", stdin)
#define fclose freopen("output.txt", "w", stdout)
#define sz(a) (int)a.size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

template<typename T> 
void __print(const T& container) { for(size_t i = 0; i < sz(container); ++i) cout << i << " : " << container[i] << '\n'; }

template<typename T1, typename T2>
void __print(const vector<pair<T1, T2>>& vp) { for(auto x : vp) cout << x.ff << ' ' << x.ss << '\n'; }

int factorial(int n) {
	int res = 1;
	for(int i = 1; i <= n; ++i) {
		res *= i;
	}
	return res;
}

int32_t main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif //ONLINE_JUDGE
	
	FastIO
	
	int n; cin >> n;
	vector<int> v(n);
	for(auto &el : v) cin >> el;
	int f = factorial(n);
	vector<vector<int>> ans;
	while(f--) {
		int loc = -1;
		for(int i = n - 1; i > 0; --i) {
			if(v[i] > v[i - 1]) {
				loc = i - 1;
				break;
			}
		}
		if(loc == -1) {
			reverse(all(v));
			ans.emplace_back(v);
			continue;
		}
		for(int i = n - 1; i > loc; --i) {
			if(v[i] > v[loc]) {
				swap(v[i], v[loc]);
				break;
			}
		}
		reverse(v.begin() + loc + 1, v.end());
		ans.emplace_back(v);
	}
	for(auto vec : ans) {
		for(auto el : vec) cout << el << ' ';
		cout << '\n';
	}
}
