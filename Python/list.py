numberList = [1, 2, 3, 4]
stringList = ['Study', 'is', 'hard', 'working']
sentence = ''
for number in numberList:
	print(number)

for string in stringList:
	# print(string)
	sentence += string
	sentence += " "

print(sentence)
