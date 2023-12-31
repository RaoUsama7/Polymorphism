#include <iostream>

using namespace std;


class _0Shape
{
public:
	Shape()
	{
		cout << "In Shape's Constructor" << endl;
	}


	virtual void draw() = 0;
	

};


class Rectangle : public Shape
{
public:
	Rectangle()
	{
		cout << "In Rectangle's Constructor" << endl;
	}

	Rectangle(int x, int y)
	{
		cout << "In Rectangle's parameterized Constructor" << endl;
	}

	void draw()
	{
		cout << "in rectangle's draw" << endl;
	}
};


class Triangle : public _0Shape
{
public:
	Triangle()
	{
		cout << "In Triangle's Constructor" << endl;
	}

	Triangle(int x, int y)
	{
		cout << "In Triangle's parameterized Constructor" << endl;
	}

	void draw()
	{
		cout << "In Triangle's draw" << endl;
	}
};
int main()
{
	int choice;
	
	_0Shape **AllShapes = new _0Shape* [10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter your choice" << endl;
		cin >> choice;
		if (choice == 1)
		{
			AllShapes[i] = new Rectangle();
			AllShapes[i]->draw();
		}
		else if (choice == 2)
		{
			AllShapes[i] = new Triangle();
			AllShapes[i]->draw();
		}
		else
		{
			AllShapes[i] = new Triangle();
			AllShapes[i]->draw();
		}
		

	}


	//Rectangle r;
	//r.draw();

	
	





	return 0;
}