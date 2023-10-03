s1="abcdef"
s2="cefz"
res=""
for i in s1:
    if i not in s2:
        res+=i
        
print(res)
# output:abd
