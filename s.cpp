#include <iostream>
#include <cmath>
#define pb push_back
using namespace std;

struct point {
	double x;
	double y;
	double d;
    
};
double slezytekutvverh (point a) {

	return sqrt(a.x*a.x+a.y*a.y);


}
int main () {
	int n;
	cin >> n;
	point A[n];
	for(int i=0; i<n; ++i){ 
		cin >> A[i].x >> A[i].y;
		A[i].d = slezytekutvverh(A[i]);
	}

	for(int i = 0; i < n; i++)
			for(int j = i; j < n; j++)
				if(A[i].d > A[j].d)
					swap(A[i], A[j]);



   	for(int i = 0; i < n; i++)
   		cout << A[i].x << " " << A[i].y << endl;



return 0;
}