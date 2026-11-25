#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void FillArrayWithKeys(int arr[100], int &arrLength)
{
    cout << "Enter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrlength)
{
    for(int i = 0; i < arrlength; i++){
         cout << arr[i] << " ";
    }
    cout << "\n";
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        if(arr[i] == Number)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
  return FindNumberPositionInArray(Number, arr, arrLength)!= -1;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArrayWithKeys(arr, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    int Number = ReadNumber();
    cout << "\nNumber you are looking for is: " << Number << endl;

    short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength);

    if (!IsNumberInArray(Number, arr, arrLength))
        cout << "No, The number is not found :-(\n";
    else
        cout << "Yes it is found :-)\n";
    return 0;
}
