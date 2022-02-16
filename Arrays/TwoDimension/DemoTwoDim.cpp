#include<iostream>
using namespace std;
void main()
{
	//declare a two dim array--name matrix
	//row size is 3 column size is 5
	int matrix[3][5];
	//initialise each value to 0
	//loop each row
	for(int row=0;row<3;row++)
	{
		//loop each column
		for(int col=0;col<5;col++)
		{
			//set each value to 0
			matrix[row][col]=0;
		}
	}
	//display the two dimensional array
	//use for loop
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<5;col++)
		{
			cout<<matrix[row][col]<<" ";
		}
		//after display row, move to next line
		cout<<endl;
	}
	//practice 2
	//input array with user values
	for(int row=0;row<3;row++)
	{
		cout<<"Entering row"<<row+1;
		cout<<endl;
		for(int col=0;col<5;col++)
		{
			cout<<"Enter column values"<<col+1<<": ";
			cin>>matrix[row][col];
		}
	}
	//display the array that has user input values
		for(int row=0;row<3;row++)
	{
		for(int col=0;col<5;col++)
		{
			cout<<matrix[row][col]<<" ";
		}
		//after display row, move to next line
		cout<<endl;
	}
		//practice 4

		//find the sum of all elements in a row
		//start with the row
		for(int row=0;row<3;row++)
		{
			int sum=0;
				//add every element in the column
			for (int col=0;col<5;col++)
			{
				sum=sum+matrix[row][col];
				//sum+=matrix[r][col];-->can also be written this way
			}
			cout<<"Sum of row"<<row+1<<"is: "<<sum<<endl;
		}
		//find the sum of all elements in a row
		//start with the column
		for(int col=0;col<5;col++)
		{
			int sum=0;
			//add every element in the row
			for(int row=0;row<3;row++)
			{
				sum=sum+matrix[row][col];
			}
			cout<<"sum of column"<<col+1<<"is: "<<sum<<endl;
		}
		//practice 5
		//display largest element in the row
		for(int row=0;row<3;row++)
		{
			//create a variable and assign the first element of 
			//matrix to it---assuming it to be largest
			int largest=matrix[row][0];
			//now loop through each element in the column
			for(int col=0;col<5;col++)
			{
				//write an if condition to compare the 
				//'largest' elemnet with each column elemnt
				if(largest<matrix[row][col])//if the condition is true
					largest=matrix[row][col];//the new largest value will be the current row-col value
			}
			//display the largest element
			cout<<"Largest element in row"<<row+1<<"is: "<<largest<<endl;
		}
		//practice 6
		//display largest element in the column
		for(int col=0;col<5;col++)
		{
			//create a variable and assign the first element of 
			//matrix to it---assuming it to be largest
			int largest=matrix[0][col];
			//now loop through each element in the row
			for(int row=0;row<3;row++)
			{
				//write an if condition to compare the 
				//'largest' elemnet with each row elemnt
				if(largest<matrix[row][col])//if the condition is true
					largest=matrix[row][col];//the new largest value will be the current row-col value
			}
			//display the largest element
			cout<<"Largest element in column"<<col+1<<"is: "<<largest<<endl;
		}
		system("pause");
		}