#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
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

void SwapNumber(int& A , int& B){
   int Temp ;

   Temp = A;
      A = B;
      B = Temp;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrlength)
{


    for (int i = 0; i < arrlength; i++)
        arr[i] = i + 1;

}

void ShuffeArray(int arr[100], int arrlength){

    for(int i = 0; i < arrlength; i++){

        swap(arr[RandomNumber(1,arrlength) - 1], arr[RandomNumber(1,arrlength) - 1]);

    }

}

void PrintArray(int arr[100] , int arrlength ){

    for(int i = 0; i < arrlength; i++){

         cout << arr[i] << " ";



    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];

    int arrlength = ReadPositiveNumber("Please Number Of Elements: ");

    FillArrayWithRandomNumbers(arr , arrlength);

     cout << "\nArray elements before shuffle:\n";
    PrintArray(arr, arrlength);
/*البرنامج ده بيطبع لوب وتحتها لوب من نفس الارقام بس متلخبطه*/

    ShuffeArray(arr, arrlength);


    cout << "\nArray elements after shuffle:\n";
    PrintArray(arr, arrlength);

    return 0;
}
