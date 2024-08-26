#include <iostream>
using namespace std;
int differenceInArr(int f[], int size) {
    int max = f[0];
    int min = f[0];
    for(int i =0; i<size; i++) {
        if(f[i]>max) {
            max = f[i];
        }
        if(f[i]<min) {
            min = f[i];
        }
    } return max-min;
} int main () {
    int arr[] = {3, 5, 2, 16, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int difference = differenceInArr(arr, size);
    cout<<"The difference between maximum and minimum value in array is: "<<difference<<endl;
    return 0;
}