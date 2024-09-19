#author -@Yadukrishna
def add(a, b):
    return a + b

#author -@KaranRaaj
def sub(a, b):
    return a - b

#author -@Lohithvarma
def subtract(a, b):
    return a - b

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
def multiply(a, b):
    return a * b

def main():
    print(" Calculator ")
    try:
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        
        print(f"The result of adding {num1} + {num2} is: {add(num1, num2)}")
        print(f"The result of subtracting {num1} - {num2} is: {sub(num1, num2)}")  # Using KaranRaaj's function
        print(f"The result of subtracting {num1} - {num2} is: {subtract(num1, num2)}")  # Using Lohithvarma's function
        print(f"The result of log({num1}) is: {log(num1)}")
        print(f"The result of multiplying {num1} * {num2} is: {multiply(num1, num2)}")
    
    except ValueError as e:
        print(f"Error: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

if __name__ == "__main__":
    main()

print("Hello World")