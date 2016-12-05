#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

#define pb push_back
using namespace std;
int main ()  {
		freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	
	vector <int> A;
	while(true) {
		int r;
		cin >> r;
		if(r==0)
			break;
		A.pb(r);
	}
	reverse(A.begin(),A.begin()+A.size()/2 );
	reverse(A.begin()+A.size()/2, A.end());

	for(int i=0; i<A.size(); ++i)
	cout << A[i] << " ";


return 0;
}