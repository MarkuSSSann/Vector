#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int vectorSum(vector<int>& vec) {

	int sum = 0;
	cout << "Vector sum: ";
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	cout << sum << endl;
	return sum;
}




int main(){

	int numToReverse;
	int size;
	int num;
	int Highest = 1;
	int sum = 0;
	unsigned long long int multiply = 1;
	vector<int> vecArr;
	
	cout << "Insert size of a vector: ";
	cin >> size;
	cout << endl;

	cout << "Insert " << size << " non-negative numbers:" << endl;
	for (int i=0; i < size; i++) {
		cout << "Number " << i+1 << ": ";
		cin >> num;
		vecArr.push_back(num);
	}
	cout << endl;

	//Vector
	cout << "Vector: ";
	for (int j=0; j < vecArr.size(); j++) {
		cout << vecArr[j] << " | ";\
	}
	cout << endl;

/*	//Sum
	cout << "Vector sum: ";
	for (int i = 0; i < vecArr.size(); i++) {
		sum += vecArr[i];
	}
	cout << sum << endl;
*/
	//Sum but in function
	vectorSum(vecArr);

	//Multiply
	cout << "Vector multiply: ";
	for (int i = 0; i < vecArr.size(); i++) {
		multiply *= vecArr[i];
	}
	cout << multiply << endl;

	//Sort
	vector<int> sorted = vecArr; 
	sort(sorted.begin(), sorted.end());
	cout << "Sorted vector: ";
	for (int j = 0; j < sorted.size(); j++) {
		cout << sorted[j] << " | "; \
	}
	cout << endl;

	//Reverse
	vector<int> reversed=vecArr;
	reverse(reversed.begin(), reversed.end());
	cout << "Reversed vector: ";
	for (int j = 0; j < reversed.size(); j++) {
		cout << reversed[j] << " | "; \
	}
	cout << endl;

	//Highest num in vector
	cout << "Highest num in vector: ";
	for (int i = 0; i < vecArr.size(); i++) {
		if (vecArr[i] > Highest) {
			Highest = vecArr[i];
		}
		else {
			Highest = Highest;
		}
	}
	cout << Highest << endl;

	cout << endl;
	return 0;
}