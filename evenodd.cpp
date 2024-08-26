#include<iostream>
using namespace std;
int EvenOddCount(int f[], int size) {
    int countEven = 0;
    int countOdd = 0;
    for (int i =0; i<size; i++) {
        if(f[i] % 2 == 0){
        countEven++;
        } else {
            countOdd++;
        }
        
    } cout<<"The Even numbers in the array are:  "<<countEven<<endl;
    cout<<"The odd numbers in array are:  "<<countOdd<<endl;
} int main () {
    int arr[]= {1,4,6,3,8,22,98,7};
    int size = sizeof(arr)/ sizeof(arr[0]);
     EvenOddCount(arr, size);
    
    return 0;
}