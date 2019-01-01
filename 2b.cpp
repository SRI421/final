#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  ifstream file;
  file.open("file1.txt");

  file.seekg(0,ios::end);
  int fsize=file.tellg();
  file.close();

  cout<<"size of file is:"<<fsize<<endl;
}
