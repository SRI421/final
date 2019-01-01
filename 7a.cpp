#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

class Student{
private:
    char name[40];
    char grade;
    float marks;
public:
    void getdata()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter grade : ";
        cin>>grade;
        cout<<"Enter marks : ";
        cin>>marks;
        cout<<"\n";
    }
    void display()
    {
        cout<<"Name : "<<name<<"\t";
        cout<<"Grade : "<<grade<<"\t";
        cout<<"Marks : "<<marks<<"\t"<<"\n";
    }
};

int main(){
    Student arr[3];
    fstream f;
    f.open("stu.txt",ios::in|ios::out|ios::binary);
    if(!f){
        cout<<"Cannot open file !";
        return 1;
    }
    for(int i=0;i<3;i++){
        arr[i].getdata();
        f.write((char*)&arr[i],sizeof(arr[i]));
    }
    cout<<"The contents of stu.txt are shown below : \n";
    for(int j=0;j<3;j++){
        f.read((char*)&arr[j],sizeof(arr[j]));
        arr[j].display();
    }
    f.close();
    return 0;
}
