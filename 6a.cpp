#include<iostream>
using namespace std;

class Student
{
public:
  int usn,age;
  string name;
public:
  void getdata()
  {
    cout<<"enter the name, usn and age of the student\n";
    cin>>name>>usn>>age;
  }

};

class UG: public Student
{
public:
  int sem,fee,stipend;
public:
  void readug()
  {
    cout<<"enter the sem,fee and stipend of the student\n";
    cin>>sem>>fee>>stipend;
  }
  int getsem(){ return sem;}
  int getage(){return age;}
  void display()
  {
    cout<<"name="<<name<<endl<<"usn="<<usn<<endl<<"age="<<age<<endl;
    cout<<"sem="<<sem<<endl<<"fee="<<fee<<"stipend="<<stipend<<endl;
  }
};

class PG: public Student
{
public:
  int sem,fee,stipend;
public:
  void readpg()
  {
    cout<<"enter the sem,fee and stipend of the student\n";
    cin>>sem>>fee>>stipend;
  }
  int getsem(){ return sem;}
  int getage(){return age;}
  void display()
  {
    cout<<"name="<<name<<endl<<"usn="<<usn<<endl<<"age="<<age<<endl;
    cout<<"sem="<<sem<<endl<<"fee="<<fee<<"stipend="<<stipend<<endl;
  }
};

int main()
{
  UG ug[10];
  PG pg[10];
  int i,n,m;
  float average;

  cout<<"enter no of students in ug\n";
  cin>>n;

  cout<<"enter the details of ug students\n";
  for(i=0;i<n;i++)
  {
    ug[i].getdata();
    ug[i].readug();
  }
  cout<<"the ug students details are\n";
  for(i=0;i<n;i++)
  {
    ug[i].display();
  }
  for(int sem=0;sem<=8;sem++)
  {
    int found=0,sum=0,count=0;
    for(i=0;i<n;i++)
    {
      if(ug[i].getsem()==sem)
      {
        sum=sum+ug[i].getage();
        found=1;
        count++;
      }
    }
    if(found==1)
    {
      average=sum/count;
      cout<<"the average age of students of sem "<<sem<<"is "<<average<<endl;
    }
  }


  cout<<"enter no of students in pg\n";
  cin>>n;

  cout<<"enter the details of pg students\n";
  for(i=0;i<n;i++)
  {
    pg[i].getdata();
    pg[i].readpg();
  }
  cout<<"the ug students details are\n";
  for(i=0;i<n;i++)
  {
    pg[i].display();
  }
  for(int sem=0;sem<=8;sem++)
  {
    int found=0,sum=0,count=0;
    for(i=0;i<n;i++)
    {
      if(pg[i].getsem()==sem)
      {
        sum=sum+pg[i].getage();
        found=1;
        count++;
      }
    }
    if(found==1)
    {
      average=sum/count;
      cout<<"the average age of students of sem "<<sem<<"is "<<average<<endl;
    }
  }

}
