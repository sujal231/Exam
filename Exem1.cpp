#include<iostream>

using namespace std;

class Employee{
	
	public:
		
		int id;
		char name[100];
		char role[100];
		int salay;
		int experience;
		char address[100];
		char email[100];
		char contact[10];
		
		public:
			void setter()
			{
				
				
				cout<<"Enter id:-";
				cin>>id;
				cout<<"Enter name:-";
				cin>>name;
				cout<<"Enter role:-";
				cin>>role;
				cout<<"Enter salay:-";
				cin>>salay;
				cout<<"Enter experience:-";
				cin>>experience;
				cout<<"Enter address:-";
				cin>>address;
				cout<<"Enter email:-";
				cin>>email;
				cout<<"Enter contact:-";
				cin>>contact;
			}
			
			void getter()
			{
				cout<<"id:-";
				cout<<id<<endl;
				cout<<"name:-";
				cout<<name<<endl;
				cout<<"role:-";
				cout<<role<<endl;
				cout<<"salay:-";
				cout<<salay<<endl;
				cout<<"experience:-";
				cout<<experience<<endl;
				cout<<"address:-";
				cout<<address<<endl;
				cout<<"email:-";
				cout<<email<<endl;
				cout<<"contact:-";
				cout<<contact<<endl;
			}
		
}; 


main()
{
	
	Employee obj;
	int i,a[5];
	for(i=0;i<5;i++)
	{
	cout<<"records "<<a[i+1]<<endl;
	obj.setter();

    }
   	for(i=0;i<5;i++)
	{
		cout<<"records "<<a[i+1]<<endl;
	obj.getter();

    }
}
