/*Problem Statement
Given a number N, print sum of all even numbers from 1 to N.*/

#include<iostream>
using namespace std;

int main()
{
	int number, maximum, sum = 0;
	
	
	cin >> maximum;	
	for(number = 1; number <= maximum; number++)
	{
  		if ( number % 2 == 0 ) 
		{
  			
			sum = sum + number;
		}
	}
	
	cout << sum;
	
 	return 0;
}
