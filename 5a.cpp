#include<iostream>
using namespace std;

class Time1
{
public:
  int h,m,s;
public:
  Time1()
  {
    h=0;
    m=0;
    s=0;
  }
  Time1(int h1,int m1,int s1)
  {
    h=h1;
    m=m1;
    s=s1;
  }
  Time1 add(Time1 &c1,Time1 &c2)
  {
    Time1 temp;
    temp.h=c1.h+c2.h;
    temp.m=c1.m+c2.m;
    temp.s=c1.s+c2.s;
    return temp;
  }
  void display()
  {
    cout<<h+m/60<<":"<<m%60+s/60<<":"<<s%60<<endl;
  }
};
int main()
{
  Time1 c;
  Time1 a(12,25,13);
  Time1 b(1,35,40);
  c=c.add(a,b);
  a.display();
  b.display();
  c.display();
  return 0;
}
