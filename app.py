# print('Liyixin')
# print('o----')
# print(' ||||')
# print('*' * 10)
####################################
# full_name = "John Simith"
# age = 20
# is_new = True
####################################

# name = input('What is your name? ')
# color = input('What is your favourite color? ')
# print(name + ' likes ' + color)
####################################

# birth_year = input('Birth year: ')
# print(type(birth_year))
# age = 2020 - int(birth_year)
# print(type(age))
# print(age)
####################################

# course ='''
# Hi John,
#
# Thank you,
# '''
# print(course)
#
# course = "Python's Course for Beginners"
# another = course[:] #把course copy 給 another
# print(another)
# name = 'Jennifer'
# print(name[1:-1])  #ennife
############################################

# first = 'John'
# last = 'Smith'
# message = f'{first} [{last}] is a coder' #John [Smith] is a coder
# print(message)
############################################

# course = "Python's Course For Beginners"
# print(len(course))
# print(course)
# print(course.upper())
# print(course.lower())
# print(course.capitalize())
# print(course.title())
# print(course.find('P')) #0 如果返回-1則不存在
# print(course.replace("Beginners", 'Absolute Beginners'))
# print('Python' in course) #True
############################################

# + - * /(正常除） //(整除） %  **（pow）
# print(10 ** 3)  # 1000
# x = 10
# x += 3
# print(x)
############################################

# import math
#
# x = 2.9
# print(round(x))  # 3 四舍五入
# print(abs(-2.9))  # 2.9
# print(math.ceil(x))  # 3 返回上入整数
# print(math.floor(x))  # 2 返回下入整数 类似于c的math库

############################################
# is_hot = False
# is_cold = True
# if is_hot:
#     print("It's a hot day")
#     print("Drink plenty of water")
# elif is_cold:
#     print("It's a cold day")
#     print("Wear warm clothes")
# else:
#     print("It's a lovely day")
# print("Enjoy your day")
############################################

# has_high_income = True
# has_good_credit = True
# if has_good_credit and has_high_income:
#     print('Eligible for loan')
# # and :both(&&)
# # or: at least one(||)
# # not: (!)
# 逻辑运算符
############################################

# temperature = 30
# if temperature > 30:
#     print("It's a hot day")
# else:
#     print("It's not a hot day")
# > >= < <= == !=
############################################

# name = "J"
# if len(name) < 3:
#     print('Name must be at least 3 characters long')
# elif len(name) > 50:
#     print('Name can be a maximum of 50 characters')
# else:
#     print('Name looks good!')
############################################
# if 语句练习
# val = input('Weight: ')
# unit = input('(L)bs or (K)g:')
#
# if unit.upper() == 'L':
#     print(f'You are {float(val)*0.45} kilos')
# elif unit.upper() == "K":
#     print(f'You are {float(val)/0.45} lbs')
############################################

# while 循环
# guess_count = 1
# while guess_count <= 5:
#     print('*' * guess_count)
#     guess_count += 1
# print("Done")

# secret_number = 9
# guess_count = 0
# guess_limit = 3
# while guess_count < guess_limit:
#     guess = int(input("Guess: "))
#     guess_count += 1
#     if guess == secret_number:
#         print('You Win')
#         break
# else:  # 如果没有通过beak跳出循环，则触发else调节
#     print('Sorry, you failed!')
############################################

# while 和 if 的练习
# command = ''
# started = False
# while True:
#     command = input('>').lower()
#     if command == 'start':
#         if not started:
#             print("Car started...Ready to go!")
#             started = True
#         else:
#             print('Car is already started!')
#     elif command == 'stop':
#         if not started:
#             print('Car is already stopped!')
#         else:
#             started = False
#             print('Car stopped.')
#     elif command == 'help':
#         print('''
# start - to start the car
# stop - to stop the car
# quit - to exit
#                 ''')
#     elif command == 'quit':
#         break
#     else:
#         print("Sorry, I don't understand that...")

############################################

# for loop
# for item in ['Python', 'Liyixin', 3]:
#     print(item)
# for item in range(10):
#     print(item)
# range: 范围内顺序的数字，range(stop), range(start,stop), range(start,stop,step)
# excise
# prices = [10, 20, 30]
# for price in prices:
#     price += price
# print(price)

# 嵌套循环
# for x in range(4):
#     for y in range(3):
#         print(f'({x}, {y})')
# exercise
# numbers = [5, 2, 5, 2, 2]
# for i in numbers:
#     print('X' * i)    # 需要换种方式实现
# # 自己的解法
# for x_count in numbers:
#     for i in range(x_count):
#         print('X', sep='', end='')
#     print(end='\n')
# # mosh的解法
# for x_count in numbers:
#     output = ''
#     for count in range(x_count):
#         output += 'X'
#     print(output)

############################################
# list
# names = ['John', 'Bob', 'Mosh', 'Sarah', 'Mary']
# names[0] = 'Joh'  # 修改列表中的元素
# print(names)
# print(names[-2])
# print(names[2:])

# exercise: Write a program to find the largest number in a list
# numbers = [1, 3, 2, 4, 7, 6, 8, 5 ]
# max_num = numbers[0]
# for num in numbers:
#     if max_num < num:
#         max_num = num
# print(f'The largest number in list {numbers} is {max_num}')
# print(max(numbers))
############################################
# 2D list
# matrix = [
#     [1, 2, 3],
#     [4, 5, 6],
#     [7, 8, 9]
# ]
# print(matrix)
# matrix[0][1] = 20
# print(matrix[0][1])
# for row in matrix:
#     for item in row:
#         print(item)
############################################
# list method
# insert , append , remove , clear and so on...
# numbers = [1, 2, 3, 4, 5, 10, 3]
# print(numbers.index(3))  # 2
# if 50 in numbers:
#     print(numbers.index(50))    # 如果不加判断，会返回ValueError
# numbers.sort()
# numbers.reverse()   # 翻转
# print(numbers)
# numbers2 = numbers.copy()

# exercise: Write a program to remove the duplicates in a list.
# numbers = [1, 2, 2, 3, 4, 5, 4, 10, 3]
# uniques = []
# for num in numbers:
#     if num not in uniques:
#         uniques.append(num)
# print(uniques)
############################################
# tuples
# tuples 是不可变的
# numbers = (1, 2, 3)
# numbers[0] = 10  # TypeError: 'tuple' object does not support item assignment
############################################

# Unpacking 解压缩的特性
# coordinates = (1, 2, 3)
# x, y, z = coordinates
# print(x, y, z)
# coordinates = [1, 2, 3]
# print(x, y, z)
############################################

# Dictionaries(字典) ，是可变的,不允许键重复
#
# customer = {
#     "name": "Li yixin",
#     'age': 30,
#     'is_verified': True
# }
# if "Name" in customer:      # False
#     print(customer["Name"])  # 不会打印
# # or
# print(customer.get("Name"))  # 打印None
# print(customer.get("birthday", "Jan 1 1980"))  # 返回默认值,不会加入
# customer["birthday"] = "Jan 1 1980"
# print(customer)

# exercise: 将输入的数字翻译成文字
# Ex:
# Phone: 1234
# One Two Three Four
# input_numbers = input("Phone: ")
# numbers_dictionary = {
#     '1': 'One',
#     '2': 'Two',
#     '3': 'Three',
#     '4': 'Four',
#     '5': 'Fiv e',
#     '6': 'Six',
#     '7': 'Seven',
#     '8': 'Eight',
#     '9': 'Nine',
# }
# output = ''
# for num in input_numbers:
#     output += numbers_dictionary.get(num, "!") + ' '
# print(output)
############################################

# Emoji converter :)
# message = input('>')
# words = message.split(' ')
# emojis = {
#     ":)": "😀",
#     ":(": "☹"
# }
# output = ''
# for word in words:
#     output += emojis.get(word, word) + " "
# print(output)
############################################
# Functions,Parameters，Return Statement


# def greet_user(first_name="Lee", last_name="yixin"):
#     print(f'Hi {first_name} {last_name}!')
#     print('Welcome aboard!')
#
#
# print('Start')
# greet_user('Li', 'yixin')
# greet_user('Li', last_name='yixin')  # 关键词参数应该写在位置参数之后
# greet_user()
# print('Finish')


# def square(number):
#     return number * number
#
#
# print(square(2))


# def emoji_converter(message):
#     words = message.split(' ')
#     emojis = {
#         ":)": "😀",
#         ":(": "☹"
#     }
#     output = ''
#     for word in words:
#         output += emojis.get(word, word) + " "
#     return output
#
#
# message = input('>')
# print(emoji_converter(message))
############################################

# exception
# try:
#     age = int(input('Age: '))
#     income = 20000
#     risk = income / age
#     print(age)
# except ZeroDivisionError:
#     print('Age cannot be 0')
# except ValueError:
#     print('Invalid value')
############################################

# comments
# 注释需要写明 how and why ，或者做一些提示， 不需要解释 what

# classes, Constructors
# 成员可以不在类里声明，在实例里直接定义。
# class Point:
#     def __init__(self, x, y):
#         self.x = x
#         self.y = y
#
#     def move(self):
#         print('move')
#
#     def draw(self):
#         print('draw')
#
#
# point1 = Point(1, 2)
# point1.draw()
# print(point1.x, point1.y)

# # exercise
# class Person:
#     def __init__(self, name):
#         self.name = name
#
#     def talk(self):
#         print(f'My name is {self.name}')
#
#
# p1 = Person('liyixin')
# p1.talk()
############################################

# inheritance

# class Mammal:
#     def walk(self):
#         print("walk")
#
#
# class Dog(Mammal):
#     pass
#
#
# class Cat(Mammal):
#     pass
#
#
# dog1 = Dog()
# dog1.walk()
############################################

# modules
# import converters as conv
# from converters import kg_to_lbs
#
# print(conv.kg_to_lbs(70))
# # or
# print(kg_to_lbs(70))
# numbers = [10, 3, 6, 2]
# max(numbers)
############################################

# packages
# 方法1
# import ecommerce.shipping
# ecommerce.shipping.calc_shipping()
# 方法2
# from ecommerce.shipping import calc_shipping
# calc_shipping()
# 方法3
# from ecommerce import shipping
# shipping.calc_shipping()
############################################
# random module
# import random
# for i in range(3):
#     print(random.randint(10, 20))
# members = ["Mary", "John", "Liyixin", "小李"]
# leader = random.choice(members)
# print(leader)

# exercise 定义一个Dice 类，摇骰子游戏，每次返回 (a,b) 两个随机值（用tuple),
# 返回两个值时不需要加小括号，默认为tuple
# import random
#
#
# class Dice:
#     def roll(self):
#         return random.randint(1, 6), random.randint(1, 6)
#
#
# dice1 = Dice()
# print(dice1.roll())


############################################
# pathlib
# from pathlib import Path
# # Absolute path:  c:\Program Files\Microsoft
# # Relative path:
#
# # path = Path("ecommerce")
# # print(path.exists())
# path = Path()
# for file in path.glob('*'):  # 获取所有文件
#     print(file)
############################################

# pypi and pip(Huh?)
# eg:pip install openpyxl

# Excel Spreadsheets


############################################


