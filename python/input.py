name = input("Please enter your name: ")
year = int(input("Which year were you born: "))
is_new = True
favourite_color = input("Please enter your favourity color:　")
age = 2020 - year + 1
# print(name +", " + age,"years old, loves",favourite_color)
print(f"{name}, {age} years old, loves {favourite_color} color.")

# 提示用户输入q字符以退出程序
Q = input('If you want to quit the program, please enter quit or q: ')
# 如果用户输入'quit'或'Quit'，则取第一个字母，即index索引Q[0],并字母最小化
if Q[0].lower() == 'q':
    exit(0)
