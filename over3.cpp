//op overloading of unary operator
#include<iostream>
using namespace std;

class complex{
	int r, i;
	
	public:
	//default constructor
	complex()
	{
	r=0;
	i=0;
	}
	
	//param constructor
	complex(int x, int y)
	{
	r=x;
	i=y;
	}

	void operator - ();
	
	void display()
	{
		cout << "Real part: " << r << " complex part: " << i << endl;
	}
};	//end of class complex

void complex :: operator - ()
	{
		r = -r;
		i = -i;
		
	}
int main()
{
	complex c1(5,6), c2(4,5);
	c1.display();
	c2.display();
	
	-c1;
	-c2;
	
	c1.display();
	c2.display();
return 0;
}