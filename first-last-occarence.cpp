#include<iostream>
using namespace std;

int firstoccarence(int arr[],int n,int key){
int start=0,end=n-1;
int mid=(start+end)/2;
int ans=-1;
while(start<=end){
if(arr[mid]==key){
   ans=mid;
   end=mid-1;
}
else if(key>arr[mid]){
start= mid+1;
}

else if(key<arr[mid])
{
    end=mid-1;

}
 mid=(start+end)/2;
}

return ans;

}

int lastoccarence(int arr[],int n,int key){
int start=0,end=n-1;
int mid=start+(end-start)/2;
int ans=-1;
while(start<=end){
if(arr[mid]==key){
   ans=mid;
   start=mid+1;
}
else if(key>arr[mid]){
start= mid+1;
}

else if(key<arr[mid])
{
    end=mid-1;

}
 mid=(start+end)/2;
}

return ans;

}
int main(){

int array[5]={1,2,3,3,5};
int first= firstoccarence(array,5,3);
int last= lastoccarence(array,5,3);
cout<<"first occurence of 3 is at index: -"<<first<<endl;
cout<<"last occurence of 3 is at index: -"<<last;




}