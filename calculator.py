#author -@Yadukrishna
def add(a, b):
    return a + b

def main():
    print(" Calculator ")
    try:
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        result = add(num1, num2)
        print(f"The result of {num1} + {num2} is: {result}")
    except ValueError:
        print("Invalid input. Please enter numeric values.")

if __name__ == "__main__":
    main()

print("hello World")