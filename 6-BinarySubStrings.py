# Given a binary string S. The task is to count the number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

# Example 1:

# Input:
# N = 4
# S = 1111
# Output: 6
# Explanation: There are 6 substrings from
# the given string. They are 11, 11, 11,
# 111, 111, 1111.


def binary(s:str, size:int) -> int:

    count = 0

    for i in range(size):
        if s[i] == '1':
            for j in range(i+1,size):
                if s[j] == '1':
                    count += 1
    return count

str = "1111"
n = 4

result = binary(str,n)
print(result)