#! Program that displays the date as month day year and the time as eastern standard time

from datetime import date, datetime, timedelta
import pytz




NYC = pytz.timezone('US/Eastern') # Sets the timezone to EDT
datetime_est = datetime.now(NYC)
currentTime = datetime_est.strftime("%I:%M %p %Z") # Displays the time in 12 hour format
today = date.today() - timedelta(days= 1) # Establishes the variable to day which is the date - 1 day because otherwise it displays one day ahead for some reason
month_day_year = today.strftime("%m-%d-%Y") # Changes the format to month day year




while True:
    print("Current date: ", month_day_year , "\nTime: ", currentTime ) # Prints the current date and time
    time.sleep(1)



