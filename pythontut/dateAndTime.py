from datetime import datetime
from datetime import date
import time

now = datetime.now() # CURRENT DATE AND TIME
today = date.today()
clock = time.localtime()
time = time.strftime("%H:%M:%S", clock)

print ("Current date: ", today , "\nTime: ", time )
