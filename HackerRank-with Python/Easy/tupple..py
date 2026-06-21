"""Task:Given an integer n  and n space-separated integers as input,
 create a tuple t of those  integers. Then compute and print the result of hash(t)."""

n = int(input()) #no use of n but written here for the input structure
integer_list = map(int,input().split())
t=tuple(integer_list)
print(hash(t))
