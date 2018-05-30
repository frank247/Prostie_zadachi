#include <iostream>
 
using namespace std;
 
int main()
{
    int n=0;
    cin>>n;
    long int k=0;
    while(n!=0){
         n/=10;
         k++;
    }
    cout<<k;
    return 0;
}