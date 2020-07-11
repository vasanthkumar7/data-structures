exp=input("Enter the postfix expression:")
def isoperand(ch):
    if(ch=='+' or ch=='-' or ch=='*' or ch=='^' or ch=='/' or ch=='%'):
        return 0
    else:
        return 1
s=[]
for i in range(1000):
    s.append(0)
    
top=-1
for i in range(len(exp)):
    if(isoperand(exp[i])):
        top+=1
        s[top]=exp[i]
    else:
        k='('
        k+=s[top]
        top-=1
        k+=exp[i]
        k+=s[top]
        top-=1
        k+=')'
        top+=1
        s[top]=k

ke=''
ne=s[0]
for i in range(len(s[0])):
    if(ne[len(s[0])-i-1]==")"):
        ke+="("
    elif(ne[len(s[0])-i-1]=="("):
        ke+=")"
    else:
        ke+=ne[len(s[0])-i-1]

print(ke)
        
        
        
