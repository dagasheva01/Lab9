#include <iostream>
#include <cmath>
#include <vector>

#define pb push_back

using namespace std;

struct Point {
	double x;
	double y;

};

double kpop(Point n1, Point n2) {
	double s= sqrt((n1.x-n2.x)*(n1.x-n2.x)+(n1.y-n.y)*(n1.y-n2.y));

	return s;

}

int main () {
	int n;
	cin >> n;

	vector<Point> vc;
	
	for(int i=0; i<n; ++i) {
		Point n;
		cin >> n.x >> n.y;
		vc.pb(n);
	
	}

	

return 0;
}