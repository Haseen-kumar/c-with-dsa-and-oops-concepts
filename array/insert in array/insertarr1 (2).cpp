#include<iostream>
 using namespace std;
int insert(int arr[],int n,int k){
    int m;
    cout<<"enter the value "<<endl;
    cin>>m;
    for(int i=n;i>k;i--){
      
             
            arr[i]=arr[i-1];
            
        }
        arr[k]=m;
        n++;
    return 0;

    }


void print(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i];
    }
}



int main(){
   int arr[10];
   int n;
   cout<<"rnter the size of array"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    cout<< "enter the element " <<i <<" ";
    cin>>arr[i];
   };
   int k;
   cout<<"enter the index where u want to insert the value"<<endl;
   cin>>k;
   insert(arr,n,k);
   print(arr,n);


    return 0;
}