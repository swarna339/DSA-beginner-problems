s = "camera bag basket animal rabbit naturalpower"
word=s.split()
maxcount=0
c=0
s=[]
for i in word:
    c= len(i)
    if c>maxcount:
        maxcount=c 
        s.insert(0,i)
        
print(s[0])
# output:Naturalpower
