#author -@Yadukrishna
def add(a, b):
    return a + b

#author -@Lohithvarma
def subtract(a, b):
    return a-b

#author -@Maurya
def log(a):
    if a <= 0:
        raise ValueError("Logarithm is not defined for non-positive numbers.")
    result = 0
    while a > 1:
        a /= 2
        result += 1
    return result

#author -@praneeth
def multiply(a,b):
    return a*b

def main():
    print(" Calculator ")
    try:
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        result = add(num1, num2)
        print(f"The result of {num1} + {num2} is: {result}")
        print(f"The result of {num1} - {num2} is: {subtract(num1, num2)}")
        print(f"The result of log({num1}) is: {log(num1)}")
        print(f"The result of {num1} * {num2} is: {multiply(num1, num2)}")
    except ValueError:
        print("Invalid input. Please enter numeric values.")

if __name__ == "__main__":
    main()

print("hello World")