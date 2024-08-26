#include <iostream>
using namespace std;
int firstOccurrenceInArr(int f[], int leng, int target)
{
    for (int i = 0; i<leng; i++) {
        if(f[i] == target) {
            return i;
        }
    }
     return -1;
} int main () 
{
    int arr[] = {3, 5, 6, 9, 8, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int targetVal = 7;

    int index = firstOccurrenceInArr(arr, size, targetVal);
    if (index != -1)
   {
    cout<<"The first occurrence of the initialized target "<< targetVal <<" is at index "<<index<<endl;
   } else {
    cout<<"Target isn't found"<<endl;
   }
   return 0;
}