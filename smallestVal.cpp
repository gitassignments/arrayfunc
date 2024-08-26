#include <iostream>
using namespace std;
int smallestVal(int f[], int size) {
int minElement = f[0];
   for (int i = 1; i<size; i++) {
    if(f[i]<minElement) {
        minElement = f[i];
    }
   } 
    return minElement;
} 
int main () 
{ 
    int m[7] = {8, 7, 4, 37, 97, 43, 9};
    int size = sizeof(m)/sizeof(m[0]);
   int minElement = smallestVal(m,size);
   
        cout<<"The minimum value in array is: "<<minElement<<endl;

    return 0;
}
