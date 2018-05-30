#include <iostream>
#include <cmath>

using namespace std;
 
int main(){
  int n;
  double p=0;
  cout << "n=";
  cin >> n;
  for (int i=1; i<=n; i++) {
      p+=(double) (2*i)/(2*i+1);
  }
  cout << p << endl;
    return 0;
}