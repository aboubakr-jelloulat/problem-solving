



n , q = map( int, input().split(' '))

arr = list( map( int, input().split(' ') ) )
difference_array = [0] * (len( arr ) + 1)

for _ in range(q):
    l , r , v = map( int, input().split(' '))
    difference_array[l - 1] += v
    difference_array[r] -= v

for i in range(1, n + 1):
    difference_array[i] += difference_array[i - 1]

for i in range( n ):
    arr[i] += difference_array[i]

for _ in range(n):
    print(arr[_], end=" ")
