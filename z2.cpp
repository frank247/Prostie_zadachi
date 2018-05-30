#include <iostream>
using namespace std;
 
int main(){
    int n, temp=1;
    cout<<"введите число\n";
    cin>>n;
    while(n>0){
        temp*=n--;
    }
    cout<<temp;
    cout << endl;
    return 0;
}