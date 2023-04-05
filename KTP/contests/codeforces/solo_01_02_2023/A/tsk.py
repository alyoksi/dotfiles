t = int(input())
sum = 0
cnt = 0
for _ in range(t):
    s, num = input().split()
    num = int(num)
    if(s == '+'):
        sum += num
        cnt += 1
        print(sum / cnt)
    else:
        sum -= num
        cnt -= 1
        if(cnt == 0):
            print(0)
        else:
            print(sum / cnt)
