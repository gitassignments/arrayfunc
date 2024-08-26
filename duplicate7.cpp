#include <iostream>
using namespace std;
int removeDup(int f[], int size) {
    for (int i = 0; i<size; i++) {
        for (int j = i+1; j<size; j++)
        {
            if(f[i]==f[j])
            {
                while (j<size)
                {
                    f[j]=f[j+1];
                    j++;
                } --size;
            } else {
                continue;
            }
        }
    }
} int main()
{
    int m[]={4, 5, 7, 7, 9, 4};
    int size1 =sizeof(m)/sizeof(m[0]);
    removeDup(m,size1);
    cout<<"The sorted Array with unique elements is: "<<removeDup(m, size1);
    cout<<endl;

    return 0;
}
