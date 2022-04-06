//CircleWithPrivateDataMembers
//class declartion-has only declartions-no implementation
class Circle
{
	//encapsulation-hiding data members
	//enclose radius in 'private' so that
	//it is not accessible outside class or other 
	//classes inside the same project folder.
	//this is done to avoid the data being modified
	//by other classes.
private:
	double radius;
public:
	Circle();
	//setter method for setting radius
	void setRadius(double);
	//getter method for getting/displaying radius
	double getRadius();
	//function to calculate area
	double calArea();
};