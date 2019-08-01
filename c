		
m[][]=[[ 1,  2,  3,  4, 5],
			[16, 17, 18, 19, 6],
			[15, 24, 25, 20, 7],
			[14, 23, 22, 21, 8],
			[13, 12, 11, 10, 9]]
		
l=0,t=0,r=m[0].length()-1,b=m.length()-1;
while(true):
	if(l>r):
	    break
	for i in range(l,r+1):
		print(m[t][i])
	t+=1
	if(t>b):
		break
    for i in range(r,b+1):
		print(m[i][r])
    r+=1
    if(l>r):
        break
    for i in range(b,r+1,-1):
        print(m[b][i])
    b+=1    
    if(t>b):
        break
    for i in range(b,l+1,-1):
        print(m[i][l])
    l+=1
    
