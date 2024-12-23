Edit Distance (Levenshtein Distance)


You are given two strings s1 and s2. Find the minimum number of operations required to convert s1 to s2.

Permitted Operations:

Insert a character
Delete a character
Replace a character
Strings s1 and s2 are composed of only lowercase English characters.

Example
s1: "hello"
s2: "seldom"
Result: 3
Explanation:
hello → sello (replace h with s)
sello → seldo (replace l with d)
seldo → seldom (insert m at end)
Testing
Input Format
The first line contains an integer ‘T’ denoting the number of test cases.
For each test case, the input has two lines:

A string s1.
A string s2.
Output Format
For each test case, the output contains a line with one integer denoting the minimum number of operations required.

Sample Input
5
hello
seldom
workattech
workattech
abc
def
ab
ba
workat
word
Expected Output
3
0
3
2
3