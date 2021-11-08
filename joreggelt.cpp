#include <iostream>
using namespace std;

int main() {
  int time = 8;
  if (time < 10) {
    cout << "Jó reggelt!";
  } else if (time < 20) {
    cout << "Jó napot!";
  } else {
    cout << "Jó estét!";
  }
  return 0;
}
