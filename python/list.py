# -*- encoding: UTF-8 -*-

'''
list = [expression for x in X [if condition] for y in Y [if condition] ... for n in N [if condition] ]按照从左至右的顺序，分别是外层循环到内层循环
'''

# 带有if语句
# 在 for 语句后面跟上一个 if 判断语句，用于过滤掉那些不满足条件的结果项
list1 = [1, 2, 3, 4, 5, 6]
list1 = [x for x in list1 if x % 2 != 0]  # 去除列表中所有的偶数项，保留奇数项
print(list1)

# 带有for语句
# 在复杂一点的列表推导式中，可以嵌套有多个 for 语句。按照从左至右的顺序，分别是外层循环到内层循环
list2 = [x + y for x in 'ab' for y in 'jk']
print(list2)

'''
既有if语句又有for嵌套
列表推导式可以带任意数量的嵌套 for 循环，并且每一个 for 循环后面都有可选的 if 语句
通用语法：
list = [expression for x in X [if condition]
            for y in Y [if condition]
            ...
            for n in N [if condition] ]
以上列表推导式等价于下面的一般 for 循环：
List = []
for x in range(5):
    if x % 2 == 0:
        for y in range(5):
            if y % 2 == 1:
                L.append((x, y))
'''
list3 = [(x, y) for x in range(5) if x %
         2 == 0 for y in range(5) if y % 2 == 1]
print(list3)

# 列表推导式生成矩阵
matrix1 = [[y for y in range(x, x+3)] for x in [1, 4, 7]]
# 以上表达式等效于：
# [y for y in [y(x), y(x+1), y(x+2), y(x+3)]]
# 进而等效于：
# [y for y in [y', y'', y''']]
# 因为最终输出的是表达式y, y=f(x), x只是y的参数
