exp=input("enter the prefix expression:")
s=[]
for i in range(100):
    s.append(0)
top=-1
def isoperand(ch):
    if(ch=='+' or ch=='*' or ch=='-' or ch=='^' or ch=='/' or ch=='%'):
        return 0
    else:
        return 1
        

for i in range(len(exp)):
    if(isoperand(exp[len(exp)-i-1])):
        top+=1
        s[top]=exp[len(exp)-i-1]
    else:
        ne='('
        ne+=s[top]
        top-=1
        ne+=exp[len(exp)-1-i]
        ne+=s[top]
        top-=1
        ne+=')'
        top+=1
        s[top]=ne

print(s[0])
    
