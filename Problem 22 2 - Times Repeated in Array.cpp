#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


int ReadPositiveNumber(string message){

  int Number = 0;
  do
  {
      cout << message << endl;
      cin >> Number ;

  }while(Number <= 0);

   return Number;
}
 void ReadArray(int arr[100] , int& arrlength){

     cout << "\nEnter number of elements:\n";
     cin >> arrlength;

     cout << "\nEnter array elements: \n";
     for(int i = 0; i < arrlength; i++){

         cout << "Element [" << i + 1 << "] : ";
         cin >> arr[i];

     }

  cout << endl;

 }

// الدالة المعدلة لطباعة المصفوفة بشكل أفقي
void PrintArray(int arr[100] , int arrlength ){

    for(int i = 0; i < arrlength; i++){

         cout << arr[i] << " "; // تطبع العناصر وبينها مسافة

    }
    cout << "\n"; // تنزل سطر جديد مرة واحدة فقط بعد انتهاء الطباعة
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;
    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (Number == arr[i])
        {
            count++;
        }
    }
    return count;
}


int main()
{
    int arr[100];
    int arrlength;
    int NumberToCheck;

    ReadArray(arr , arrlength);


    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");


    cout << "\nOriginal array: ";
    PrintArray(arr, arrlength);


    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrlength) << " time(s)\n";


    return 0;
}
