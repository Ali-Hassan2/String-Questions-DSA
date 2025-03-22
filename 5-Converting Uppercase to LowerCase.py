# ALIHASSAN -> alihassan

def tolower(s:str) -> str:
    # strings are immutable in python
    result = ""

    for char in s:
        if 'A' <= char <= 'Z':
            result += chr(ord(char) + 32)  # converting Uppercase to lower
        else:
            result += char

    return result

s = "ALIHASSAN"
print(tolower(s))