#만 나이 계산기
import datetime

now = datetime.datetime.now()
nowTuple = now.timetuple()
# test
# print(nowTuple.tm_year)

birthYear = input("태어난 년도를 입력하세요 : ")
print("당신의 만 나이는 {}입니다.".format(int(nowTuple.tm_year)-int(birthYear)))
