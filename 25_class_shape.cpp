/*25.Create a shape class whose parameter are length, breadth and height.
Inherit the classes circle, rectangle & square from shape.
Redefine function area in each inherited class. Shape class is abstract class.
#include<iostream>
using namespace std;
float pi=3.14;
class shape{
	private:
		float length,bredth,height;//pi=3.14;
	public:
		virtual void getdata(){
			cout<<"\nEnter the length of shape : ";
			cin>>length;
			cout<<"\nEnter the Height of shape : ";
			cin>>height;
			cout<<"\nEnter the breadth of shape : ";
			cin>>bredth;
		}
		float redius=length;
};

class circle:public shape{
	private:
		float a,p;
	public:
		float area(float radius){
			a=pi*r*r;
			cout<<"Area of circle : "<<a;
		}
		float parameter(float radius){
			p=2*pi*r;
			cout<<"\nPerimeter of circle : "<<p;
		}
};
class rectangle:public shape{
	private:
		float a,p;
	public:
		int area(float length,float bredth){
			a=length*bredth;
			cout<<"Area of rectangle : "<<a;
		}
		int parameter(float length,float bredth){
			p=2*length*bredth;
			cout<<"\nParameter : "<<p;
		}
};
class square:public shape{
	 float a,p;
	public:
		float area(int side){
			a=side*side;
			cout<<"Area of square is : "<<a;
		}
		int parameter(int side){
			p=4*side;
			cout<<"\nParameter of square : "<<p;
		}
};
int main(){
	
	
}
*/
#include<iostream>
using namespace std;

class Shape{
	protected:
		float length,breadth,height;
	public:
		void get_values()
		{
			cout<<"Enter length"<<endl;
			cin>>length;
			cout<<"Enter breadth"<<endl;
			cin>>breadth;
			cout<<"Enter height"<<endl;
			cin>>height;
		}
		//virtual float area()=0;
};
class Circle : public Shape {
   public:
    float area() {
        return 3.14 * length * length;
    }
};
class Square : public Shape {
   public:
    float area() {
        return length * length;
    }
};
class Rectangle : public Shape {
   public:
    float area() {
        return length * height;
    }
};
int main()
{
	Circle c1;
    Square s1;
    Rectangle r1;
    
    //cout << "\nEnter radius of the circle: ";
    c1.get_values();
    cout << "Area of Circle: " << c1.area() << endl;


    cout << "Enter the length of the square: ";
    s1.get_values();
    cout << "Area of Square: " << s1.area() << endl;
    
    cout << "\nEnter length of the rectangle ";
    r1.get_values();
    cout << "\nEnter breadth of the rectangle";
    r1.get_values();
    cout << "Area of Rectangle: " << r1.area() << endl;
 
	return 0;
}