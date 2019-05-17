score = input("Enter Score: ")
s = float(score)
if (s>=1) :
    print("ERROR ENTER SCORE PROPERLY")
    print("BETWEEN 0 & 1")
if (1>s>=0.9):
    print("A")
elif(0.9>s>=0.8):
    print("B")
elif(.8>s>=0.7):
    print("C")
elif(.7>s>=.6):
    print("D")
elif(s<0.6):
    print("F")