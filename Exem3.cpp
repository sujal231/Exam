#include<iostream>

using namespace std;

class paretn{
	
	private:
		
		int age;
		char name[100];
		
	protected:
		
		char surname[100];

		public:
			
			void paretndetails()
			{
				cout<<"Paretn"<<endl;
				cout<<"Enter Age=";
				cin>>age;
				cout<<"Enter Name=";
				cin>>name;
				cout<<"Enter surname=";
				cin>>surname;
				
				cout<<endl<<"Age=";
				cout<<age<<endl;
				cout<<"Name=";
				cout<<name<<endl;
				cout<<"surname=";
				cout<<surname<<endl<<endl;
				
			}
		
};

class child : public paretn{

		private:
				
		int age;
		char name[100];
		
		public:
			
			void childdetails()
			{
				cout<<"Child"<<endl;
				cout<<"Enter Age=";
				cin>>age;
				cout<<"Enter Name=";
				cin>>name;
				
				cout<<endl<<"Age=";
				cout<<age<<endl;
				cout<<"Name=";
				cout<<name<<endl;
				cout<<"surname=";
				cout<<surname<<endl<<endl;
				
			}
	
};

main()
{
	child obj;
	
	obj.paretndetails();
	obj.childdetails();
}
