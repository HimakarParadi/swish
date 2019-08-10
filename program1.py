x,p=map(int,input().split(" "))
s=0
while(x!=0):
  s+=x
  x=(x-((x*p)//100))
print(s)

  
  
