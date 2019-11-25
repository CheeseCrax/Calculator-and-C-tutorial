//basicMathFunction.h
#pragma once
#ifndef BASICMATHFUNCTION_H
#define BASICMATHFUNCTION_H

class basicMathFunction {
private:
	int a;
	int b;
	int result;
public:
	int addition();
	int subtraction();
	int multiplication();
	int division();
	int setA(int);
	int setB(int);
};

#endif // BASICMATHFUNCTION_H
