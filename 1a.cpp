#include<iostream>
using namespace std;

class student
{
public: int rl,m1,m2,m3;
        string name;
public: void getdata()
        {
            cout<<"enter the name\n enter roll\n enter 3 sub marks\n";
            cin>>name>>rl>>m1>>m2>>m3;
        }
        void display()
        {
            string grade;
            float perc=(m1+m2+m3)*1.11;
            if(perc>90) grade="s+";
            else if(perc>80) grade="A";
            else if(perc>60) grade="B";
            else if(perc>40) grade="C";
            else grade="D";
            cout<<"details are"<<"name="<<name<<endl<<"roll no="<<rl<<endl<<"grade ="<<grade<<endl;
        }
};

int main()
{
  student s[3];
  student *p;

 for(int i=0;i<3;i++)
{
    s[i].getdata();
}


  p=s;

  for(int i=0;i<=2;i++)
  {
    p->display();
    p++;
  }
  return 0;
}
