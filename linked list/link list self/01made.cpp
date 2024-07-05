#include<iostream>
using namespace std;

// all code is running properly bro


// class node{
//     public:
//   int data;
//   node* next;
// };

// void display(node *p){
//     cout<<p->data;
//     p=p->next;
// };


// int main(){
//     node* head;
//     head=new node();
//     head->data=23;
//     head->next=NULL;
//     display(head);

// }

//code finished here 

// this above code is very simple now when we assign the value of data and next we have to do with it constuctor for a better approch as code at below::--


class node{
    public:
    int data;
    node*next;

    node(int val){
        data=val;
        next=NULL;
    }

};


int main(){
    // int o=0;


node* head=new node(30);
// node* one=new node(40);

// node* two=new node(405);
// node* three=new node(45480);
// head->next=one;
// one->next=two;
// two->next=three;




node *p;
p=head;

while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
    // o++;
};
cout<<endl;
// cout<<o;
// cout<<endl;

// cout<<"after the insert at front  ::=== "<<endl;

// node*temp;
// temp=new node(599);
// temp->next=head;
// p=temp;
// while(p!=NULL){
//     cout<<p->data<<" ";
//     p=p->next;
// };
// cout<<endl;

// cout<<"link lixt after the insert at the end ::== "<<endl;
// node*tem;
// tem=new node(244);
// three->next=tem;
// int m=0;
// p=temp;
// while(p!=NULL){
//     cout<<p->data<<" ";
//     p=p->next;
//     m++;
// };
// cout<<endl;
// cout<<m;

// cout<<endl;
// cout<<"after delete the first node::== "<<endl;
// int total=0;
// p=head;
// while(p!=NULL){
    
//     cout<<p->data<<" ";
//     p=p->next;
//     total++;
// };
// cout<<endl;
// cout<<total;




 }