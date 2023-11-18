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

pt p, q, r, s;

int orientaion(pt p, pt q, pt r) {
	int ok;
	ok = (q.y - p.y) * (r.x - q.x) - (r.y - q.y) * (q.x - p.x);
	if(ok == 0) return 0;

	return (ok > 0 ? 1 : 2);
}

bool onSegment(pt p, pt q, pt r) {
	bool x = (r.x <= max(q.x, p.x) and r.x >= min(q.x, p.x));
	bool y = (r.y <= max(q.y, p.y) and r.y >= min(q.y, p.y));

	return (x and y);
}

bool doIntersect() {
	cin >> p.x >> p.y >> q.x >> q.y >> r.x >> r.y >> s.x >> s.y;
	int o1, o2, o3, o4;
	o1 = orientaion(p, q, r);
	o2 = orientaion(p, q, s);
	o3 = orientaion(r, s, p);
	o4 = orientaion(r, s, q);

	if(o1 != o2 and o3 != o4) return true;

	if(o1 == 0 and onSegment(p, q, r)) return true;
	if(o2 == 0 and onSegment(p, q, s)) return true;
	if(o3 == 0 and onSegment(r, s, p)) return true;
	if(o4 == 0 and onSegment(r, s, q)) return true;

	return false;
}

int32_t main() {

	fast_io
//	init();

	int t;
	cin >> t;
	for(int tc = 1; tc <= t; ++tc) {
		// cout << "Case #" << tc << ": ";
		if(doIntersect()) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
