# You are given two strings s1 and s2. Your task is to identify the characters that appear in either string but not in both (i.e., characters that are unique to one of the strings). Return the result as a sorted string.

# Examples:

# Input: s1 = "geeksforgeeks", s2 = "geeksquiz"
# Output: "fioqruz"
# Explanation: The characters 'f', 'i', 'o', 'q', 'r', 'u', and 'z' are present in either s1 or s2, but not in both.
# Input: s1 = "characters", s2 = "alphabets"
# Output: "bclpr"
# Explanation: The characters 'b', 'c', 'l', 'p', and 'r' are present in either s1 or s2, but not in both.



def Uncommon(s1:str,s2:str) -> str:  # this means this function will return a string vlue

    res = []
    set1 = set(s1)
    set2 = set(s2)

    for ch in set1:
        if ch not in set2:
            res.append(ch)
    for ch in set2:
        if ch not in set1:
            res.append(ch)
    size = len(res)
    for i in range(size - 1):
        for j in range(size - i - 1):
            if res[j] > res[j+1]:
                temp = res[j]
                res[j] = res[j+1]
                res[j+1] = temp

    return "".join(res)


