#include <iostream>
using namespace std;
int main(){
int arr[5]={12, 54, 8, 90, 23};
int largest=arr[0];
for (int i =0; i<5;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
cout<<largest<<endl;

//reverse array
int start=0;
int end = sizeof(arr)/sizeof(arr[0])-1;
while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end --;
}
for(int i=0;i<5;i++){
    cout<<arr[i]<< " "<<endl;
}





//finidng target ;
int arry[5] = {12, 34, 23, 55, 90};
int target = 23;
for(int i = 0;i<5;i++){
    if(arry[i]==target){
        cout<<"number of index ("<< i <<" )is = target \n";
    }
}


//odd number
int array[5]={12,7,18,21,44};
int index=0;
int newarr2[5];
for(int i=0 ; i<5;i++ ){
    if(array[i]%2==0){
        newarr2[index]=array[i];
        index++;
    }
}
  
for(int j=0 ; j<index;j++ ){
    cout<<newarr2[j]<< " ";
}

}