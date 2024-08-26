#include<iostream>
using namespace std;
int EvenOddSum(int f[], int size,) {
    int sumEven = 0;
    int sumOdd = 0;
    for (int i =0; i<size; i++) {
        if(f[i] % 2 == 0){
       sumEven += f[i];
        } else {
          sumOdd += f[i];
        }
        
    } 
} int main () {
    int arr[]= {1,4,6,3,8,22,98,7};
    int size = sizeof(arr)/ sizeof(arr[0]);
    
     int sumEven, sumOdd; 
     EvenOddSum(arr, size);
    cout<<"The sum of Even numbers in the array are:  "<<sumEven<<endl;
    cout<<"The sum of odd numbers in array are:  "<<sumOdd<<endl;

    
    return 0;
}