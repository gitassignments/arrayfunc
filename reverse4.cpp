#include <iostream>
using namespace std;
int reverseArr(int f[], int leng)
{
    int startpart = 0;
    int endpart = leng - 1;
    while(startpart<endpart)
    {
        int copy = f[startpart];
        f[startpart] = f[endpart];
        f[endpart] = copy;

        startpart++;
        endpart--;
    }

} int main()
{
    int arr[] = {6, 4, 7, 3, 8, 33};
    int size = sizeof (arr)/sizeof(arr[0]);
    reverseArr(arr, size);
    cout<<"Reversed array is"<<endl;
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    } 
   
    return 0;
}