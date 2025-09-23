# a = int(input())

# while a != 0:
#     x = 0
#     b = a
#     for i in range(a):
#         x += 1
#         b -= 1
#         print("_" * b + "+" * x)
#     a = int(input())

# while True:
#     try:
#         y = int(input())
#         if y%4==0 and y%100!=0 or y%400==0:
#             print('閏年')
#         else:
#             print('平年')
#     except:
#         break

# day=31,28,31,30,31,30,31,31,30,31,30,31

# def count_Days(y,m,d):
#     cd=365*(y-1)+(y-1)//4-(y-1)//100+(y-1)//400
#     for i in range(m-1):
#         cd+=day[i]
#     if m==2:
#         if(y%4==0 and y%100!=0) or(y%400==0):
#             cd+=1
#     cd+=d
#     return cd

# while True:
#     try:
#         y1,m1,d1=input().split()
#         y1,m1,d1=int(y1),int(m1),int(d1)
#         y2,m2,d2=input().split()
#         y2,m2,d2=int(y2),int(m2),int(d2)
#         print(abs(count_Days(y1,m1,d1)-count_Days(y2,m2,d2)))
#     except:
#         break

# while True:
#     try:
#         n=int(input())
#         scores=[]
#         avg=int(0)
#         for _ in range(n):
#             score=int(input())
#             scores.append(score)
#         avg=sum(scores)/n
#         if avg>59:
#             print("yes")
#         else:
#             print("no")
#     except:
#         break

while True:
    try:
        nums=list(map(int,input().split()))
        if not nums:
            break
        n = nums[0]       
        scores = nums[1:]
        if len(scores) != n:
            print("資料數量錯誤")
            continue
        avg = sum(scores) / n
        if avg > 59:
            print("yes")
        else:
            print("no")
    except:
        break