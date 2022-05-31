'''Problem 5) Sum of digit of odd index

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
sum of 5 + 3 + 1 = 9'''

#Solution In Python:-

sum=0
n=int(input())
while n>0:
    k=n%10
    n=int(n/100)
    sum=sum+k
print(sum)
