#include <iostream>
#include <vector>
using namespace std;


int BS(int arr[],int target,int size){
    int s = 0;
    int e = size - 1; 
    int mid = (s+e)/2;

    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(target < arr[mid]){
            e = mid-1;
        }
        else{
            mid = s + 1;
        }
        mid = (s+e)/2;
    }

    return 0;

}

int main(){

    int arr[] = {2,4,6,8,10,12,16};
    int size = 7;
    int target = 4;

    cout << BS(arr,target,size);


    return 0;
}