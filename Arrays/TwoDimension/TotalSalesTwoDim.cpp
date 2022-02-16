 //displays the total sales
 //practice 7

 #include <iostream>
 #include <iomanip>
 using namespace std;

int main()
 {
	//declare array and variable
	 double sales[3][2] = { {1200.33, 2350.75},
	 {3677.80, 2456.05},
	 {750.67, 1345.99} };
	 double total = 0.0; //accumulator
	
	 //accumulate sales
	 for (int store = 0; store < 3; store += 1)
	 for (int book = 0; book < 2; book += 1)
	 total += sales[store][book];
	//end for
	 //end for
	
	 //display total sales
	 cout << fixed << setprecision(2);
	 cout << "Total sales: $" << total << endl;
	
	 system("pause");
	 return 0;
	 } //end of main function