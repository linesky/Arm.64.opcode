code=""
varss=["xxx","yyy","zzz","www","kkk","lll","mmm"]
varssw=["xxs","yys","zzs","wws","kks","lls","mms"]
last=0
ttrue=True
files=input("file data name? ")
diment=int(input("many dimentions max 6? "))
if diment>6:
    diment=6
try:
    f1=open(files,"r")
    code=f1.read()
    f1.close()
except:
    aa=0
if ttrue==ttrue:
    
    
    if ttrue==ttrue:

        s4=""
        s2=""
        s1=""
        s3=""
        m=0
        for c in range(diment):
            
            s2="    "*(c+1)
            s1=s2+"#"+str(c)+"\n"
            s4=s1+s2+"for "+varss[c]+" in "+varssw[c] + " :\n"
            code=code+s4    
            
        
        s2="    "*(diment+1)+"print("
        for c in range(diment):
            if c==0:
               s2=s2+varss[c]
            else:
               s2=s2+","+varss[c]
        s2=s2+")\n"
        code=code+s2
        print(code)
try:
    f1=open(files,"w")
    f1.write(code)
    f1.close()
except:
    print("error on write file")
            
            
        
         
    
