#include <iostream>
#include <vector>
#include <cmath>

#define pb push_back

using namespace std;

struct point {
	double x;
	double y;


};

double Fuuuu(point p) {

	return sqrt(p.x*p.x+p.y*p.y);
    
}

int main() {
	int n;
	cin >> n;

	vector <point> A;

	for(int i = 0; i < n; i++){
		
		point p;
		cin >> p.x >> p.y;

		A.pb(p);
	}



	for(int i = 0; i < A.size(); i++) {
	
	    	
	
		sort(A.begin(), A.end());
			

	   }
	   for(int i=0;i<A.size();i++)
	   cout<<A[i]<< endl;
	


return 0;
} 