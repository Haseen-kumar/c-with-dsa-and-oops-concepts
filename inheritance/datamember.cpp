#include<iostream>
using namespace std;
class base{
    public:
    int a=30;
    
        void flex(){
            cout<<"haseen"<<" "<<a;
        }
    
};

class child: public base{
    public:
    void show(){
        cout<<"harsh";

    }
    
};
 int main(){
    base f;
    f.flex();
    cout<<endl;
    child c;
      c.a=10;
    c.flex();
  
    cout<<endl;
    c.show();
    return 0;
 }