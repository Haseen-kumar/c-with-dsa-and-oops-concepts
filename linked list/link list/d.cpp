#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

   
};

void display(node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;

    }
};

int  main (){
    //  node*head;
    node* one=new node();
    node* two =new node();

    one->data =10;
    one->next=two;
    two->data=39;
    two->next=NULL;

    display(one);




}