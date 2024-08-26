#include <iostream>
using namespace std;
int ArraySum(int f[], int leng) {
    int sum = 0;
    for (int i = 0; i < leng; i++){
        sum+= f[i];
    }
    return sum;
} int main ()
{
    int m[]= {4, 98, 2, 6, 3};
    int leng = sizeof(m)/ sizeof(m[0]);
    ArraySum(m,leng);

    cout<<"The sum of elements of array is: "<<ArraySum(m, leng)<<endl;
    return 0;
}