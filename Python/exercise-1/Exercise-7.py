def fizzBuzz(num):
    if num % 3 == 0 and num % 5 == 0:
        return "Fizz-buzz"
    elif num % 3 == 0:
        return "Fizz"
    elif num % 5 == 0:
        return "Buzz"
    elif num % 3 == 0 and num % 5 == 0:
        return "Fizz-buzz"
    else:
        return " not a Fizz-buzz"


n = int(input("number : "))
print(fizzBuzz(n))
