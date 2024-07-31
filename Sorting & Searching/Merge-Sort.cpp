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

void merge(vector<int>& v, int low, int mid, int high) {
	vector<int> temp;
	int l = low, r = mid + 1;
	while(l <= mid and r <= high) {
		if(v[l] < v[r]) {
			temp.push_back(v[l]);
			++l;
		}
		else {
			temp.push_back(v[r]);
			r++;
		}
	}
	while(l <= mid) {
		temp.push_back(v[l]);
		++l;
	}
	while(r <= high) {
		temp.push_back(v[r]);
		++r;
	}
	for(int i = low; i <= high; ++i) {
		v[i] = temp[i - low];
	}
	return;
}

void merge_sort(vector<int>& v, int low, int high) {
	if(low < high) {
		int mid = low + (high - low) / 2;
		merge_sort(v, low, mid);
		merge_sort(v, mid + 1, high);
		merge(v, low, mid, high);
	}
	return;
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
	merge_sort(v, 0, n - 1);
	for(auto el : v) cout << el << ' ';
	cout << '\n';
	return 0;
}
