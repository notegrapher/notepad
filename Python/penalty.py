import random

values = [ ]
size = input("Please input the number of people : ")

penaltyIndex = random.randint(0, size-1)

for i in range(0, size):
	values.insert(i, 0)
	if (i == penaltyIndex):
		values.insert(i, 1)
	
for i in range(0, size):
	print("The result is values[{}] = {}".format(i, values[i]))	
