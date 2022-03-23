//read and write text file, calculate row by row, search based on ID using functions and struct
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

struct player
{
	int playercode;
	string playername;
	int score1,score2,score3;
	int pscore;//for calculating each players total score
};

void readData(ifstream& in, player p[],int size)
{
	int i=0;
	while(i<size)
	{
		in>>p[i].playercode>>p[i].playername>>p[i].score1>>p[i].score2>>p[i].score3;
		i++;
	}
}

//function to calculate each players total score
void calScore(player p[],int size)
{
	//use for loop to read row by row
	for(int i=0;i<5;i++)
	{
		p[i].pscore=p[i].score1+p[i].score2+p[i].score3;
	}
}
//function to print in console
void print(const player p[],int size)
{
	cout<<"PCode"<<setw(10)<<"PName"<<setw(10)<<"Score1"<<setw(10)<<"Score2"<<setw(10)<<"Score3"<<setw(10)<<"Total"<<endl;
	//use for loop to display data one by one
	for(int i=0;i<size;i++)
		cout<<p[i].playercode<<setw(10)<<p[i].playername<<setw(10)<<p[i].score1<<setw(10)<<p[i].score2<<setw(10)<<p[i].score3<<setw(10)<<p[i].pscore<<endl;
}

//function to search for a player based on code entered
void search(player p[],int size)
{
	int searchCode;
	cout<<"Enter Player Code to search"<<endl;
	cin>>searchCode;
	for(int i=0;i<size;i++)
	{
		//check if entered code matches the recors in struct
		if(p[i].playercode == searchCode)
			//record found--so display it
			cout<<p[i].playercode<<setw(10)<<p[i].playername<<setw(10)<<p[i].score1<<setw(10)<<p[i].score2<<setw(10)<<p[i].score3<<endl;
	}
}

void main()
{
	//create a ifstream variable and open input.txt
	ifstream in;
	in.open("players.txt");
	//check if file exists
	if(in.fail())
	{
		cout<<"file does not exist";
		exit(0);
	}

		
	//create a struct variable
	player p[5];//array of structs
	//call the read function
	readData(in,p,5);//3 parameters
	//call the function to calculate independent score values
	calScore(p,5);
	//call print function
	print(p,5);
	//call search function
	search(p,5);
	//close file
	in.close();

	system("pause");
}