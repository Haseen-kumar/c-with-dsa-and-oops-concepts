#include<iostream>>
using namespace std;
class rectangle{
private:
int length;
int breadth;
public:
int setLength(int l){
    if(l>=0){
        length=l;

    }
    else{
        length=0;
    }
}
int setBreadth(int l){
    if(l>=0){
        breadth=l;

    }
    else{
        breadth=0;
    }
}
int area(){
    return length*breadth;
}
int perimeter(){
   return 2*(length+breadth);
}


};
int main()
{
    rectangle r;
    r.setLength(10);
    r.setBreadth(4);
    cout<<r.area()<<" "<<r.perimeter();
    }