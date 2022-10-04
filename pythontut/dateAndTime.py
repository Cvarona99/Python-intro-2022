from datetime import datetime
from datetime import date
import time

now = datetime.now() # CURRENT DATE AND TIME
today = date.today()
clock = time.localtime()
time = now.strftime("%H:%M:%S")

print ("Current date: ", today , "\nTime: ", clock )
