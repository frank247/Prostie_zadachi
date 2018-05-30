#include <iostream>
#include <cmath>

using namespace std;
 
int main(){
  int n;
  double p=1;
  cout << "n=";
  cin >> n;
  for (int i=2; i<=n; i++) {
      p=p*(1-(1/pow(n,2)));
  }
  cout << p << endl;
    return 0;
}