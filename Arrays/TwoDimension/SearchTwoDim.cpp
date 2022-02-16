
 #include <iostream>
 using namespace std;

 int main()
 {
	 //declare array and variables
	 int codesAndRates[4][2] = { {3, 8},{7, 10},{6, 14}, {9, 20} };
	 int payCode = 0;
	 int rowSubscript = 0;
	
	 //get pay code
	 cout << "Pay code (3, 7, 6, or 9). " << endl;
	 cout << "Enter a negative number to end: ";
	 cin >> payCode;
	
	 while (payCode >= 0)
	 {
	 //search each row in the array, looking
	 //for the pay code in the first column
	 //continue the search while there are
	 //array elements to searchand the pay
	 //code has not been found
		rowSubscript = 0;
		 while (rowSubscript <= 3 && codesAndRates[rowSubscript][0] != payCode)
			 rowSubscript += 1;
		 //end while
			
			 //if the pay code was found, display the
			 //pay rate located in the same row but in
			 //the second column in the array
			 if (rowSubscript <= 3)
			 cout << "Pay rate for pay code "
			 << codesAndRates[rowSubscript][0]
			 << ": $"
			 << codesAndRates[rowSubscript][1]
			 << endl << endl;
		 else
		 cout << "Invalid pay code" << endl << endl;
		 //end if
		
		 //get pay code
		 cout << "Pay code (3, 7, 6, or 9). " << endl;
		 cout << "Enter a negative number to end: ";
		 cin >> payCode;
		 } //end while
	
	 system("pause");
	 return 0;
	 } //end of main function