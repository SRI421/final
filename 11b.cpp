#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream f1;
    f1.open("file1.txt");
    char c;

    ofstream fo;
    fo.open("file2.txt",ios::app);

    while(!f1.eof())
    {
      f1.read(&c,sizeof(c));
      fo.write(&c,sizeof(c));

    }
    f1.close();
    fo.close();

}
