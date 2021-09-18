/*Write a program to find x to the power n (i.e., x^n). Take x and n from the user. You need to print the answer.
Note: For This Question, You Can Assume That 0 Raised To The Power Of 0 Is 1*/

#include <iostream>
using namespace std;

int main() {
    int count, n;                                           
       int x, y;                                             
                                                               
      // printf("Enter the values of x and n : ");               
      cin>>x>>n;                                
       y = 1.0;                                                
       count = 1;               /* Initialisation */
/* LOOP BEGINs */
while ( count <= n)      /* Testing */
                                  
       {                                                       
            y = y*x;                                           
            count++;           /* Incrementing */
                                    
       }                                                       
       /* END OF LOOP */
                                       
      cout<<y;  
  //Write your code here

    return 0;
}
