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

struct pt{
	int x, y;
};

pt p, q, r;

void orientation() {
	cin >> p.x >> p.y >> q.x >> q.y >> r.x >> r.y;
	int ok = (q.y - p.y) * (r.x - q.x) - (r.y - q.y) * (q.x - p.x);
	if(ok == 0) cout << "Linear\n";
	else if(ok < 0) cout << "Counterclockwise\n";
	else cout << "Clockwise\n";
	return;
}

int32_t main() {
	
	fast_io
	init();
	
	int t;
	cin >> t;
	for(int tc = 1; tc <= t; tc++) {
		cout << "Case #" << tc << ": ";
		orientation();
	}
	return 0;
}
