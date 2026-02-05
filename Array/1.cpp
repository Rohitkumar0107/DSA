// declaration
// initialization
// making array at runtime
// index and access in array
// taking input in array
// take n elements and print their doubles
// make all items of an array to 1
// functions and array
// linear search function
// linear search without function
// count 0s and 1s in array
// maximum number in an array
// minimum number in an array
// print extremes of an array
// reverse an array

// HOMEWORK
// memset function use and apply in C++
//     initialize all array values with 0 or -1 (not work on other values)
//     memset(arr, o/-1, sizeof(arr));
//     https://www.geeksforgeeks.org/memset-in-cpp/
// sizeof(arr);
//     initially 0
// 3 ways to implement swap function
//     using + -
//     using temp variable
//     using xor (IMP)


#include <iostream>
using namespace std;


// void printArr(int arr[], int size){
//     for(int i = 0; i<size ;i++){
//         cout << arr[i] << " " ;
//     }
//     cout << endl;
// }

// void linearSearch(int arr[],int size ,int key){
//     for(int i = 0;i<size;i++){
//         if(arr[i]==key){
//             cout << "found at " << i << " position" << endl;
//         }
//     }
// }

// int main() {

    // int arr[5];
    // // input 
    // cout << "Enter values in array" << endl;

    // for(int i = 0; i<5; i++){
    //     cin>>arr[i];
    // }

    // cout << endl << "printing array" << endl;

    // // for(int i = 0; i<5; i++){
    // //     cout<<arr[i] << " ";
    // // }

    // for(int i = 0; i<5; i++){
    //     cout<< 2*arr[i] << " ";
    // }


//     int arr[] = {1,2,3,4,5};
//     int size = 5;

//     int key = 4;

//     printArr(arr,size);


//     linearSearch(arr,size,key);



//     return 0;
// }

void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void doublePrint(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout << 2*arr[i] << " ";
    }
    cout << endl;
}

void changeToOne(int arr[], int size){
    for(int i= 0;i<size ;i++){
        arr[i]=1;
    }
    printArray(arr,size);
}

void LinearSerach(int arr[],int size,int key){
    for(int i = 0;i<size;i++){
        if(arr[i]==key){
            cout << "Fount at index " << i ;
            break;
        }
    }
}

void countZeroOne(int arr[],int size){
    int countZero = 0;
    int countOne = 0;
    for (int i = 0;i<size;i++){
        if(arr[i]==0){
            countZero++;
        }
        if(arr[i]==1){
            countOne++;
        }
    }

    cout << "zero Count : " << countZero << endl ;
    cout << "one count : " << countOne << endl;
}

void maxNumber(int arr[],int size){
    int max = INT8_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "max number is : " << max << endl ;
}

void minNumber(int arr[],int size){
    int min = INT8_MAX;
    for(int i = 0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "max number is : " << min << endl ;
}

void extremePrint(int arr[],int size){
    int i = 0;
    int j = size-1;

    while(i<=j){
        if(i==j){
            cout << arr[i] ;
            break;
        }
        cout << arr[i] << " ";
        cout << arr[j] << " ";
        i++;
        j--;
    }
}

void reverseArray(int arr[],int size){
    int i = 0;
    int j = size-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    printArray(arr,size);

}

void swapByTemp(int &a ,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swapbySub(int &a,int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

int main(){

    int arr[] = {1,10,5,3,40};
    int size = 5;

//double print
    // doublePrint(arr,size);

// change to 1
    // changeToOne(arr,size);

// linear search 
    // int key = 5;
    // LinearSerach(arr,size,key); // can apply flag for best practice 

//count 1 and 0
    // countZeroOne(arr,size);


// max number
    // maxNumber(arr,size);

// min number
    // minNumber(arr,size);

//extreame print 
    // extremePrint(arr,size);

//reverse array
    // reverseArray(arr,size);


    // swap implement 

    int a = 5;
    int b = 10;
    // swapByTemp(a,b);
    
    swapbySub(a,b);
    
    // swapByBitwise(a,b);
    
    cout << a << " " << b;

    return 0;
}