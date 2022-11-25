//create the Member class here - ONLY PROTOTYPE in HEADER FILES
#include<string> 
using namespace std;
class Member
{
//properties
private:
	string name;
	int memberID, contact, birthYear;
//methods
public:
	//Constructor
	Member();
	//setters or mutators
	void setName(string n);
	void setMemberID(int mid);
	void setContact(int contact);
	void setBirthYear(int year);
	//getters or accessors
	string getName();
	int getMemberID();
	int getContact();
	int getBirthYear();
};
