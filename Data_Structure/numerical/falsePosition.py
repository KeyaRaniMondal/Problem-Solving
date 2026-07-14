def f(x):

    return x**3-x-2

def falseposition(a,b,f):
     
    if f(a)*f(b)>0:
        print("try another values")
        return None
    c=a
    while abs(f(c)-0)>0.001:
        c=(a*f(b)-b*f(a))/(f(b)-f(a))
        if f(c)==0:
            return c
        if f(a)*f(c)>0:
            a=c
        else:
            b=c
    return c
z=falseposition(1,2,f)
print(z)