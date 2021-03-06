#include<iostream>
using namespace std;
class IOStack
{
public:
	int N;
	int data[20];

	void begin();
	void List();
	void push();
	void pop();
	int 	Fill();
	int    Empty();
};

void IOStack::begin()
	{
		int i=1;
		int n;
		cout<<"1:查看";
		cout<<"2：入桟";
		cout<<"3：出栈";
		cout<<"4：退出";
		while(i)
		{
			cin>>n;
			switch(n)
			{
				case 1:List();break;
				case 2:push();break;
				case 3:pop();break;
				case 4:i=0;break;
				default:cout<<"input error";
			}
		}
	}

void IOStack::pop()
	{
		int i;
		if(Empty())
		{
			cout<<"underflow";
		}
		else
		{
			i=data[N];
			top--;
			cout<<i<<"出栈";
			data[N]=NULL;
		}
	}

void IOStack::push()
	{
		int i;
		cin>>i;
		if(Fill())
		{
			cout<<"overflow";
		}
		else 
		{
			N++;
			data[N]=i;
			cout<<i<<"入栈";
		}
	}

void IOStack::List()
	{
		if(Empty())
		{
			cout<<"underflow";
		}
		else
		{
			for(int i=N;i>=0;i--)
				cout<<"第"<<i<<"号数\t"<<data[i];
		}
	}

int IOStack::Fill()
	{
		return N==19?1:0;
	}

int  IOStack::Empty()
	{
		return N==-1?1:0;
	}	

int main()
{
	IOStack sta;
	sta.N=0;
	sta.begin();
}

