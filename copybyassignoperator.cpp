#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
	int rollno;
	char name[90];
	int fee;
	public:
		student(int r,char n[],int f) //define function
		{
			rollno=r;
			strcpy(name,n);
		    fee=f;
			
		}
		student(student &t) //copy constructor ===  Copy constructor takes a reference  
		                                        //to an object of the same class as an argument.
		{
			this->rollno=t.rollno;
			strcpy(this->name,t.name);
			this->fee=t.fee;
		}
		void show()
		{
			cout<<rollno<<"\t"<<name<<"\t"<<fee<<endl;
		}
};
int main()
{
	student t(1,"ram",222);
	student tt=t; //copy by assign
	tt.show();
	
}
