/*Problem 5) Sum of digit of odd index

Task:-
suppose you have a number of 5 digit like 75439. - give the index like : index of 7 is 5 index of 5 is 4 index of 4 is 3 index of 3 is 2 index of 9 is 1

Input Format:-
integer number

Output Format:-
integer number

Sample Input:-
12345

Sample Output :-
9

Explanation :-
sum of 5 + 3 + 1 = 9

Solution In C language:-*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        int k=n%10;
        n=n/100;
        sum=sum+k;
    }
    printf("%d",sum);
    return 0;
}

