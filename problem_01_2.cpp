#include <iostream>

using namespace std;
void printtableheader(){

  cout << "\n\n\t\t\t multiplication from 1 to 10 \n\n";

  cout << "\t";
  for(int i =1; i<=10; i++){

    cout << i << "\t";

  }
  cout << "\n-----------------------------------------------------------------------------------\n";
}
string columsperator(int i){

  if(i >= 10)
    return " |";
   else
    return "  |";

}
void PrintMultiplicationTable(){
   printtableheader();


   for(int i=1; i <=10; i++){


    cout << i << columsperator(i)<< "\t";


    for(int j=1; j<= 10; j++){

         cout << i * j<< "\t";
    }
    cout << endl;

   }

}
int main()
{
   PrintMultiplicationTable();
    return 0;
}
