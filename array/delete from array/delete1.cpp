#include<iostream>
using namespace std;
 struct array{
        int a[10];
        int size;
        int lenght;
 };

 int del(struct array *arr,int index){
   int x=0;
   int i;
   if(index>=0 && index<arr->lenght){
    x=arr->a[index];
    for(i=index;i<arr->lenght-1;i++)
       arr->a[i]=arr->a[i+1];
       arr->lenght--;
       return x;
   }
    return 0;
 }
 void display(struct array arr){
    for(int i=0;i<arr.lenght;i++){
        cout<<" "<<arr.a[i];
    }
 }

int main()
{
    struct array arr={{2,3,4,5,6},10,5};

   cout<< del(&arr,1)<<" ";
   cout<<" remaining elements "<<endl;
   display(arr);
    return 0;
}
