from datetime import datetime
from datetime import date

now = datetime.now() # CURRENT DATE AND TIME
today = date.today()
time = now.strftime("%H:%M:%S")

print ("Current date: ", today , "\nTime: ", time)
