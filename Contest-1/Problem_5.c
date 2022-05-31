/*Problem 5) Beautiful_Beach

Task:-
You are on a large ship and you put down anchor near a beautiful beach. There is a small boat ferrying passengers back and forth, and you get in line for it.
How long will you have to wait to get to the beach? You know that 20 people can fit on the boat and each trip to shore takes 10 minutes each way.
Determine Your Wait time if you know the total number of people ahead of you in line.

Input Format:-
An interger that represent number of people ahead of you.

Output Format:-
An integer taht represent the number of minutes taht you will have to wait untill you are standing on the beach.

Sample Input :-
1

Sample Output :-
10

Explanation :-
If you are the first you will have to wait till boat reach to the beach.

Solution In C language:-*/

#include <stdio.h>

int main() {
int pos,time,i=1;
scanf ("%d",&pos);
while (pos>=20)
{
    pos-=20;
    i+=1;
}
time=10*(2*i-1);
printf ("%d",time);
    return 0;
}

