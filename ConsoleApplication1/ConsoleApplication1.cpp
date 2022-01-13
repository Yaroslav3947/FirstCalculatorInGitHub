#include <iostream>
#include "Calculator.h"

using namespace std;
double x, y,result;
char oper;

double Calculate(double x, char oper, double y) {
	switch (oper)
	{
	case '+': return x + y;
	case '-': return x - y;
	case '*': return x * y;
	case '/': return x / y;

	default:
		return 0.0;
	}
}
int main() {
	
	while (true) {

		cin >> x >> oper >> y;
		if (oper = '/' && y == 0) { 
			cout << "no,you can't" << endl; 
			continue;
		}
		else result = Calculate(x, oper, y);
		cout << "Result = " << result << endl;
		cout << "Smth next" << endl;
	}
	
	return 0;
}