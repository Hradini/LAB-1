#include <iostream>
using namespace std;
 
int main() {
 
	double a, b, c, d, e;
	cout << "please the two numbers: \n" ;
	cin >> a >> b ;
	c = a + b;
	d = a / b;
	e = a*b ;
	cout << "the sum of " << a << " and " << b << " is " << c << "\n" ;
	cout << "the product of " << a << " and " << b << " is " << e << "\n";
	cout << "the division of " << a << " by " << b << " is " << d << "\n";
 
 
	return 0;
}
