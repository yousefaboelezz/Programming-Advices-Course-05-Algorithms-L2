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
int Revers(int Number){

  int Remainder = 0 , Number2 = 0;

  while(Number > 0){

    Remainder = Number % 10;
     Number = Number / 10;
    Number2 = Number2 * 10 + Remainder;

  }

  return Number2;

}
bool IsPalindromeNumber(int Number){

return Number == Revers(Number);

}

int main() {
      if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number?")))
        cout << "\nYes , it is a Palindrome number.\n";
    else
        cout << "\nNo , it is NOT a Palindrome number.\n";
    return 0;
}