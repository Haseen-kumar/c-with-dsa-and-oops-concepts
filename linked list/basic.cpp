#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    // node(int data){
    //     val=data;
    // }
};

void display(node* p){
    // int sum=0;
 while(p!=NULL){
    cout<< p->val<<" ";
  p=p->next;
   }
};

int main(){
//   node* head;
  node* one;
  node* two=NULL;
  node* third=NULL;

  one =new node();
  two =new node();
  third=new node();

   one->val=10;
   two->val=20;
   third->val=30;
   one->next=two;
   two->next=third;
   third->next=NULL;
//    head=one;
   display(one);
  





}