exp=input("Enter the expression:")
ke=''
for i in range(len(exp)):
    if(exp[len(exp)-i-1]==')'):
        ke+='('
    elif(exp[len(exp)-i-1]=='('):
        ke+=")"
    else:
        ke+=exp[len(exp)-i-1]


exp=ke
s=[]
k=[]
exp="("+exp+")"
for i in range(1000):
    s.append(0)
    k.append(0)

top=-1
top2=-1
def isoperand(ch):
    if(ch=="+" or ch=="-" or ch=="*" or ch=="/" or ch=="^" or ch=="%" or ch=='(' or ch==')' ):
        return 0
    else:
        return 1
def precidence(ch):
    if(ch=='+' or ch=='-'):
        return 1
    if(ch=='*' or ch=='/'):
        return 2
    if(ch=='^'):
        return 3
    return -1

for i in range(len(exp)):
    if(isoperand(exp[i])):
        top+=1
        s[top]=exp[i]
    elif(exp[i]=='('):
        top2+=1
        k[top2]=exp[i]
    elif(exp[i]==')'):
        while(k[top2]!='('):
            top+=1
            s[top]=k[top2]
            top2-=1
        top2-=1
    else:
        while(precidence(exp[i])<=precidence(k[top2])):
            top+=1
            s[top]=k[top2]
            top2-=1
        top2+=1
        k[top2]=exp[i]
fiexp=''
for i in range(top+1):
    fiexp+=s[i]

ke=''
for i in range(len(fiexp)):
    ke+=fiexp[len(fiexp)-i-1]
print(ke)
