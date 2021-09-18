/*Problem Statement
Write a program to input an integer N and print the sum of all its even digits and all its odd digits separately.
Digits Mean Numbers, Not The Places! If The Given Integer Is "13245", Even Digits Are 2 & 4, And Odd Digits Are 1, 3 & 5.*/


#include <iostream>
using namespace std;

int main() {
int n, sumEven = 0, sumOdd = 0, r;

   cin>>n;

   while ( n> 0)

   {

       r = n % 10;
       if (r % 2 == 0){

         sumEven = sumEven + r;
         }

     else{

         sumOdd = sumOdd + r;
         }

       n = n/ 10;

   }

   cout << sumEven << " " <<sumOdd;

   return 0;
}
