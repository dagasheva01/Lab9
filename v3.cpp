#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#define pb push_back
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	vector <int> A;

	for(int i=0; i<n; ++i) {
		int r;
		cin >> r;
		A.pb(r);
	    }

   reverse(A.begin(),A.end());
   for(int i=0; i<n; ++i)
   		cout << A[i] << " ";


return 0;
}