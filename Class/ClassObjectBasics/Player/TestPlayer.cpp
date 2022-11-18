#include "Player.h"
#include <iostream>
using namespace std;
void main()
{
	Player player1;
	//declare local variables
	int id,s1,s2,s3;
	string name;
	cout<<"Enter Player Id:"<<endl;
	cin>>id;
	player1.setPlayerId(id);

	cout<<"Enter Player Name:"<<endl;
	cin>>name;
	player1.setPlayerName(name);

	cout<<"Enter Score1: "<<endl;
	cin>>s1;
	cout<<"Enter Score2: "<<endl;
	cin>>s2;
	cout<<"Enter Score3: "<<endl;
	cin>>s3;

	player1.setScores(s1,s2,s3);

	cout<<"Player ID: "<<player1.getPlayerId()<<endl;
	cout<<"Player Name: "<<player1.getPlayerName()<<endl;
	cout<<"Scores are: "<<endl;
	cout<<"Score1: "<<player1.getScore1()<<endl;
	cout<<"Score2: "<<player1.getScore2()<<endl;
	cout<<"Score3: "<<player1.getScore3()<<endl;
	cout<<"Total Score is: "<<player1.calculateTotal()<<endl;
	system("pause");
}