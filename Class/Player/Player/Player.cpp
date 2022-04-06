#include "Player.h"
Player::Player()
{
	playerId=0;
	playerName="";
	score1=0;
	score2=0;
	score3=0;
}
int Player::getPlayerId()
{
	return playerId;
}
string Player::getPlayerName()
{
	return playerName;
}
int Player::getScore1()
{
	return score1;
}
int Player::getScore2()
{
	return score2;
}
int Player::getScore3()
{
	return score3;
}
void Player::setPlayerId(int i)
{
	playerId=i;
}
void Player::setPlayerName(string name)
{
	playerName=name;
}
void Player::setScores(int s1,int s2, int s3)
{
	score1=s1;
	score2=s2;
	score3=s3;
}
int Player::calculateTotal()
{
	return (score1+score2+score3);
}