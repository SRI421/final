#include<iostream>
using namespace std;

class A
{
public:
  int usn;
  string name;
  string dept;
public:
  void read()
  {
    cout<<"enter the name usn and dept"<<endl;
    cin>>name>>usn>>dept;
  }
};

class B: virtual public A
{
public:
  int t1,t2;
public:
  void readt()
  {
    cout<<"enter the test1 and test2 marks"<<endl;
    cin>>t1>>t2;
  }

};

class C:virtual public A
{
public:
  int score;
public:
  void reads()
  {
    cout<<"enter exam score"<<endl;
    cin>>score;
  }
};

class D:public B, public C
{
public:
  void display()
  {
      string grade;
      float perc=((t1+t2+score)/3);
      if(perc>90) grade="s+";
      else if(perc>80) grade="A";
      else if(perc>60) grade="B";
      else if(perc>40) grade="C";
      else grade="D";
      cout<<"details are"<<endl<<"name="<<name<<endl<<"roll no="<<usn<<endl<<"dept="<<dept<<endl<<"percentage="<<perc<<endl<<"grade ="<<grade<<endl;
  }
};

int main()
{
  D d1;
  d1.read();
  d1.readt();
  d1.reads();
  d1.display();
}
