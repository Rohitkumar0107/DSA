// vector
//     declaration
//     initialization
//     arr.size();
//     arr.capacity();
//     arr.push_back(value);
//     arr.pop_back();
//     sizeof(arr);
// find unique element
// find union of 2 arrays having no duplicate
// find intersection of 2 arrays
// for each loop
//     for(auto i:arr)
// print all pairs of a vector
// pairSum    print all pairs with a given sum and array
// tripletSum   print all triplets with a given sum and arrays
// quadSum   print all det of 4 elements with a given sum and array
// sort 0s and 1s   dutch national flag

// HOMEWORK
// find union of 2 arrays
// left rotate an array by 1 element
// majority element in an array
// buy and sell stock level 1
// dutch national flag
//     https://www.geeksforgeeks.org/3-way-quicksort-dutch-national-flag/


#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

void printArray(vector<int> arr){
    for(int i = 0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findUnique(vector<int> arr){
    int ans = 0;
    for(int i = 0;i<arr.size();i++){
        ans = arr[i]^ans;
    }

    cout << ans ;
}

void findUniqueMap(vector<int> arr){

    unordered_map<int, int> freq;

    for(auto i : arr){
        freq[i]++;
    }
    
    for(auto i : freq){
        if(i.second==1){
            cout << i.first << endl;
        }
    }

}

void intersactionArrayND(vector<int> arr, vector<int> brr){
    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        for(int j = 0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                ans.push_back(arr[i]);
            }
        }
    }

    printArray(ans);
}


void intersactionArrayWD(vector<int> &arr, vector<int> &brr){
    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        for(int j = 0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                ans.push_back(arr[i]);
                brr[j] = -1;
            }
        }
    }

    printArray(ans);

}


void unionArrayND(vector<int> arr, vector<int> brr){
    vector<int> ans;
    for(int i = 0;i<arr.size();i++){
        ans.push_back(arr[i]);   
    }
    for(int j=0;j<brr.size();j++){
        ans.push_back(brr[j]);
    }

    printArray(ans);
}

void unionArrayWD(vector<int> arr, vector<int> brr){
    vector<int> ans;

    intersactionArrayWD(arr,brr);

    for(int i = 0;i<arr.size();i++){
        ans.push_back(arr[i]);   
    }
    for(int j=0;j<brr.size();j++){
        if(brr[j]!=-1){
            ans.push_back(brr[j]);
        }
    }

    printArray(ans);
}



void twoSum(vector<int> arr, int sum){
    for(int i = 0;i<arr.size()-1;i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

void threeSum(vector<int> arr, int sum){
    for(int i = 0;i<arr.size()-2;i++){
        for(int j = i+1;j<arr.size()-1;j++){
            for(int k = j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

void sort0and1(vector<int> arr){
    int i = 0;
    int j = arr.size()-1;

    while(i<j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    printArray(arr);
}


int main(){

    // vector<int> arr(2,10);
    // vector<int> arr{10,20,30,40};
    // vector<int> arr;

    // int ans = sizeof(arr)/sizeof(int);
    // cout << ans ;

    // arr.push_back(10);
    // arr.push_back(20);
    // arr.pop_back();

    // for(int i = 0;i<arr.size();i++){
    //     cout << arr[i] << " ";
    // }


    // vector<int> arr {1,2,3,4,5,4,3,2,1};
    // printArray(arr);

    // findUnique(arr);
    // findUniqueMap(arr);

    vector<int> arr {1,2,3,4,5};
    vector<int> brr {1,3,6};

    // unionArrayND(arr,brr);
    unionArrayWD(arr,brr);

    // intersactionArrayND(arr,brr);
    // intersactionArrayWD(arr,brr);

    // vector<int> arr {1,2,3,4,5};
    // int sum = 6;

    // twoSum(arr,sum);
    // threeSum(arr,sum);

    // vector<int> arr{0,1,0,1,1,0,0,0,1};
    // sort0and1(arr);

    return 0;
}