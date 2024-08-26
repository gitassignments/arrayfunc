#include <iostream>
using namespace std;

double avgofArr(int f[], int size){
    int sum = 0;
   double avg=0;
    for (int i = 0; i<size; i++){
        sum+= f[i];
        avg = sum/size;
    }
    return avg;
} 
int main ()
{
    int arr[]= {6, 3, 7, 8, 9, 3};
    int size = sizeof(arr)/ sizeof(arr[0]);
    avgofArr(arr, size);
    cout<<"The average of the elements of array is: "<<avgofArr(arr, size)<<endl;


    return 0;
}