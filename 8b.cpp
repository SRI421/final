#include<iostream>
using namespace std;

class person
{
public:
  string name, dept;
public:
  void read()
  {
    cout<<"enter name and department of person\n";
    cin>>name>>dept;
  }
};

class teacher: public person
{
public:
  int pub;
public:
  void getdata()
  {
    cout<<"enter no of the publications of teacher\n";
    cin>>pub;
  }
  void display()
  {
    cout<<"name="<<name<<endl<<"dept="<<dept<<endl<<"no of publications="<<pub<<endl;
  }
};
class student: public person
{
public:
  int sem,m1,m2,m3;
public:
  void get()
  {
    cout<<"enter sem, 3 sub marks each for 100\n";
    cin>>sem>>m1>>m2>>m3;
  }
};

class marks: public student
{
public:
float per=(m1+m2+m3)/3;
public:
  void dis()
  {
    cout<<"name="<<name<<endl<<"dept="<<dept<<endl<<"percentage="<<per<<endl;
  }
};

int main()
{
  teacher t;
  marks m;
  cout<<"enter teacher data\n";
  t.read();
  t.getdata();
  cout<<"teacher details are\n";
  t.display();
  cout<<"enter for student\n";
  m.read();
  m.get();
  cout<<"student details are\n";
  m.dis();

  return 0;
}
