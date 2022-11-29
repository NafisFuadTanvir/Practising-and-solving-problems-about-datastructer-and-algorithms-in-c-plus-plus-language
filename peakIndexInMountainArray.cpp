#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[],int n){
int start=0,end=n-1;
int mid=(start+end)/2;

while(start<end){
if(arr[mid]<arr[mid+1]){
   start=mid+1;
}
else{
end=mid;
}
mid=(start+end)/2;

}
 return start;
}

int main(){

int array[5]={1,2,3,3,5};
cout<<"peak index of mountain array is -"<<peakIndexInMountainArray(array,5);
}