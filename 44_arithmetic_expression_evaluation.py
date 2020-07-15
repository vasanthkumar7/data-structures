exp=input("enter the expression:")
s=[]
k=[]
exp="("+exp+")"



def isoperand(ch):
    if(ch=="+" or ch=="-" or ch=="*" or ch=="/" or ch=="^" or ch=="%" or ch=='(' or ch==')' or ch=='%'):
        return 0
    else:
        return 1

pos=[]
top=-1
tot=0

posp=[]
fi=""
i=0
idupudusu=0
tot=0
alphabets=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
while(i<len(exp)):
    if(isoperand(exp[i])==0):
        fi+=exp[i]
        i=i+1
    else:
        while(isoperand(exp[i])!=0):
            tot=tot*10+int(exp[i])
            i+=1
        fi+=alphabets[idupudusu]
        idupudusu+=1
        pos.append(tot)
    tot=0 





exp=fi










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


def whatoperand(ch):
    if(ch=='+'):
        return 1
    if(ch=='-'):
        return 2
    if(ch=='*'):
        return 3
    if(ch=='/'):
        return 4
    if(ch=='^'):
        return 5
    if(ch=='%'):
        return 6


    
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
fiexp=[]
for i in range(top+1):
    fiexp.append(s[i])

evalu=[]
for i in range(100):
    evalu.append(0)
top=-1
for i in range(len(fiexp)):
    if(isoperand(fiexp[i])):
        top=top+1
        evalu[top]=pos[alphabets.index(fiexp[i])]
    else:
        a=int(evalu[top])
        top=top-1
        b=int(evalu[top])
        top=top-1
        if(fiexp[i]=='+'):
            top+=1
            evalu[top]=a+b
        if(fiexp[i]=='-'):
            top+=1
            evalu[top]=b-a
        if(fiexp[i]=='*'):
            top+=1
            evalu[top]=a*b
        if(fiexp[i]=='/'):
            top+=1
            evalu[top]=b/a
            
        if(fiexp[i]=='^'):
            top+=1
            evalu[top]=b**a
        if(fiexp[i]=='%'):
            top+=1
            evalu[top]=a%b
print(evalu[0])
            
