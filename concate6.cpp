#include <iostream>
using namespace std;

int* concatArr(int f1[], int size1, int f2[], int size2)
{

int* finalArr = new int[size1 + size2];
for ( int i =0; i<size1; i++)
{
    finalArr[i]=f1[i];
}
for ( int i = 0; i<size2; i++)
{
    finalArr[size1+i]=f2[i];
}
return finalArr;

} int main () {
    int arr1[4] = {1,2,3,4};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[3] = {7,9,5};
    int size2 = sizeof (arr2)/ sizeof(arr2[0]);
   
    int* concantenatedArr=concatArr(arr1, size1, arr2, size2);
    cout<<"Concantenated Array is: ";
    for (int i = 0; i<size1 + size2; i++)
    {
        cout<<concantenatedArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}