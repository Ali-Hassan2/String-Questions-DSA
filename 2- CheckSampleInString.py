def check_sample(txt,sample):

    txt_size = len(txt)
    sample_size = len(sample)

    for i in range(txt_size - sample_size + 1):
        j = 0
        while j < sample_size and txt[i+j] == sample[j]:
            j += 1
        
        if j == sample_size:
            return i

    return -1

txt = "GeeksForGeeks"
sample = "For"

print(check_sample(txt,sample))


