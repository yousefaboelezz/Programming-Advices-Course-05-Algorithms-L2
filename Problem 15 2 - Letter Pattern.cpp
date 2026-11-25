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
void  PrintInvertedNumberPattern(int Number){

   cout << "\n";

   for(int i = 65; i <=  65+Number-1; i++){

    for(int j = 1; j <= Number - ((65 + Number - 1) - i);j++){

        cout << char(i);
    }

    cout <<"\n";

   }

}

int main() {
       PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number?"));
       return 0;
}
