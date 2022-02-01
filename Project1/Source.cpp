#include<iostream>


using namespace std;

class point
{
	int x,y,z;
public:
	point() { x = y = z = 0; }
	point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void print() { cout << x << y << z; }
};

class quadrate:public point
{
	int c;
public:
	quadrate() { c = 0; }
	quadrate(int c) { this->c = c; }
	void print() { cout << c; }
};

int main()
{

	point p;
	p.print();


	return 504;
}