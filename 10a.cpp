#include <iostream>
using namespace std;

class Volume{
    public : static int count;
    Volume(){
        count++;
    }
    static int getCount(){
        return count;
    }
    void box(int a ,int b){
        cout<<"The volume is : "<<a*b<<endl;
    }

};
int Volume::count=0;

int main() {
    Volume v1,v2,v3;
    v1.box(10,20);
    v2.box(18,70);
    v3.box(4,20);
    cout<<v1.getCount()<<endl;

}
