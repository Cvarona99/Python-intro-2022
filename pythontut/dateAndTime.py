from datetime import date
import time
import pytz 


today = date.today()
clock = time.localtime()
time = time.strftime("%I:%M", clock)


print ("Current date: ", today , "\nTime: ", time )
