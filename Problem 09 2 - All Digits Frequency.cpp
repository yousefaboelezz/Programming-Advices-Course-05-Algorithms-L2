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

int CountDigitFrequency(int DigitToCheck, int Number) {
    int Remainder = 0, Freq = 0;

    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder) {
            Freq++;
        }
    }

    return Freq;
}
void PrintAllDigitsFrequencey(int Number){

 for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(i, Number);


        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequencey is "
                 << DigitFrequency << " Time(s).\n";
        }
    }



}

int main() {
    int Number = ReadPositiveNumber("Please enter the main number?");

    PrintAllDigitsFrequencey(Number);

    return 0;
}
