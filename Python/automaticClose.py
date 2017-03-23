import os
time = input("입력한 시간(초)뒤에 컴퓨터가 종료됩니다. : ")

os.system("shutdown -s -t {}".format(int(time)))
