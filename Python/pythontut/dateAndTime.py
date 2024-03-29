#! Program that displays the date as month day year and the time as eastern standard time

from datetime import date, datetime, timedelta
import time
import pytz



while True:
    NYC = pytz.timezone('US/Eastern') # Sets the timezone to EDT
    datetime_est = datetime.now(NYC)
    currentTime = datetime_est.strftime("%I:%M:%S %p %Z") # Displays the time in 12 hour format
    today = date.today() - timedelta(days= 0) # Suddenly unnecesary 
    month_day_year = today.strftime("%m-%d-%Y") # Changes the format to month day year





    print("Current date: ", month_day_year , "\nTime: ", currentTime ) # Prints the current date and time
    time.sleep(1)



