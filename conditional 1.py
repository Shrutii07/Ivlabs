hrs = input("Enter Hours:")
h = float(hrs)
rate = input("Enter rate per hr:")
r = float(rate)
if (h<=40) :
    pay = h*r
if (h>40):
    pay=(1.5*r*(h-40))+(40*r)
print(pay)