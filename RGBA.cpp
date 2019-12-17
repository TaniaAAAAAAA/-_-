
//-------------------------RGBA-----------
#include<iostream>
#include "cstdint"

using namespace std;

class RGBA
{
uint8_t m_red=0,
		m_green=0,
		m_blue=0,
		m_alpha=0;
public:

	RGBA(uint8_t red, uint8_t green,
		uint8_t blue, uint8_t alpha=255):
		m_red(red), m_green(green),
		m_blue(blue), m_alpha(alpha)
	{

	}

	void print()
	{
		cout <<"r="<< (int)m_red << "   "<<"g=" <<(int) m_green<<"   "<<"b=" << (int)m_blue << "   "<<"a="<<(int)m_alpha << endl;
	}


};

int main()
{
	RGBA color(0, 135, 135);
	color.print();

	system("pause");
	return 0;
}