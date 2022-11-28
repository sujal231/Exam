#include<iostream>

using namespace std;

class maths{
	
	public :
		int num;
		
		void print()
		{
			cout<<"Enter num=";
			cin>>num;
		}
};

class maths1: public maths{
	
	public:
		
		
		int c;
		
		
	void cube()
	{

		c=num*num*num;
		cout<<"cube="<<c<<endl;
	}
	
};

class maths2: public maths{
	
	public :
		int s;
		void square()
		{
			s=num*num;
			cout<<"square="<<s<<endl;
		}
		
};
main()
{
	maths1 obj;
	obj.print();
	obj.cube();
	
	maths2 obj2;
	
	obj2.print();
	obj2.square();
	
}
