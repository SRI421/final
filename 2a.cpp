#include<iostream>
using namespace std;

class Emp
{
public:
  int eno,basic;
  float da,it,net;
  string name;
public:
  void getdata();
  void compute();
};

void Emp:: getdata()
{
  cout<<"enter the employee name , employee number and basic sallary"<<endl;
  cin>>name>>eno>>basic;
}

void Emp:: compute()
{
  da= (basic*52)/100;
  it=((basic+da)*30)/100;
  net=basic+da-it;

  cout<<"employye details are"<<endl;
  cout<<"name="<<name<<endl<<"emp no="<<eno<<endl;
  cout<<"basic="<<basic<<endl<<"da="<<da<<endl;
  cout<<"it="<<it<<endl<<"net sallary="<<net<<endl;
}

int main()
{
  Emp e[100];
  int n;
  cout<<"enter the no of employees"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  e[i].getdata();

  for(int i=0;i<n;i++)
  e[i].compute();
}
