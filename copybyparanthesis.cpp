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
		student(int r,char n[],int f)
		{
			rollno=r;
			strcpy(name,n);
		    fee=f;
			
		}
		student(student &t)
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
	student tt(t); //copy constructor
	tt.show();
	
}
