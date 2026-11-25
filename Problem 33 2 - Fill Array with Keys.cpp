#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

enum enCharType {
    SamallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamallLetter:
        return char(RandomNumber(97, 122));
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    }
    return '\0';
}


string GenerateWord(enCharType CharType, short Length){
   string Word = "";
   for(int i = 1; i <= Length; i++){
       Word = Word + GetRandomCharacter(CharType);
   }
   return Word;
}

void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray elements:\n\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << "\n";
    }
    cout << "\n";
}

string GenerateKey(){
  string Key = "";

  Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
  Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
  Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
  Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
  return Key;
}

void FillArrayWithKeys(string arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = GenerateKey();
}

int ReadPositiveNumber(string message){
  int Number = 0;
  do
  {
      cout << message;
      cin >> Number;
  } while(Number <= 0);
  return Number;
}

int main() {
    srand((unsigned)time(NULL));


    string arr[100];


    int arrlength = ReadPositiveNumber("How many keys do you want to generate?\n");


    FillArrayWithKeys(arr, arrlength);


    PrintStringArray(arr, arrlength);

    return 0;
}
