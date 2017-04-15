class Calculator:
	def __init__(self):
		self.result = 0

	def adder(self, num):
		self.result += num
		return self.result

	def subtracter(self, num):
		self.result = self.result - num
		return self.result

cal1 = Calculator()
cal2 = Calculator()

# print(cal1.adder(3))
# print(cal2.adder(5))
cal1.adder(3)
cal2.adder(5)

cal1.subtracter(2)
cal2.subtracter(4)

print(cal1.result)
print(cal2.result)
