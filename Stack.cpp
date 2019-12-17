#include<iostream>
#include <cassert>  
using namespace std;

class Stack
{
    int leng;
	int arr[10];
public:
	
	void reset()
	{
		leng = 0;
		for (int i = 0; i < 10; i++)
			arr[i] = 0;
	}

	bool push(int num)
	{
		if (leng == 10)
			return false;
		else
		{
			arr[leng] = num;
			leng++;
			return true;
		}
	}

	int pop()
	{
		assert(leng > 0);
		leng -= 1;
		return arr[leng];
	}

	void print()
	{
		for (int i = 0; i < leng; i++)
		{
			cout << arr[i] << " ----  ";
		}
	}
};
int main()
{
	Stack stack;
	stack.reset();

	stack.print();
	cout << "---------------------\n";
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	cout << "---------------------\n";
	stack.pop();
	stack.print();
	cout << "---------------------\n";
	stack.pop();
	stack.pop();

	stack.print();
	cout << "---------------------\n";

	system("pause");
	return 0;
}
