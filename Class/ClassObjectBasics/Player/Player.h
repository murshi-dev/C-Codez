#include <string>
using namespace std;
class Player
{
private:
	int playerId;
	string playerName;
	int score1,score2,score3;
public:
	Player();
	int getPlayerId();
	string getPlayerName();
	int getScore1();
	int getScore2();
	int getScore3();

	void setPlayerId(int id);
	void setPlayerName(string name);
	void setScores(int s1,int s2,int s3);

	int calculateTotal();

};
