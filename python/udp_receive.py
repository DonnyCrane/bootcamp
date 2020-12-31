# -*- coding: UTF-8 -*-
import socket


def udp_recv():
    # 1.创建套接字
    udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    # 2.绑定本地接受端口，如果不绑定，则系统会随机分配
    local_port = int(input('请输入本地接受端口号：'))  # 输入本地信息接受端口号
    # 接受信息类型为元组，包含ip地址字符串与端口号整型数字，ip一般不用写，表示本机的任何一个ip
    local_addr = ('', local_port)
    udp_socket.bind(local_addr)
    # 3.等待接受对方发送的数据
    while True:
        recv_data = udp_socket.recvfrom(1024)  # 1024表示本次接受的最大字节数
        recv_msg = recv_data[0]  # 接受信息内容
        send_addr = recv_data[1]  # 接受信息来源，即发送方ip地址及端口号
        # 4.显示接受到的数据
        print('%s:%s' % (str(send_addr), recv_msg.decode('gbk')))
        if recv_msg.lower() == "quit" or recv_msg.lower() == 'exit':
            break
    # 5.关闭套接字
    udp_socket.close()


if __name__ == '__main__':
    udp_recv()
