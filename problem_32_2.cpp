#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrlength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrlength;

    for (int i = 0; i < arrlength; i++)
        arr[i] = RandomNumber(1,100);

}



void PrintArray(int arr[100] , int arrlength ){

    for(int i = 0; i < arrlength; i++){

         cout << arr[i] << " ";



    }
}

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength){

   for(int i = 0; i < arrLength; i++){

    arrDestination[i] = arrSource[arrLength - 1 - i];

   }


}

int main() {
    srand((unsigned)time(NULL));

    int arr[100] , arr2[100];

    int arrlength ;
    FillArrayWithRandomNumbers(arr , arrlength);

     CopyArrayInReverseOrder(arr, arr2, arrlength);


    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrlength);


    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, arrlength);




    return 0;
}
