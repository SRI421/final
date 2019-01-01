#include<iostream>
using namespace std;

class A{
public:
	A(){
		cout<<"Contructor of class A is called.\n";
	}
	~A(){
		cout<<"Destructor of class A is called.\n";
	}
};

class B{
public:
	B(){
		cout<<"Contructor of class B is called.\n";
	}
	~B(){
		cout<<"Destructor of class B is called.\n";
	}
};

class C:public B{
public:
	C(){
		cout<<"Contructor of class C is called.\n";
	}
	~C(){
		cout<<"Destructor of class C is called.\n";
	}
};

class D:public C{
public:
	D(){
		cout<<"Contructor of class D is called.\n";
	}
	~D(){
		cout<<"Destructor of class D is called.\n";
	}
};

class E:public A,public B{
public:
	E(){
		cout<<"Contructor of class E is called.\n";
	}
	~E(){
		cout<<"Destructor of class E is called.\n";
	}
};

int main(){
	D obj1;
	E obj2;
	return 0;
}
