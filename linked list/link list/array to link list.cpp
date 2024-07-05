#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
}*first=NULL;

void createlinklist(int a[],int n){
    int i;
    node*t, *last;
    node* first=new node();
    first->data=a[0];
    first->next=NULL;
    last=first;
    // cout<<one->data<<endl;


    for(i=1;i<n;i++){
       node* t=new node();
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    

    }
    

};

void display(node* p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
};

int main(){
   int a[]={4354,2,5,6};
//    int n=sizeof(a)/sizeof(a[0]);
  

    createlinklist(a,4);
    display(first);
    return 0;
}