#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define eb emplace_back

const ll sz = 1e6 + 1;


// storing the primes as booling value.
// if i-th number is prime then i is true, false otherwise.
vector<bool> prime(sz, true);

// checking to sqrt(sz) will be enough because all the divisors 
// of a number is present before sqrt(n) and comes in pair
void seive() {
	prime[0] = prime[1] = false;
	for(ll i = 2; i * i <= sz; ++i) {
		if(prime[i]) {
			for(ll j = i * i; j <= sz; j += i) {
				prime[j] = false;
			}
		}
	}
	return;
}

int main() {
	fast_io

	seive();
	int n; cin >> n;
	if(prime[n]) cout << "Prime\n";
	else cout << "Composite\n";
	cout << '\n';
	return 0;
}
