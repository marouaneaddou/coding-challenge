




t = int(input())
while True:
    n ,k = map(int, input().split(' '))
    element = list(map(int, input().split(' ')))
    copy_list = sorted(element)
    if copy_list == element or k > 1 :
        print("YES")
    else :
        print("NO")
    t -= 1
    if t == 0:
        break