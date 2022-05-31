/*Problem 1) Palindromic Number
Task - Get a number from user. And check the number is palindromic number or not.
Input Format:-
23432
Constraints:-
INT_MIN < int n < INT_MAX
Output Format:-
yes
Sample Input 0:-
23432
Sample Output 0:-
yes
Explanation 0:-
step 1 - The reverse of the Number is 23432 . step 2 - Hence the number is palindromic number. step 3 - Output is yes.

Solution In C language:-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n,r,sum=0,temp;    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("yes");    
else    
printf("no");   
return 0;  
} 

