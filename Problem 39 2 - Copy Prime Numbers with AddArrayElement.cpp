#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number) {
    int M = round(Number / 2.0);

    for (int counter = 2; counter <= M; counter++) {
        if (Number % counter == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100] , int arrlength ){
    for(int i = 0; i < arrlength; i++){
         cout << arr[i] << " ";
    }
    cout << "\n";
}


void AddArrayElement(int Number , int arr[100] , int& arrLength){
   arrLength++;
   arr[arrLength - 1] = Number;
}


void CopyArray(int arrSource[100], int arrDestination[100], int arrLength , int &arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++){
        if(CheckPrime(arrSource[i]) == enPrimNotPrime::Prime){

            AddArrayElement(arrSource[i] , arrDestination , arrDestinationLength);
        }

    }

}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArrayWithRandomNumbers(arr , arrLength);

    int arr2[100];
    int arr2Length = 0;

    CopyArray(arr , arr2 , arrLength , arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}
