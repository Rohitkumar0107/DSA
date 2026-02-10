#include<iostream>
using namespace std;

int firstOcc(int arr[],int size ,int target){

    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    int ans ;

    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]<target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s+(e-s)/2;

    }

    return ans;

}

int lastOcc(int arr[],int size ,int target){

    int s = 0;
    int e = size - 1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            s = mid + 1;
        }
        else if(target<arr[mid]){
            e = mid - 1;
        }
        else if(target>arr[mid]){
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }

    return ans;


}


int main(){
    int arr[] = {1,2,3,4,4,4,4,4,6,7,9};
    int size = 11;
    int target = 4;

    int first = firstOcc(arr,size,target);
    int last = lastOcc(arr,size,target);
    
    cout << "total no.of occurence " << (last-first+1);


    return 0;
}