#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <cstdio>
#define pb push_back
using namespace std;

struct nukte {
	double x;
	double y;
	
};

double fuuu(nukte n1, nukte n2){

	return sqrt((n1.x - n2.x)*(n1.x - n2.x) + (n1.y - n2.y)*(n1.y - n2.y));
}

int main () {

	int n;
	cin >> n;

	vector<nukte> vc;

	for(int i = 0; i < n; i++){
		nukte n;
		cin >> n.x >> n.y;
		vc.pb(n);
	}

	double res = 0;


	for(int i = 0; i < vc.size(); i++)
		for(int j = 0; j < vc.size(); j++){
			
			double cur = fuuu(vc[i],vc[j]);

			if(res < cur)
			    res =  cur;				
			}


	cout << setprecision(15) << res << endl;
	printf("%.15f", res);



return 0;
}