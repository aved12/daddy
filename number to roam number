num=4998
one=["", "I", "II", "111",  "IV", "V", "VI", "VII",  "VIII", "IX"]
tens=["", "X", "XX", "XXX", "XL","L", "LX", "LXX", "LXXX", "XC"]
hund=["","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"]
thou=["","M","MM","MMM","MMMM"]
r=num%10
t=num//10
g=t//10
f=t%10
c=g//10
q=g%10
if(num//10==0):
    ans=one[num]
    print(ans)
if(t!=0 and g==0 and c==0):
    ans=tens[t]+one[r]
    print(ans)
if(g!=0 and c==0):
    ans=hund[g]+tens[f]+one[r]
    print(ans)
if(c!=0):
    ans=thou[c]+hund[q]+tens[f]+one[r]
    print(ans)
  
  #MMMMCMXCVIII
