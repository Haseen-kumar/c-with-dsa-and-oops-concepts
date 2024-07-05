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
int setBreadth(int b){
    if(b>=0){
        breadth=b;

    }
    else{
        breadth=0;
    }
}
int getBreadth(){
    return breadth;
}
int getLength(){
    return length;
}
int area(){
    return length*breadth;
}
int perimeter(){
   return 2*(length+breadth);
}


};

class cuboid:public rectangle{
    private:
    int height;
    public:
    cuboid(int h){
   height=h;
  
    }
    // int getHeight();
    void setHeight(int h);
    

    int volume(){
        return getLength()*height*getBreadth();
    }
    


};
int main()
{
    cuboid r;
    r.setLength(10);
    r.setBreadth(4);
    r.setHeight(3);
    cout<<r.volume();
    }