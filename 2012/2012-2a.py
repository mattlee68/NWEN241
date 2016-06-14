import sys

try:
    arg1 = int(sys.argv[1])
    arg2 = int(sys.argv[2])
    if arg1 < 0:
        print('First argument is negative')
    elif arg2 < 0:
        print('Second argument is negative')
    else:
        print('%d, %d' % (arg1, arg2))
except ValueError:
    print('Values not integers')
