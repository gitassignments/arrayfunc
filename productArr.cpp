#include <iostream>
using namespace std;
int productOfArray(int f[], int leng) {
    int product = 1;
    for (int i = 0; i < leng; i++){
        product*= f[i];
    }
    return product;
} int main ()
{
    int m[]= {4, 98, 2, 6, 3};
    int leng = sizeof(m)/ sizeof(m[0]);
    productOfArray(m,leng);

    cout<<"The poduct of elements of array is: "<<productOfArray(m, leng)<<endl;
    return 0;
}