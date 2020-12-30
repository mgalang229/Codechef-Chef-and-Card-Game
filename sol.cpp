#include <bits/stdc++.h>

using namespace std;

int Process(long long n) {
	// this is the algorithm for summing up the digits in an integer (or in this case a 'long long')
	int sum = 0;
	while (n > 0) {
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		long long a[n], b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i] >> b[i];
		}
		int chef = 0;
		int morty = 0;
		// find the sum of every digit in the integer 'a[i]' and 'b[i]'
		// if 'a[i]' greater than 'b[i]', then chef wins that round 'i'
		// if 'a[i]' is less than 'b[i]', then morty wins that round 'i'
		// otherwise, if they're equal then both of them will receive a point
		for (int i = 0; i < n; i++) {
			if (Process(a[i]) > Process(b[i])) {
				chef++;
			} else if (Process(a[i]) < Process(b[i])) {
				morty++;
			} else {
				chef++;
				morty++;
			}
		}
		if (chef > morty) {
			cout << 0 << " " << chef;
		} else if (chef < morty) {
			cout << 1 << " " << morty;
		} else {
			cout << 2 << " " << chef;
		}
		cout << '\n';
	}
	return 0;	
}
