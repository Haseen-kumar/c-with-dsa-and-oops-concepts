#include<iostream>
using namespace std;

class base{
    public:
    void fun(){
        cout<<" haseen"<<endl;
    }
};
class child:public base{
    public:
    // void fun(){
    //     cout<<"harsh"<<endl;   //function name same is ther but output is differnt so derived class will be called
    // }
};
int main(){
    child c;
    c.fun();  
}