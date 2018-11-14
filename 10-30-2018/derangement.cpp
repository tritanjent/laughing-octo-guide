#include <iostream>

using namespace std;
double derangement(double a);
int main () {
cout << "enter number";
int N;
cin >> N;

cout << derangement(N);

}

double derangement (double a) {
	if (a ==0) {
		return 0;
	}else if(a ==1) {
		return 0;
	}else if(a ==2) {
		return 1;
	}else if( a == 3) {
		return 2;
	}else {
		return (a-1) * (derangement(a-1) + derangement(a-2)) ; 
	}
}






