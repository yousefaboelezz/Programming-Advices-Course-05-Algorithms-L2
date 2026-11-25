#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
   cout << "\nEnter number of elements:\n";
   cin >> arrLength;

   for(int i = 0; i < arrLength ; i++)
     arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100] , int arrlength ){

    for(int i = 0; i < arrlength; i++){
         cout << arr[i] << " ";
    }
    cout << "\n";
}

int SumArray(int arr[100], int arrlength){

   int Sum = 0;

   for(int i = 0 ; i < arrlength; i++){
     Sum += arr[i];
   }

   return Sum;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrlength;

    FillArrayWithRandomNumbers(arr, arrlength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrlength);

    cout << "\nSum of all number is : ";
    cout << SumArray(arr, arrlength) << endl;

    return 0;
}
