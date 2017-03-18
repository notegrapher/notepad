#range를 이용하면 sum을 쉽게 구할 수 있다
sum = 0

for i in range(1, 11):
        sum = sum + i

print(sum)

#for를 이용한 구구단
for x in range(2, 10):
    for y in range(1, 10):
        print(x, "*", y, "=", x * y)
