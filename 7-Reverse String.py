# reverse the string

def reverse(s:str) -> str:
 
# in python strings are immutable 
# we have to change the string into list

    string_list = list(s)
    start = 0
    end = len(string_list) - 1

    while start < end:
        # in python we swap the values as

        string_list[start],string_list[end] = string_list[end],string_list[start]

        start += 1
        end -= 1

    # converting back the list into string
    return "".join(string_list)

str = "Ali"
str_result = reverse(str)
print(str_result)

