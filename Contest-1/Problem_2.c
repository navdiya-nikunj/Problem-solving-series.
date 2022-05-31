/*Problem 2) In_My-Benifit
Task:-
You are in a store in India! The prices are listed in US Dollars and Rupees. 
You have both, but you want to make sure you pay the lower price! Do you pay in Dollars or Rupees? The exchange rate is 2 cents for every Rupees.
Create a program that takes two prices and tells you which one is lower after conversion.

Input Format:-
Two integer values, the first one is the price in Rupees and the second one is the price in Dollars.

Output Format:-
A string that says which currency you should make the purchase in ('Dollars' or 'Rupees').

Sample Input :-
4000
100

Sample Output :-
Rupees

Explanation :-
You should use rupees to buy 4000 rupees is equal to $80


Solution in C language:-*/

#include <stdio.h>

int main() {
int p,d;
scanf ("%d \n %d",&p,&d);
float d2p=d/0.02;
if (p<d2p) printf ("Rupees");
else printf ("Dollars");
    return 0;
}


