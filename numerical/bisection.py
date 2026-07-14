def f(x):
    return x**3-2*x-5
def bisection(a,b,f):
    if f(a)*f(b)>0:
        print("try another values")
        return None
    c=a
    while abs(f(c)-0)>0.001:
        c=(a+b)/2
        if f(c)==0:
            return c
        if f(a)*f(c)>0:
            a=c
        else:
            b=c
    return c

bi=bisection(2,3,f)
print(bi)