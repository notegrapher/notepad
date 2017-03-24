def fibonacci(n):
	if(n < 3):
		return 1
	else:
		return fibonacci(n-1) + fibonacci(n-2)

print("fibonacci calculator")
number = input("input the number : ")
print(fibonacci(number))
