import os
tttt="""
#include <base.hpp>

"""

yyyy=""""

int main(){
    main();
}
"""
files=input("file il to decompile? ")
pfiles=files
ill=files.find(".")
if ill>-1:
    pfiles=files[:ill]

f1=open(files,"r")
txts=f1.read()
f1.close()

list1=txts.split("\n")
txts=tttt
onon=False
counter=0
counter2=0
for n in list1:
    spacess=n.strip()!=""
    txts=txts+n+"\n"
    counter+=1
txts=txts+yyyy
f1=open(pfiles+".c","w")
f1.write(txts)
f1.close()