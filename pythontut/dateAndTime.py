from datetime import datetime
from datetime import date
import time


today = date.today()
clock = time.localtime()
time = time.strftime(("%I"-2)":%M", clock)


print ("Current date: ", today , "\nTime: ", time )
