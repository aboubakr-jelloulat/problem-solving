



n , q = map(int,input().split(' ')) 

occurrence : dict = {}

for _ in range(q) : 
    z , x = map(int,input().split(' ')) 
    if z == 1:
        if x in occurrence.keys():
            occurrence[x] = occurrence.get(x) + 1
        else : 
            occurrence[x] = 1
    else :
        if x in occurrence.keys():
            print(occurrence[x])
        else :
            print(0)