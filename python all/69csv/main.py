# import csv
#
# with open("weather_data.csv") as data_file:
#  data= csv.reader(data_file)
#  temperatures = []
#  for n in data:
#      if n[1] != "temp" :
#          temperatures.append(int(n[1]))
#  print(temperatures)
#


import pandas

data = pandas.read_csv("weather_data.csv")
print(data["temp"])