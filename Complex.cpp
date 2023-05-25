#include<iostream>
using namespace std;
class A
{
   int a,b;
   public :
	A(int x,int y)
	{
		a=x;
		b=y;
	}
	void show();
};
 void A::show()
 {
 	cout<<a<<"+"<<b<<"i"<<endl;
 }
 int main()
 {
 	A a(10,20);
 	a.show();
 }
