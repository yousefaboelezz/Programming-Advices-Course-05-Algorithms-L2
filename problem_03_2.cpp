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

bool CheckNumber(int Number) {
    int sum = 0;
    for (int i = 1; i < Number; i++) {
        if (Number % i == 0) {
            sum += i;
        }
    }
    return Number == sum;
}

void PrintResult(int Number) {
    if (CheckNumber(Number)) {
        cout << Number << " Is a Perfect Number.\n";
    } else {
        cout << Number << " Is NOT a Perfect Number.\n";
    }
}

int main() {
    PrintResult(ReadPositiveNumber("Please enter a positive number? "));
    return 0;
}
