#include <iostream>
#include <string>

using namespace std;

// Base Class
class Point{

		int x;
		int y;

	public:
		// setters
		void setX(int newX){
			x = newX;
		} 
		void setY(int newY){
			y = newY;
		}

		// getters
		int getX() const{
			return x;
		}
		int getY() const{
			return y;
		}
		
		void display() const{
			cout << "x: " << x <<" y: " << y << endl;
		}

		// Constructor
		Point(int newX = 0 ,int newY = 0):x(newX),y(newY){}

		//copy Constructor
		Point(const Point &original): x(original.x), y(original.y){}		
};

// Derived Class 
class LabeledPoint : public Point{

		string label;

	public:
	
		// setter
		void setLabel(const string &newLabel){
			label = newLabel;
		}

		// getter
		string getLabel() const{
			return label;
		}

		//constructor
		LabeledPoint(int newX = 0,int newY=0,const string& newLabel = "label")
		{}
};


int main(void)
{
	LabeledPoint p1(5,55,"test");

	p1.setX(3);	
    p1.setY(4);
	p1.setLabel("other");

	cout <<"Label is: " << p1.getLabel() << endl;

	p1.display();

	return 0;
}
