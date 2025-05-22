



N , Q = map(int, input().split(' '))
A = list(map(int, input().split(' ')))

sum = [A[0]]
for _ in range(1, N ): 
    sum.append(A[_] + sum[_ - 1])

for _ in range( Q ):
    L , R = map(int, input().split(' '))
    if ( L == 1 ):
        print( sum[R - 1])
    else:
        print( sum[R - 1] - sum[L - 2])
