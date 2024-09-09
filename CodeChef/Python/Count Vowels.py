# cook your dish here
n = input()
v = 'aeiou'
count = 0
i = 0
while i < len(n):
    if n[i] in v:
        count = count + 1
    i = i + 1
print(count)