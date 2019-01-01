#include<iostream>
using namespace std;

class Complex
{
public:
  int r;
  float i;
public:
  void read()
  {
    cout<<"enter real and imaginary numbers\n";
    cin>>r>>i;
  }
  void display()
  {
    cout<<"real="<<r<<endl<<"imaginary="<<i<<endl;
  }
  friend Complex add(Complex&,Complex&);
  friend Complex mul(Complex&,Complex&);
};

Complex add(Complex& c1,Complex& c2)
{
  Complex c3;
  c3.r=c1.r+c2.r;
  c3.i=c1.i+c2.i;
  return c3;
}
Complex mul(Complex& c1,Complex& c2)
{
  Complex c3;
  c3.r=c1.r*c2.r;
  c3.i=c1.i*c2.i;
  return c3;
}

int main()
{
  Complex c1,c2,c4;
  c1.read();
  c2.read();
  c4=add(c1,c2);
  cout<<"addition of Complex number=";
  c4.display();
  c4=mul(c1,c2);
  cout<<"\nmultiplication of Complex number=";
  c4.display();
  return 0;
}
