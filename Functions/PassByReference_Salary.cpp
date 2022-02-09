/*Create a program that allows the user to enter an employee’s current salary and raise rate. 
The program should calculate and display the employee’s raise and new salary.
Use the following prototype
void getNewPayInfo(double current, double rate, double &increase, double &pay);
*/

 #include <iostream>
 #include <iomanip>
 using namespace std;

 //function prototype
 void getNewPayInfo(double current, double rate, double& increase, double& pay);

 int main()
 {
 //declare variables
	 double currentSalary = 0.0;
	
	 double raiseRate = 0.0;
	 double raise = 0.0;
	 double newSalary = 0.0;
	
	//get input items

	 cout << "Current salary: ";

	 cin >> currentSalary;
	 cout << "Raise rate (in decimal form): ";
	 cin >> raiseRate;
	 //get the raise and new salary
	 getNewPayInfo(currentSalary, raiseRate,raise, newSalary);
	
	 //display the raise and new salary
	 cout << fixed << setprecision(2);
	 cout << "Raise: $" << raise << endl;
	 cout << "New salary: $" << newSalary << endl;
	
	 system("pause");
	 return 0;
	 } //end of main function

 //*****function definitions*****
 void getNewPayInfo(double current, double rate, double& increase, double& pay)
 {
 increase = current * rate;
 pay = current + increase;
 } //end of getNewPayInfo function