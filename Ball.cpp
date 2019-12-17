#include<iostream>

using namespace std;

class Ball
{
	char * color;
	double radius=20;
public:
	Ball()
	{
		setColor("Red");
		setRadius(20.0);
	}
	Ball(const char* color, double radius)
	{
		setColor(color);
		setRadius(radius);
	}

	Ball(const char *color) 
	{
		setColor(color);

	}

	Ball(const double radius) :Ball("red")
	{
		setRadius(radius);
	}
	~Ball()
	{
		delete[]color;
	}


	const char* getColor()
	{
			return color;
	}

	double getRadius()
	{
		
		return radius;
	}

	void setRadius(double radius)
	{
		if (radius > 0)
		{
			this->radius = radius;
		}
	}

	void setColor(const char * color)
	{
		int size = strlen(color)+1;
		if (this->color != nullptr)
		{
			delete[]this->color;
		}
		this->color = new char[size];
		strcpy_s(this->color, size , color);
	}

	void print()
	{
		cout << "color : " << getColor() << "\n radius : " << radius << endl;

	}
};

int main()
{
	Ball def;
	def.print();
	cout << "----------------------\n";
	Ball black("black");
	black.print();
	cout << "----------------------\n";
	Ball thirty(30.0);
	thirty.print();
	cout << "----------------------\n";
	Ball blackThirty("black", 30.0);
	blackThirty.print();

	system("pause");
	return 0;
}