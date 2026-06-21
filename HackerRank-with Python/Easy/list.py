"""Consider a list (list = []). You can perform the following commands:
insert i e: Insert integer  at position .
print: Print the list.
remove e: Delete the first occurrence of integer .
append e: Insert integer  at the end of the list.
sort: Sort the list.
pop: Pop the last element from the list.
reverse: Reverse the list.
Initialize your list and read in the value of  followed by  lines of commands where each command 
will be of the  types listed above. Iterate through each command in order and perform the corresponding operation 
on your list."""
n = int(input())
l = []
for i in range(n):
    command = input().split()
    if command[0] == 'insert':
        l.insert(int(command[1]), int(command[2]))
    elif command[0] == 'print':
        print(l)
    elif command[0] == 'remove':
        l.remove(int(command[1]))
    elif command[0] == 'append':
        l.append(int(command[1]))
    elif command[0] == 'sort':
        l.sort()
    elif command[0] == 'pop':
        l.pop()
    elif command[0] == 'reverse':
        l.reverse() 