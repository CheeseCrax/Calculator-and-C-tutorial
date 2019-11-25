#include "basicMathFunction.h"
#include <iostream>
#include <string>
using namespace std;

int basicMathFunction::addition() {
	result = a + b;
	return result;
}

int basicMathFunction::subtraction() {
	result = a - b;
	return result;
}

int basicMathFunction::multiplication() {
	result = a * b;
	return result;
}

int basicMathFunction::division() {
	result = a / b;
	return result;
}

int basicMathFunction::setA(int x) {
	a = x;
	return a;
}

int basicMathFunction::setB(int x) {
	b = x;
	return b;
}
