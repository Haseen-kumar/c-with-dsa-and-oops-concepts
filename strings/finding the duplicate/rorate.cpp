#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int temp[4];
    int n=4;
    int i=0;
    int k=2;
     while(i<n){
        temp[(i+k)%n]=arr[i];
        i++;
     }

  for(i=0;i<n;i++){
    arr[i]=temp[i];
  }
  for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
       

        
    




    return 0;
}