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

void printArray(int arr[10]){
    for(int i = 0;i<10;i++){
        cout << arr[i] << " " ;
    }
}

void findGCD(int arr[3]){
    
}

void sortColorBRUTE(int arr[10]){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0;i<10;i++){
        if(arr[i]==0){
            count0++;
        }
        if(arr[i]==1){
            count1++;
        }
        if(arr[i]==2){
            count2++;
        }
    }

    int i = 0;
    while(count0){
        arr[i] = 0;
        i++;
        count0--;
    }
    while(count1){
        arr[i] = 1;
        i++;
        count1--;
    }
    while(count2){
        arr[i] = 2;
        i++;
        count2--;
    }

    printArray(arr);
    
}

void sortColorO(int arr[10]){
    int i = 0;
    int j = 0;
    int k = 9; // size - 1

    while(j<k){
        if(arr[j]==0){
            swap(arr[i],arr[j]);
            j++;
            i++;
        }
        if(arr[j]==1){
            j++; 
        }
        // if(arr[k]==2){
        //     k--;
        // }
        if(arr[j]==2){
            swap(arr[j],arr[k]);
            k--;
        }

    }

    printArray(arr);

}

void moveNeg(int arr[10]){

    int ans[10];
    int j = 0;

    for(int i = 0;i<10;i++){
        if(arr[i]>=0){
            ans[j] = arr[i];
            j++;
        }
    }
    for(int i = 0;i<10;i++){
        if(arr[i]<0){
            ans[j] = arr[i];
            j++;
        }
    }

    printArray(ans);
    
}

void moveNeg2(int arr[10]){

    for(int i = 0;i<10-1;i++){
        for(int j = i+1;j<10;j++){
            if(arr[i]<0){
                swap(arr[i],arr[j]);
            }
        }
    }

    printArray(arr);

}

void findDuplicate(int arr[10]){
    for(int i = 0;i<10-1;i++){
        for(int j = i+1;j<10;j++){
            if(arr[i]==arr[j]){
                cout << arr[i] << endl;
                break;
            }
        }
    }
}

void findDuplicateO(int arr[10]){

    unordered_map<int ,int> freq;

    for(int i = 0;i<10;i++){
        freq[arr[i]]++;
        if(freq[arr[i]]>1){
            cout << arr[i] ;
        }
    }

}


void missingElement(int arr[10]){

    int sum = 0;
    int indexSum = 0;

    for(int i = 1;i<=10;i++){
        sum = sum + arr[i-1];
        indexSum = indexSum + i;
    }

    int ans  = sum - indexSum;

    cout << "missing element: "<< ans;

}

void commonElement(int arr[4],int brr[2],int crr[3]){
    for(int i = 0;i<4;i++){
        for(int j = 0;j<2;j++){
            for(int k= 0;k<3;k++){
                if(arr[i]==brr[j]==crr[k]){
                    cout << arr[i] << " " ;
                }
            }
        }
    }
}

void rotate90(int arr[2][2]){
    int ans[2][2];

    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            ans[j][i] = arr[i][j];
        }
    }

    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
}

void wavePrint(int arr[3][4]){
    for(int startCol = 0;startCol<4;startCol++){
        //even
        if((startCol&1) == 0){
            for(int i = 0;i<3;i++){
                cout << arr[i][startCol] << " " ;
            }
        }
        else{
            for(int i = 3-1;i>=0;i--){
                cout << arr[i][startCol] << " ";
            }
        }
    }
}


void spiralPrint(int arr[3][4]){

    vector<int> ans;

    int Row = 3;
    int Col = 4;
    
    int count = 0;
    int total = Row*Col;

    int StartRow = 0;
    int StartCol = 0;
    int EndRow = Row-1;
    int EndCol = Col-1;


    while(count<total){
        // start row ||  first row 
        for(int index = StartCol;count < total && index<=EndCol;index++){
            ans.push_back(arr[StartRow][index]);
            count++;
        }
        StartRow++;

        //End col
        for(int index = StartRow;count < total && index<=EndRow;index++){
            ans.push_back(arr[index][StartCol]);
            count++;
        }

        EndCol++;

        //end row
        for(int index = EndCol;count < total && index>=StartCol;index--){
            ans.push_back(arr[EndRow][index]);
            count++;
        }
        EndRow--;

        //start col
        for(int index =EndRow;count < total && index>=StartRow;index--){
            ans.push_back(arr[EndCol][index]);
            count++;
        }
        StartCol++;

    }

    for(int i= 0;i<ans.size();i++){
        cout << ans[i] <<" ";
    }

}

//  vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         int count = 0;
//         int total = row*col;
        
//         //index initialisation
//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row-1;
//         int endingCol = col-1;
        
        
//         while(count < total) {
            
//             //print starting row
//             for(int index = startingCol; count < total && index<=endingCol; index++) {
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;
            
//             //print ending column
//             for(int index = startingRow; count < total && index<=endingRow; index++) {
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;
            
//             //print ending row
//             for(int index = endingCol; count < total && index>=startingCol; index--) {
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;
            
//             //print starting column
//             for(int index = endingRow; count < total && index>=startingRow; index--) {
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         } 
//         return ans;
//     }


int main(){

    // int arr[4] ={1,2,3,4};
    // int brr[2] = {2,3};
    // int crr[3] = {1,2,3};

    // sortColorBRUTE(arr);
    // sortColorO(arr);

    // moveNeg(arr);
    // moveNeg2(arr);

    // findDuplicate(arr);
    // findDuplicateO(arr);

    // missingElement(arr);

    // commonElement(arr,brr,crr);

    // int arr[2][2] = {{1,2},{3,4}};
    // rotate90(arr);

    int arr[3][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };


    // wavePrint(arr);

    spiralPrint(arr);

    return 0;

}