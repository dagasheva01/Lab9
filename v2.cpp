#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	vector <int> A;
	
	while(true) {
	
		int r;
		cin >> r;
		if(r==0)
			break;
		A.push_back(r);
      }

         
		
	sort(A.begin(), A.end());


      for(int i=0; i<A.size(); ++i)
      	cout << A[i] << " ";
return 0;

}