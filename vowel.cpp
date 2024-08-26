#include <iostream>
using namespace std;
int vowelInArr(const char f[], int length) {
int countvowel = 0;
for(int i = 0; i<length; i++) {
char ch = f[i];
if (ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
    countvowel++;
}
} return countvowel;
} int main () {
    const char arr[]= "Hey POOKIE"; 
    int length = sizeof (arr)/ sizeof(arr[0]);
    int countvowel = vowelInArr(arr, length);
    cout<<"The total number of vowels in the given string is: "<<countvowel<<endl;
    return 0;
}