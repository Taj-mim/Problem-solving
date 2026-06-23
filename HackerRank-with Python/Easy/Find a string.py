def count_substring(string, sub_string):
    total=0
 #s=abcdccdc,sub_string=cdc,len(s)=8,len(sub_string)=3,
 #  for checking last two characters of string it cann't check the last 1 character 
 # thats why we don't need to check the last two characters of string
    for i in range((len(string)-len(sub_string))+1):
        if(string[i:i+len(sub_string)])==sub_string:
            total+=1
       
    return total

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)