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

const int inf = 1e12;

int partition(vector<int>& v, int low, int high) {
	int pivot = v[low];
	int i = low, j = high;
	while(i < j) {
		do {
			i++;
		}while(i <= high and v[i] <= pivot);
		do {
			j--;
		}while(v[j] > pivot);
		if(i < j) swap(v[i], v[j]);
	}
	swap(v[j], v[low]);
	return j;
}

void quick_sort(vector<int>& v, int low, int high) {
	if(low < high) {
		int j = partition(v, low, high);
		quick_sort(v, low, j);
		quick_sort(v, j + 1, high);
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
	v.push_back(inf);
	quick_sort(v, 0, n);
	v.pop_back();
	for(auto el : v) cout << el << ' ';
	cout << '\n';
	return 0;
}
