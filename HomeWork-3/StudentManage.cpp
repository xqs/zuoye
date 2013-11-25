#include<string>
#include<iostream>
using namespace std;

struct student
{
	 string name;
	 string num;
	 float score;
}stu[100];

static int N=0;

int Find(string num);
void Add();
void Delete(student stu[]);
void List();
void Input(student &stu1);
void Stumenu();

int main()
{
	Stumenu();
}
//主菜单
void  Stumenu()
{
	int n,i=1;
	
	while(i)
	{
		cin>>n;
		switch(n)
		{
			case 1:List();break;
			case 2:Add();break;
			case 3:Delete(stu);break;
			case 4:i=0;break;
			default:cout<<"错误";
		}
	}
}
//查找比对
int Find(string num)
{
	int mark=0;
	for(int i=0;i<N;i++)
	{
		if(num==stu[i].num)
		{
			mark=i;
		}
	}
	return mark==-1?N:mark;
}
//删除学生
void Delete(student stu[])
{
	student stu1,temp;
	int i=Find(stu1.num);
	if(!(i==N))
	{
		for(int j=i;j<N;j++)
		{
			stu[j]=stu[j+1];
		}
		N--;
		cout<<"删除成功"<<endl;
	}

	else cout<<"此学生不在此班"<<endl;
}
void Input(student &stu1)
{
	cout<<"输入学生姓名";
	cin>>stu1.name;
	cout<<"输入学生学号";
	cin>>stu1.num;
	cout<<"输入学生分数";
	cin>>stu1.score;
}
//添加学生
void Add()
{
	student stu1;
	Input(stu1);
	int i=Find(stu1.num);
	if(i==N)
	{
		stu[i].name=stu1.name;
		stu[i].num=stu1.num;
		stu[i].score=stu1.score;
	          N++;
		cout<<"输入成功"<<endl;
	}
	else cout<<"输入失败"<<endl;
}
//查看所有学生
void List()
{
	for(int i=0;i<N;i++)
	{
		cout<<stu[i].name<<"\t"<<stu[i].num<<"\t"<<stu[i].score<<endl;
	}
	cout<<"这是"<<"\t"<<N<<"\t"<<"所有学生"<<endl;
}