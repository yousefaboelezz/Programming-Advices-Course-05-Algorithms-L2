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

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrlength;


    FillArrayWithRandomNumbers(arr, arrlength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrlength);

    return 0;
}
