#include<iostream>
using namespace std;
class base{
    public:
    
        void flex(){
            cout<<"haseen";
        }
    
};

class child: public base{
    public:
    void show(){
        cout<<"harsh";

    }
    
};
 int main(){
    child c;
    c.flex();
    cout<<endl;
    c.show();
    return 0;
 }