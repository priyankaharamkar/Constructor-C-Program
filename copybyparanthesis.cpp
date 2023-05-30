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
		student(student &t)   //copy constructor
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
	//student t(1,"ram",222);
              student s(2,"Geeta",2000);
	student tt(s); //copy constructor call
	tt.show();
	
}
