def fibonacciSequence(n):
    f1=0
    f2=1
    print(f1,f2,end=" ")
    for i in range(2,n):
        fibo=f1+f2
        f1=f2
        f2=fibo
        print(fibo,end=" ")


n=int(input())
print(fibonacciSequence(n))