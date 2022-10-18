#include <iostream>
using namespace std;

int getSum(int);
int main() {
	// declaring int varable N and setting num and result as int
	int N;
	int num, result;

	// asking user for inputs, taking input and giving it to funciton for calculation
	cout << "Enter the number of inputs: ";
	cin >> N;
	result = getSum(N);
	cout << "Sum: " << result << endl;
}


// getSum function
int getSum(int N) {
	// int declarations for sum, min, max, and num
	int sum = 0;
	int min, max, num;

	// for loop that takes a value and determines min or max
	for (int i = 0; i < N; i++) {
		cout << "Enter your value: ";
		cin >> num;
		sum += num;
		if (i == 0)
			min = max = num;
		min = (min > num) ? num : min;
		max = (max < num) ? num : max;
	}

	// returning sum
	sum = sum - min - max;
	return sum;
}
