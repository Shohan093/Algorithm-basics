#include<bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int sz = 40;

int main() {
	fast_io

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // Online Judge

	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string ans;
	// cout << a << ' ' << b << '\n';
	int carry = 0;
	for(int i = 0; i < a.length(); ++i) {
		int d1 = a[i] - '0', d2 = b[i] - '0';
		int sum = carry + d1 + d2;
		carry = sum / 10;
		char ch = (sum % 10) + '0';
		ans.push_back(ch);
	}
	// cout << "Carry: " << carry << '\n';
	if(carry) ans.push_back(carry + '0');
	reverse(ans.begin(), ans.end());
	for(int i = 0; i < ans.length(); ++i) cout << ans[i];
	cout << '\n';
	return 0;
}