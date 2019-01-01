#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
  int i,count=0,in[11]={0};
  ifstream ifile;
  ifile.open("vowels.txt");
  string x,s;
  while(getline(ifile,x))
  {
    s.append(x);
  }




    for(i=0;i<s.length();i++)
    {
      char c=s[i];
cout<<c;
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
      switch (c) {

      case 'a': in[1]++;
                break;
      case 'e': in[2]++;
                break;
      case 'i': in[3]++;
                break;
      case 'o': in[4]++;
                break;
      case 'u': in[5]++;
                break;
      case 'A': in[6]++;
                break;
      case 'E': in[7]++;
                break;
      case 'I': in[8]++;
                break;
      case 'O': in[9]++;
                break;
      case 'U': in[10]++;
                break;

                  }
        count++;
    }

    }
    cout<<endl;
  cout<<"a"<<in[1]<<endl;
  cout<<"e"<<in[2]<<endl;
  cout<<"i"<<in[3]<<endl;
  cout<<"o"<<in[4]<<endl;
  cout<<"u"<<in[5]<<endl;
  cout<<"A"<<in[6]<<endl;
  cout<<"E"<<in[7]<<endl;
  cout<<"I"<<in[8]<<endl;
  cout<<"O"<<in[9]<<endl;
  cout<<"U"<<in[10]<<endl;
  cout<<endl<<"The count of vowels is : "<<count<<endl;
  return 0;
}
