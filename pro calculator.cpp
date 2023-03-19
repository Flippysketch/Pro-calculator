#include <iostream>
#include <cmath>
#include <string>
#include "pi.h"
using namespace std;
// НСД
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// НСК
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
	cout << "Calculator with operations that aren't in the simple calucator";
	cout << "\nMade by Flippysketch in C++\n";
	
	cout << "GCD/LCM, abs, sm, power, % \n";
	while(true) {
		string o;
		cin >> o;
	    if(o == "GCD/LCM") {
	    	int num1, num2;
    	
			cin >> num1;
			cin >> num2;
			int result_gcd = gcd(num1, num2);
			int result_lcm = lcm(num1, num2);
			/*НСД*/cout << "GCD " << num1 << " and " << num2 << " = " << result_gcd << endl;
			/*НСК*/cout << "LCM " << num1 << " and " << num2 << " = " << result_lcm << endl;
			return 0;
	    }
	    else if(o == "abs") {
	    	int anum;
	    	cin >> anum;
	    	int absn = abs(anum);
	    	cout << "Absolute value of " << anum << " is " << absn;
	    }
	    else if(o == "sm") {
	    	int num, factor;
 	   	cin >> num;
  	  	cout << "Simple multipliers of " << num << " are:\n";
			for (factor = 2; factor <= num; factor++) {
			while (num % factor == 0) {
   	         cout << factor << " ";
    	        num /= factor;
			}
			}
   	}
	    else if(o == "power") {
	    	int intm, intp;
	    	cin >> intm;
			cin >> intp;
			int inty = pow(intm, intp);
			cout << inty;
		}
		else if(o == "%") {
		   cout<<"Type the number SPACE base value press ENTER\n";
		   float p, number, base;
		   cin >> number >> base;
		   p = (number/base) * 100 ;
		   cout << "The number percentage is = " << p << "% of the base" << endl;
		}
	    else {
	    	cout << o << ": isn't defined, try again!";
	    	return 0;
		}
	}
}