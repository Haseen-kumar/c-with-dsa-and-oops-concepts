#include<iostream>
using namespace std;

template<class t>
class stack{
    private:
    t  *stk;
    int top;
    int size;
    public:
    stack( int sz){
        size=sz;
        top=-1;
        stk=new t[size]; 
    }
    void push(t x);
    t pop();

};
template<class t>
void stack <t>::push(t  x)
{
    if(top==size-1){
        cout<<"stack is full "<<endl;;
    }
    else{
        top++;
        stk[top]=x;
    }
}  ;

template<class t >
t   stack<t> ::pop(){

    t x=0;
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
    stack<int>s(7); /// can be float or etc
    s.push(126);
        s.push(139);
            s.push(156);    
                s.push(159);
                    s.push(15);
                        


}