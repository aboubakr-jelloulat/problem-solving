


s1 = input()
s2 = input()

occurrence : dict = {}
cheek = False
for i in range(len(s1)):
    if s1[i] == ' ':
        continue
    elif s1[i] in occurrence.keys():
        occurrence[s1[i]] = occurrence.get(s1[i]) + 1
    else : 
        occurrence[s1[i]] = 1
for _ in range( len(s2) ):
    if s2[_] == ' ':
        continue
    elif s2[_] in occurrence.keys() and occurrence.get(s2[_]) > 0:
        occurrence[s2[_]] = occurrence.get(s2[_]) - 1
    else :
        print("NO")
        cheek = True
        break
if cheek == False:
    print("YES")
