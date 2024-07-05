#include<iostream>
using namespace std;


class base{
    public:
    base(){
        cout<<"hello haseen"<<endl;
    }
    base(int x){
        cout<<"hello harsh"<<x<<endl;
    }
};
 
 class derived:public base{
    public:
    derived (){
        cout<<"ram ram "<<endl;
    }
    derived(int x){
        cout<<"radhe radhe"<<x<<endl;
    }

    derived(int x,int a):base(x){                    // this is important
        cout<<"mai hi hu "<<a<<endl;
    }
 };
 int main(){
    // derived d();
    // derived d(10);
    derived d(10,20);

    
    
 }