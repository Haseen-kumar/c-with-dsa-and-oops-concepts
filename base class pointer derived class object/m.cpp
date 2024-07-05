#include<iostream>
using namespace std;
class base{
    public:
    void fun1(){
        cout<<"hello"<<endl;
    }
    void fun2(){
        cout<<"haseen"<<endl;
    }
};
class derived:public base{
    public:
    void fun3(){
        cout<<" harsh"<<endl;
    }
};


int main(){
    base *p;
    p=new derived();
    p->fun1();
    p->fun2();
    // p->fun3();   flase statement 
    //  derived *p;
    // p=new base();
    // p->fun3();    flase staement
}