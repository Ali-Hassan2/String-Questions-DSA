'''
Given a non-empty sequence of characters s, return true if sequence is Binary, else return false.

Examples:

Input: s = "101"
Output: true
Explanation: Since string contains only '0' and '1', output is true.
Input: s = "75"
Output: false
Explanation: Since string contains digits other than '0' and '1', output is false.
'''

def isBinary(s):
    size = len(s)
    for i in range(size):
        if s[i] != '0' and s[i] != '1':
            return False
    
    return True

# main

s = "100100101011101"
s2 = "Abc"
print(isBinary(s))
print(isBinary(s2))