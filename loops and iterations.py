max = 0
min = 9999999
while True:
    num = input("Enter a no.")
    if(num == 'done'):
        break
    try:
        n = int(num)
    except:
        n = -1
    if(n>=0):
        if (n>max):
            max = n
        if (n<min):
            min = n
        continue
    if (n<0):
        print("Invalid input")
        continue
print("Maximum is",max)
print("Minimum is",min)