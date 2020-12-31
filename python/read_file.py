# -*- coding: UTF-8 -*-

keyword = format(input("Enter term: ")).lower()
# keyword = input('Please Enter the keyword(s): ').lower()
file = open("udp_send_data.py", encoding='utf-8')
match_list = []
for line in file:
    if keyword in line.lower():
        match_list.append(line)
        # print(line)
print(match_list)
file.close()
