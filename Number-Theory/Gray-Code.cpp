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

int n;
 
void gray_bits(int x) {
	for(int i = n - 1; i >= 0; --i) {
		cout << ((x >> i) & 1ll);
	}
	cout << '\n';
}
 
int32_t main() {
	
	fast_io
	
	cin >> n;
	for(int i = 0; i < (1ll << n); ++i) {
		int gray_code = i ^ (i >> 1);
		gray_bits(gray_code);
	}
	return 0;
}
