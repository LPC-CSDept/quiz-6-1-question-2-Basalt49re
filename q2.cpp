#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &n1,int &n2,int &n3);
void findMin(int &n1, int &n2, int &n3);
void printResult(int &n1, int &n2, int &n3);

// ******************************
// Your code here
// ******************************

// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format
void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}