def f(x):
    return x**3-2*x-5
def f1(x):
    return 3*x**2-2

def newtonRaphson(f,f1,x):
     
    while abs(f(x)-0)>0.001:
        x=x-(f(x)/f1(x))
    return x
z=newtonRaphson(f,f1,3)
print(z)