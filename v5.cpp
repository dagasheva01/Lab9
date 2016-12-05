#include <iostream>
#include <cmath>
#include <vector>
#define pb push_back

using namespace std;

int main () {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int n;
	cin >> n;
	int a[n];

	for(int i=0; i<n;++i) 
		cin >> a[i];

	sort(a, a+n);
	if(n%2==0)
		cout << a[n/2-1] << " " << a[n/2];

	else 
		cout << a[n/2] << " ";

return 0;
}