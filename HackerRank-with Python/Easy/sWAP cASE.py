def swap_case(s):
    sm=list(map(str,s))
    for i in range(len(sm)):
        if(sm[i]>='A'and sm[i]<='Z'):
            sm[i]=sm[i].lower()
        elif(sm[i]>='a'and sm[i]<='z'):
            sm[i]=sm[i].upper()
        s= ''.join(sm)
    return s

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)

"""You are given a string and your task is to swap cases. In other words, convert all lowercase letters to uppercase letters and vice versa.

For Example:

Www.HackerRank.com → wWW.hACKERrANK.COM
Pythonist 2 → pYTHONIST 2  """