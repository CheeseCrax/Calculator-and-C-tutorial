//main.cpp
#include <iostream>
#include <string>
#include "basicMathFunction.h"
using namespace std;

class basicCalculatorFunctions {
	private:
		bool runningState = true;

	public:
		bool stopCheck(string x) {
			if (x == "stop") {
				runningState = false;
				abort();
			}
			return runningState;
		}
		bool getCheck() {
			return runningState;
		}

};

int main() {


	basicCalculatorFunctions condition;
	bool runningState = condition.getCheck();
	string function;

	while (runningState == true){

		basicMathFunction operation;
		string a;
		string b;

		cout << "Type in + for addition, - for subtraction, * for multiplication and / for division. Type in 'stop' at any time to end the program. \n";
		cin >> function;
		condition.stopCheck(function);

		cout << "Type in your first number \n";
		cin >> a;
		condition.stopCheck(a);
		cout << "Type in your second number \n";
		cin >> b;
		condition.stopCheck(b);

		int aNumber = stoi(a);
		int bNumber = stoi(b);

		operation.setA(aNumber);
		operation.setB(bNumber);
		
		if (function == "addition" || function == "+") {
			cout << "The sum is \n" << operation.addition() << endl;
		}
		else if (function == "subtraction" || function == "-") {
			cout << "The difference is \n" << operation.subtraction() << endl;
		}
		else if (function == "multiplication" || function == "*") {
			cout << "The product is \n" << operation.multiplication() << endl;
		}
		else if (function == "division" || function == "/") {
			cout << "The quotient is \n" << operation.division() << endl;
		}
		else if (function == "stop") {
			cout << "Ending calculator. Thanks for using me!\n";
		}
		else {
			cout << "No valid function has been entered, try addition, multiplication, subtraction, and division" << endl;
		}
	}

	return 0;
	
}
