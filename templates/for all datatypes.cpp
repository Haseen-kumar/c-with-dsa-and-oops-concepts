#include<iostream>
using namespace std;

// template<class t>
class stack{
    private:
    int  *stk;
    int top;
    int size;
    public:
    stack( int sz){
        size=sz;
        top=-1;
        stk=new int[size]; 
    }
    void push(int  x);
    int pop();

};
// template<class t>
void stack ::push(int  x)
{
    if(top==size-1){
        cout<<"stack is full "<<endl;;
    }
    else{
        top++;
        stk[top]=x;
    }
}  ;

// template<class int >
int   stack ::pop(){

    int x=0;
    if(top==-1){
        cout<<"stack is empty "<<endl;
    }
    else{
        x=stk[top];
        top--;
        

    }
    return x;
};

int main(){
    stack s(7);
    s.push(126);
        s.push(139);
            s.push(156);    
                s.push(159);
                    s.push(15);
                        


}