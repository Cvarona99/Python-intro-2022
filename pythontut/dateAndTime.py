from datetime import datetime
from datetime import date
import time


today = date.today()
clock = time.localtime()
time = time.strftime("%I:%M", clock)


print ("Current date: ", today , "\nTime: ", time )
