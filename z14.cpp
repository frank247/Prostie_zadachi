#include <iostream>
using namespace std;
int n;
int main()
{
    cout << "введите число n=";
    cin >> n; 
    float rez=0;
    for (int i=1; i<=n; i++)
{
    float rez1=1;
    for (int j=i; j<=i*2; j++) {
        rez1*=j;
        cout << j;
        if (j<i*2) cout << "*";
    }
     if (i<n) cout << "+";
     rez=rez+rez1;
}
    cout<< "=" <<rez <<endl;
}