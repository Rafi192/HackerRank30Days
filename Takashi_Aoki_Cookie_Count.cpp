#include <iostream>

using namespace std;

int main() {

  long long  takashi, aoki, k;
  cin >> takashi >> aoki >> k;
    if (k <= takashi) {
      takashi = takashi - k;

    } else if (k > takashi && k <= takashi + aoki) {
      aoki = (takashi + aoki) - k;
      takashi = 0;

    } else if (k > takashi + aoki) {
      takashi = 0;
      aoki = 0;
    }
  
  cout << takashi << " " << aoki << "\n";

  return 0;
}