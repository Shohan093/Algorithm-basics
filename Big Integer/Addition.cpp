#include<bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main() {
	fast_io

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // Online Judge

	string a, b;
	cin >> a >> b;
	if(a.length() > b.length()) {
		swap(a, b);
	}
	string sum = "";
	reverse(all(a));
	reverse(all(b));
	int carry = 0;
	for(int i = 0; i < a.length(); ++i) {
		int d1 = a[i] - '0', d2 = b[i] - '0';
		int add = d1 + d2;
		sum.push_back((add % 10) + '0');
		carry = add / 10;
	}
	for(int i = a.length(); i < b.length(); ++i) {
		int k = b[i] - '0';
		int d = k + carry;
		sum.push_back((d % 10) + '0');
		carry = d / 10;
	}
	if(carry) {
		sum.push_back(carry + '0');
	}
	reverse(all(sum));
	cout << sum << '\n';
	return 0;
}
