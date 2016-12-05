#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int main () {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	
	vector <int> A;

	for(int i=0; i<n; ++i) {
		int r;
		cin >> r;
		A.push_back(r);
	}
	
	sort(A.begin(), A.end());
	
	
	for(int i = 0; i < A.size(); i++)
		cout << A[i] << " ";




}