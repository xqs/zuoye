#include<iostream>
using namespace std;

int X=0,Y=0;

int  ar(int X,int Y);
int fun(int N);

int main()
{
	cout<<"请输入X:";
	cin>>X;
	cout<<"请输入Y:";
	cin>>Y;
	cout<<ar(X,Y)<<endl;
}


 int ar(int X,int Y)
{
	if(X>Y)
	{
	int   c=0;
		c=fun(X)/fun(X-Y)/fun(X);
		return c;
	}
	else cout<<"error: n should be bigger than m";
}

 int fun(int N)
{
	int b=1;
	if(N>=0)
	{
		for(int i=1;i<=x;i++)
		{	
			b=b*i;
		}
	return b;
	}
	else cout<<"error: x should be a positive number";
}



