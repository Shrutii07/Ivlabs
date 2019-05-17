def computepay(h,r):
    if(h<40):
        c=h*r
    if (h>40):
    	c=(1.5*r*(h-40))+40*r
    return c

hrs = input("Enter Hours:")
h = float(hrs)
rate = input("Enter rate per hr:")
r = float(rate)
p = computepay(h,r)
print(p)