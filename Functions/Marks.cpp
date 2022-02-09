/*Write a program to determine whether you have passed or failed a course based on the average score of four classroom tests. The main program calls three modules—one that gets the input values, one that performs the average calculation and another that displays the results.
*/
#include<iostream>
using namespace std;
int getTest1();
int getTest2();
int getTest3();
int calAverage(int t1, int t2, int t3);
void display(int average);
int main()
{
	int t1, t2, t3,average;
	t1 = getTest1();
	t2 = getTest2();
	t3 = getTest3();
	average = calAverage(t1, t2, t3);
	display(average);
	system("pause>0");
}
int getTest1() {
	int test1;
	cout << "Enter test1 mark:" << endl;
	cin >> test1;
	return test1;
}
int getTest2() {
	int test2;
	cout << "Enter test2 mark:" << endl;
	cin >> test2;
	return test2;
}
int getTest3() {
	int test3;
	cout << "Enter test3 mark:" << endl;
	cin >> test3;
	return test3;
}
int calAverage(int t1, int t2, int t3)
{
	double average = (t1 + t2 + t3) / 3;
	return average;
}
void display(int avg)
{
	cout << "Average is" << avg;
}