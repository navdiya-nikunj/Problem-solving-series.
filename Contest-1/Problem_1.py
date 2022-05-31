'''Problem 1) Palindromic Number
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
step 1 - The reverse of the Number is 23432 . step 2 - Hence the number is palindromic number. step 3 - Output is yes.'''



#Solution In Python:-

n=int(input())
temp=n
sum=0
while n!=0:
    digit=n%10
    sum=int((sum*10)+digit)
    n=int(n/10)

if sum==temp:
    print("yes")
else:
    print("no")
