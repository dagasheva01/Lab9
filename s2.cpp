#include <iostream>
#include <cmath>
#include <vector>
#define pb push_back
using namespace std;

struct point {
	double x;
	double y;

};
int main () {
	int n;
	cin >> n;
	vector <point> A;
	for(int i=0; i<n; ++i) {
		point p;
		cin >> p.x >> p.y;
		A.pb(p);
	
	
	}

	double sumX = 0, sumY = 0;

	for(int i = 0; i < A.size(); i++){
		sumX += A[i].x;
		sumY += A[i].y;
	}	
	cout << sumX/n << " " << sumY/n << " ";

return 0;
}