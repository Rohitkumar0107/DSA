// HOMEWORK
// GCD 


// sort 0s, 1s and 2s
// move all -ve numbers to one side of an array
// find duplicate in an array
// find missing element in an array
// find first repeating element in an array
// find common elements in 3 sorted arrays
//     intersection of 3 sorted arrays
// factorial of large number
// rotate by 90 deg
// spiral print
// wave print


#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void sortColor(int arr[]){
    int i = 0;
    int j = 0;
    int k = 10-1;

    while(j<k){
        if(arr[j] == 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        if(arr[j] == 1){
            j++;
        }
        if(arr[j] == 2){
            swap(arr[j],arr[k]);
            k--;
        }
    }

    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }


}

void duplicate(int arr[]){

    unordered_map<int ,int> freq;

    for(int i = 0;i<10;i++){
        freq[arr[i]]++;
        if(freq[arr[i]] > 1){
            cout << arr[i] ;
        }
    }

}


void wavePrint(int arr[3][3]){

    for(int i = 0;i<3;i++){

        if(i%2==0){
            //down 
            for(int j = 0;j<3;j++){
                cout << arr[j][i] << " ";
            }
            
        }
        else{
            //up
            for(int j = 3;j>0;j--){
                cout << arr[j][i] << " ";
            }
        }
    }


}


void spiralPrint(int arr[3][3]){


    vector<int> ans;

    int startrow = 0;
    int endrow = 2;
    int startcol = 0;
    int endcol = 2;

    int count = 0;
    int total  = 3*3;

    while(count < total){

        

    }


}

int main(){

    int arr[10] = {1,2,4,4,5,6,7,8,9,10};

    // sortColor(arr);

    // duplicate(arr);

    int arr2d[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // wavePrint(arr2d);

    spiralPrint(arr2d);

    return 0;
}