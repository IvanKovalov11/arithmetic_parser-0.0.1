#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x, y, r;
	char op1, op2;
	cin >> x;
	cin >> op1;
	if ((op1 == '>') || (op1 == '<')) {
		cin >> op2;
		cin >> y;
	}
	else {
		cin >> y;
	}
	if (op1 == '+') {
		r = x + y;
	}
	else if (op1 == '-') {
		r = x - y;
	}
	else if (op1 == '*') {
		r = x*y;
	}
	else if (op1 == '/') {
		if (y == 0) {
			cout << "wrong operation";
			return -1;
		}
		else r = x / y
			;
	}
	else if ((op1 == '<') && (op2 == '<')) {
		r = x << y;
	}
	else if ((op1 == '>') && (op2 == '>')) {
		r = x >> y;
	}
	else if (op1 == '&') {
		r = x&y;
	}
	else if (op1 == '|') {
		r = x | y;
	}
	else if (op1 == '^') {
		r = x^y;
	}
	else if (op1 == '%') {
		r = x%y;
	}
	else {
		cout << "wrong operation";
		return -1;
	}
	cout << "result: " << r << endl;
	system("pause");
	return 0;
}
