#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &n1,int &n2,int &n3);
void findMin(int &n1, int &n2, int &n3, int &min);
void printResult(int &n1, int &n2, int &n3, int &min);

// ******************************
// Your code here
// ******************************

// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format

int main() {
	int num1, num2, num3, min;
	getInput(num1,num2,num3);
	findMin(num1,num2,num3, min);
	printResult(num1, num2, num3, min);
}
void getInput(int &n1, int &n2, int &n3){
	cout << "give me 3 numbers " << endl;
	cin >> n1 >> n2 >> n3;
}
void findMin(int &n1, int &n2, int&n3){
	int min = n1;
	if (n2 < min)
		min = n2; 
	if (n3 < min)
		min = n3;
}
void printResult(int &n1, int &n2, int &n3, int &min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}