#include<iostream>

using namespace std;
class B;
class A{
	
	public:
		int num1;
		
		
		friend void add(A,B);
	
};

class B{
	
	public:
		int num2;
		
		friend void add(A,B);
	
};

void add(A a,B b)
{
	int sum;
	
	cout<<"Enter num1=";
	cin>>a.num1;
	cout<<"Enter num2=";
	cin>>b.num2;
	sum=a.num1+b.num2;
	
	cout<<sum;
}

main()
{
	A obj1;
	B obj2;
	
	add(obj1,obj2);
}
