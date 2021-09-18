/*Problem Statement
Take the principal amount, rate of interest, and the time period as input and calculate the Simple Interest.
Note: Return Answer As Floor Value.*/
#include <iostream>
using namespace std;

int main() {
    //Write your code here
int principal_amount;
float rate_of_interest;
int timeperiod;
int calculate;
    cin>>principal_amount;
    cin>>rate_of_interest;
    cin>>timeperiod;
    
    calculate= (principal_amount*rate_of_interest*timeperiod)/ 100;
    cout<<calculate;
    
    return 0;
}
