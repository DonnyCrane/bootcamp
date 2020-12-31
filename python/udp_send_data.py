# -*- coding: UTF-8 -*-
# 可以import sys  然后用if语句调取sys.exit(0)中途退出程序
import socket  # 导入socket套接字模块

'''
网络协议分为udp与tcp两种，udp较为简单
程序基本思路流程分三个步骤：1.创建/打开/输入值 >> 2.操作/读写 >> 3.关闭/结束/返回值/输出值
def函数前后空两行
'''


# def send_udp_msg(dest_ip, dest_port, msg_content):  # 参数名尽量使用描述语，与下面函数名对应，即实参
def send_udp_msg():
    # 1.创建一个udp类型的套接字
    # 搭建udp网络固定写法：AF_INET = ipv4; SOCK_DGRAM = udp
    udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    # 2.使用sendto方法发送套接字数据
    # 2.1 输入并绑定发送方与接收方ip地址及port端口号
    # udp_socket.sendto(b"发送数据内容", ("目标IP地址", 目标端口port))。
    # 其中，“发送数据内容”数据类型须为字节b/bytes，“目标IP地址”须为字符串，目标端口port须为整型
    # 发送中文数据内容，必须转换编码：bytes("中文内容", encoding='utf-8')
    # dest_ip = "192.168.1.35"
    # dest_port = 8080
    # msg_content = []
    # msg_content = bytes("你好！", encoding='utf-8')
    # msg_content = b"hello"
    # 使用sendto方法发送中文内容数据
    # 对字符串等数据使用encode方法，如string.encode()，将之编码为字节bytes
    count = 0
    dest_ip = input("请输入接收方ip地址：")
    dest_port = int(input("请输入接收方端口："))
    # 绑定本地发送ip地址与port端口号
    local_ip = input("请输入发送方IP地址：")
    local_port = int(input("请输入发送方发送端口号："))
    udp_socket.bind((local_ip, local_port))
    # 3.循环发送内容信息
    # while循环，只要不输入quit或exit，便一直可以输入并发送数据
    while True:
        msg_content = input("请输入要发送的数据：")
        # print(dest_ip, dest_port, msg_content)
        # print('--------Input---------')
        # print(f'数据接收地址：\n{dest_ip}:{dest_port}\n\n发送数据内容：\n{msg_content}')
        udp_socket.sendto(msg_content.encode("utf-8"), (dest_ip, dest_port))
        # if msg_content != 'quit' or msg_content != 'exit':
        count += 1
        print('--------Output--------')
        print('数据已发送。')
        if msg_content.lower() == 'quit' or msg_content.lower() == 'exit':
            break
    # 4.发送完毕，统计发送次数，关闭套接字，退出程序
    print(f'退出程序，总发送次数为：', count)
    # 关闭套接字
    udp_socket.close()
    exit(0)


if __name__ == "__main__":
    send_udp_msg()
