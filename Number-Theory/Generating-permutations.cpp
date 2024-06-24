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

class Solution {
public:
	// generating all the permutations of a string
	void permutationHelper(string& s, int idx, vector<string>& res) {
		if(idx == sz(s)) {
			res.push_back(s);
			return;
		}
		for(int i = idx; i < sz(s); ++i) {
			swap(s[i], s[idx]);
			permutationHelper(s, idx + 1, res);
			swap(s[i], s[idx]);
		}
	}
	string getPermutation(int n, int k) {
		string s;
		vector<string> res;
		for(int i = 1; i <= n; ++i) {
			s.push_back(i + '0');
		}
		permutationHelper(s, 0, res);
		sort(all(res));
		auto it = res.begin() + (k - 1);
		return *it;
	}
};

class Optimal_Solution {
public:
	string getPermutation(int n, int k) {
		string ans = "";
		vector<int> nums;
		int fact = 1;
		for(int i = 1; i < n; ++i) {
			fact *= i;
			nums.push_back(i);
		}
		nums.push_back(n);
		k--;
		while(true) {
			ans += to_string(nums[k / fact]);
			nums.erase(nums.begin() + k / fact);
			if(sz(nums) == 0) {
				break;
			}
			k %= fact;
			fact /= sz(nums);
		}
		return ans;
	}
};

int32_t main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif //ONLINE_JUDGE
	
	FastIO
  // generating k-th permuation
	int n, k; cin >> n >> k;
	Solution obj;
	string ans = obj.getPermutation(n, k);
	cout << ans << '\n';

	Optimal_Solution opt;
	ans = opt.getPermutation(n, k);
	cout << ans << '\n';
}
