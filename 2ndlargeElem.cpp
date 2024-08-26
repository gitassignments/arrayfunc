#include <iostream>
using namespace std;
int secondLargestVal(int f[], int size) {
    int maxVal=0;
    int secondMaxVal = -1;
    for (int i = 1; i<size; i++){
        if(f[i]>f[maxVal])
        maxVal = i;
    }
    // for 2nd laregst element
    for (int i = 0; i<size; i++) {
        if(f[i]!=f[maxVal]){
            if(secondMaxVal == -1)
            secondMaxVal = i;
        }
           else if (f[i]>f[secondMaxVal])
        secondMaxVal = i;
    } return secondMaxVal;
}
  int main () {
    int arr[] = {2, 4, 7, 9, 44, 98};
    int size = sizeof(arr)/sizeof(arr[0]);
    int secondMaxVal = secondLargestVal(arr, size);
    cout<<"second largest value is: "<<secondMaxVal<<endl;
    return 0;
 }