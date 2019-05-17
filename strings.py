str = 'X-DSPAM-Confidence:    0.8475'
f=str.find(':')
res=str[f+2:]
final=float(res)
print(final)