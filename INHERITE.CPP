#include<iostream.h>
#include<conio.h>
class A
{
	public:
		int r;
		void init(int x)
		{
			r=x;
		}
		float area_c()
		{
			return(3.14f*r*r);
		}
};
class B:public A
{
	public:
		void show(int y)
		{
			init(y);
		}
		float area_s()
		{
			return(4*3.14f*r*r);
		}
};
void main()
{
	int n;
	B obj;
	clrscr();
	cout<<"\nEnter the radius : ";
	cin>>n;
	obj.init(n);
	cout<<"\nArea of circle : "<<obj.area_c();
	cout<<"\nArea of sphere : "<<obj.area_s();
	getch();
}

