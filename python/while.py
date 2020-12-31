count = 0
number = 50
while number > 0:
    if number % 2 == 0:
        print(number)
        count += 1
    number -= 1
print(f"We have {count} even numbers.")
