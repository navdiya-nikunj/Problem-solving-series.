'''Problem 3) That's Odd

Task:-
You want to take a list of the numbers and find the sum of all of the even numbers in the list.Ignore any odd numbers.
Find the sum of all even integer in a list of a numbers.

Input Format:-
The First input denotes the length of the list(N). The next lines contain the list elements as integers (one integer in one line).

Output Format:-
An integer that represents the sum of only even numbers.

Sample Input :-
5
4
8
7
6
3

Sample Output :-
18

Explanation :-
4+8+6=18'''


#Solution In Python:-

n=int(input())
t=0
for i in range(n):
    b=int(input())
    if b%2==0:
        t+=b
print(t)
