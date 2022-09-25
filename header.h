#include<iostream>
using namespace std;

class shape
{
	string shape_name;
public:
	shape(string name)
	{
		shape_name = name;
	}
	virtual void print()
	{
		cout << "shape name is :";
		cout<<shape_name << endl;
	}
	~shape()
	{
		cout << "~shape() called\n";
	}
};
class square :public shape
{
	 double length;
public:
	square(string name, double l) :shape(name)
	{
		this->length = l;
	}
	void print()
	{
		double area = length * length;
		shape::print();
		cout << "Area is:" << area << endl;
	}
	~square()
	{
		cout << "~sqaure() called\n";
	}
};
class rectangle :public shape
{
	double length;
	double width;
public:
	rectangle(string name, double l, double w) :shape(name)
	{
		this->length = l;
		this->width = w;
	}
	void print()
	{
		shape::print();
		cout << "Length is: " << length << endl;
		cout << "Width is: " << width << endl;

	}
	~rectangle()
	{
		cout << "~rectangle() called\n";
	}
};


