// 2D arrays
//     declaration
//     how it store in memory
//     mapping of 2D array in memory
//     initialization
//     row-wise access
//     col-wise access
//     mapping formula
//     2D arrays and functions
//     taking row wise input
//     taking col wise input
//     print row sum
//     print col sum
//     linear search in a matrix
//     maximum and minimum elements in a matrix
//     transpose of any rectangular matrix
//     transpose of a square matrix
// 2D vector
//     declaration
//     how it store in memory
//     inserion
//     number of rows and columns
//     row-wise access in 2D vector if number of elements in 1D vector are different
//     initialization
//         vector<vector<int>> arr (rows, vector<int>(cols,value));
//         vector<vector<int>> arr (3, vector<int>(5,101));
    
// HOMEWORK
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
using namespace std;

void PrintArray2D(int arr[2][2]){
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void PrintArray2Dc(int arr[2][2]){
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

void inputArrayR(int arr[2][2]){
    for(int i = 0;i<2 ;i++){
        for(int j = 0;j<2;j++){
            cin >> arr[i][j];
        }
    }

    PrintArray2D(arr);
}

void inputArrayC(int arr[2][2]){
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> arr[j][i] ;
        }
    }

    PrintArray2D(arr);
}

void SumRow(int arr[2][2]){
    for(int i = 0;i<2;i++){
        int sum = 0;
        for(int j = 0;j<2;j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

void sumCol(int arr[2][2]){
    for(int i = 0;i<2;i++){
        int sum = 0;
        for(int j=0;j<2;j++){
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}

void LinearSearch(int arr[2][2],int key){
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            if(arr[i][j]==key){
                cout << "found at [" << i << "][" << j << "]";
            }
        }
    }
}

void max(int arr[2][2]){
    int max = INT8_MIN;
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }

    cout << max ;
}

void min(int arr[2][2]){
    int min = INT8_MAX;
    for(int i =0 ;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    cout << min ;
}

// both square and rectangle matrix => all done by row and column size
void TransposeMatrix(int arr[2][2]){

    int TransposeArray[2][2];

    for(int i = 0 ;i<2;i++){
        for(int j = 0;j<2;j++){
            TransposeArray[j][i] = arr[i][j];
        }
    }

    PrintArray2D(arr);
    PrintArray2D(TransposeArray);

}



int main(){

    // int arr[2][2]= {{1,2},{3,4}};
    // PrintArray2D(arr);
    // PrintArray2Dc(arr);


    // int arr[2][2];
    // inputArrayR(arr);
    // inputArrayC(arr);

    // int arr[2][2]= {{1,2},{3,4}};
    // PrintArray2D(arr);
    // SumRow(arr);
    // sumCol(arr);

    // int arr[2][2]= {{1,2},{3,4}};
    // LinearSearch(arr,4);

    // max(arr);
    // min(arr);

    // TransposeMatrix(arr);




    // vector 

    // vector<vector<int>> arr(2,vector<int>(2));
    vector<vector<int>> arr(2,vector<int>(2,0));

    //input 
    // for(int i = 0;i<arr.size();i++){
    //     for(int j = 0;j<arr[0].size();j++){
    //         cin >> arr[i][j];
    //     }
    // }


    //print 
    for(int i= 0;i<arr.size();i++){
        for(int j = 0;j<arr[0].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}