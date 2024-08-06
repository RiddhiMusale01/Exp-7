#include <iostream>
using namespace std;

int main() {
    
  double numbers[] = {5.5, 1.5, 5.6, 5.32, 9.43, 22.88};

  double sum = 0.0;
  double count = 0.0;
  double average;

  cout << "The numbers are: ";
  for (const double n : numbers) {
    cout << n << "  ";
   
    sum += n;
    
    ++count;
  }

  cout << "Sum = " << sum << endl;

  average = sum / count;
  cout << "Their Average = " << average << endl;
  return 0;
}
