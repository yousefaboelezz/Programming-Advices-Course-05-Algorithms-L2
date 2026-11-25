#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int ReadPositiveNumber(string message) {
    int Number = 0;
    do {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
int SumDigit(int Number){

  int Remainder = 0 , Sum = 0;

  while(Number > 0){

    Remainder = Number % 10;
     Number = Number / 10;

     Sum = Sum + Remainder;
  }
 return Sum;

}


int main() {
     cout << "\nSum Of Digits = "
     <<SumDigit(ReadPositiveNumber("Please enter a positive number?"))
     << "\n";

    return 0;
}
