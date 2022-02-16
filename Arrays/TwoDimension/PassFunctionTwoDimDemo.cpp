 #include <iostream>
 using namespace std;

 //function prototype
 void displayArray(int nums[4][3]);

 int main()
 {
 //declare and initialize array
		 int orders[4][3] = { 0 };

		 //enter data into the array
		 for (int region = 0; region < 4; region += 1)
		 for (int month = 0; month < 3; month += 1)
		 {
		 cout << "Number of orders for Region "
		 << region + 1 << ", Month " << month + 1 << ": ";
		 cin >> orders[region][month];
		 } //end for
	 //end for
	
	 //display the contents of the array
	 displayArray(orders);
	
	 system("pause");
	 return 0;
	 } //end of main function

 //*****function definitions*****
 void displayArray(int nums[4][3])
 {
 for (int region = 0; region < 4; region += 1)
 {
 cout << "Region " << region + 1  << ": " << endl;
 for (int month = 0; month < 3; month += 1)
 {
 cout << " Month " << month + 1  << ": "; 
 cout << nums[region][month] << endl;
 } //end for
 } //end for
 } //end of displayArray function