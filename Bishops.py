import sys
numbers=[]
for n in sys.stdin:
     numbers.append(int(n))
for i in numbers:
    if i==1:
        print "1"
    else:
        print str(2*(i-1))
