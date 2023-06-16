#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) {//step 1
			cout << "Number of data exceds the limit" << endl;
			return 0;
		}

		top++;
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) {//step 1
			cout << "stack is empty. cannot pop. " << endl;//1.a
			return;//1.b

		}
		cout << "\nthe popped element is:" << stack_array[top] << endl; //step 2
		top--; //step 3 decrement
	}
	bool empty() {
		return (top == -1);
	}

	