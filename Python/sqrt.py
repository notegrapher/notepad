def nextSqrt(n):
    sqrt = n ** (0.5)

    if sqrt % 1 == 0:
        return (sqrt + 1) ** 2
    return 'NO'

print(nextSqrt(3))
print(nextSqrt(4))
