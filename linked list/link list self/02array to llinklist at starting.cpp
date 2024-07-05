#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;


    node(int val){
   data=val;
   next=NULL;
    }
};

int main(){
    int arr[4]={4,6,7,9};
    int n=4;
    node* head;
    head=NULL;
    if(head==NULL){
        for(int  i=0;i<n;i++){
         node* temp;
        temp=new node(arr[i]);
        temp->next=head;
        head=temp;

        // cout<<head->data<<endl;
       
    }
   
    }
     node *p;
    p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    

    }