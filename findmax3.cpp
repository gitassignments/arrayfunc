#include <iostream>
using namespace std;

int maxInArr(int f[], int size){
   int maxElement = f[0];
   for (int i = 1; i<size; i++) {
    if(f[i]>maxElement) {
        maxElement = f[i];
    }
   } 
    return maxElement;
} 
int main () 
{ 
    int m[7] = {4, 5, 8, 837, 937, 437, 7};
    int size = sizeof(m)/sizeof(m[0]);
   int maxElement = maxInArr(m,size);
   
        cout<<"The maximum value in array is: "<<maxElement<<endl;

    return 0;
}