#include<iostream>
using namespace std;



int pivotInArray(int a[],int size){

int start=0, end=size-1;
int mid= start+(end-start)/2;

while(start<end){

if(a[mid]>=a[0]){
    start= mid+1;
}
else{
    end=mid;
}

mid= start+(end-start)/2;
}

return start;


}

int main(){


int arr[5]={7,9,1,2,3};

cout<<"pivot of this array is in index:- "<<pivotInArray(arr,5);


}