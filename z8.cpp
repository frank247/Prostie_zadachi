#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n, a, s;
    cout << "Введите число n: ";
    cin >> n;
    cout << "Введите число а: ";
    cin >> a;
    for (double i=1; i<=n; i++){
if (i>1)
s=s+1/pow(a,(2*i-2));
else s=1/a;
}
cout << s << endl;
return 0;
}