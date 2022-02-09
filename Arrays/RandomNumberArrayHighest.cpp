//Displays the highest random number stored in an array

 #include <iostream>
 using namespace std;

 //function prototypes
 void displayArray(int numbers[], int numElements);
 int getHighest(int numbers[], int numElements);

 int main()
 {
	//declare array
	int randNums[5] = { 0 };
	//initialize random number generator
	srand(time(0));
	//assign random integers from 1 through 100 to the array
	for (int i = 0; i < 5; i += 1)
	{
		randNums[i] = (rand() % 100 )+1;
	}
	//end for
		
	//display array
	displayArray(randNums, 5);
	
	//display highest number in the array
	cout << endl << "Highest number: "<< getHighest(randNums, 5) << endl;
	system("pause");
	return 0;
	} //end of main function

 //*****function prototype*****
 void displayArray(int numbers[], int numElements)
 {
	 for (int i = 0; i < numElements; i += 1)
	 {
		 cout << numbers[i] << endl;
	 }//end for
} //end of displayArray function

 int getHighest(int numbers[], int numElements)
{
 //assign first element's value to the high variable
		int high = numbers[0];
		//begin the search with the second element
		int x = 1;
		//search for highest number
		while (x < numElements)
		{
			if (numbers[x] > high)
			{
				high = numbers[x];
			}//end if
		 x += 1;
		} //end while
	return high;
 } //end of getHighest function