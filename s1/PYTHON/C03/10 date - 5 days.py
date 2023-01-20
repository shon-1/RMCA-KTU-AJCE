import datetime
from datetime import date,timedelta
now=datetime.datetime.now()
print("current date and time : ")
print(now.strftime("%Y-%m-%d %H:%M:%S"))
dt= date .today() - timedelta(5)
print('5 days before = ',dt)