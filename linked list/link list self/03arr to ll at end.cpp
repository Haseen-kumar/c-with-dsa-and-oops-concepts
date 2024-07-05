#include<iostream>
using namespace std;

class  node{
    public:
    int data;
    node*  next;


    node(int val){
        data=val;
        next=NULL;
    }

};

int main(){
   node* head;
   head=NULL;
   int arr[100]={};
   int n;
   cout<<"enter the size of array :-- "<<endl; 
   cin>>n;
   for(int i=0;i<n;i++){
   cin>> arr[i];
   };
   cout<<endl<<" the array is :"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i] <<" ";
   }
   cout<<endl;


   if(head==NULL){
  
     
          for(int i=n-1;i>=0;i--){
               node* temp=new node(arr[i]);
               temp->next=head;
               head=temp;

    }
    
   }

   node* p=head;

   while(p){
    cout<<p->data<<" ";
    p=p->next;
   }





}