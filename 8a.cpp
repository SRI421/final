#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
  ifstream ifile;
  ifile.open("line.txt");
  string x,s;
  int count=0;
  while(getline(ifile,x))
  {
    s.append(x);
    count++;
  }
  cout<<"the no of lines in files is "<<count<<endl;
}
