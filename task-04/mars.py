import argparse
import requests
import webbrowser
import os
import sys


my_parser = argparse.ArgumentParser(description='Type the id and the date of the required photo')

my_parser.add_argument('date', metavar='date', type=str, help='type of the date on which the photo was taken')
my_parser.add_argument('id', metavar='id', type=int, help='id of the photo')

args = my_parser.parse_args()
rovers =['curiosity','opportunity','spirit']

ID = args.id
DATE = args.date
for j in range(len(rovers)):

    a = requests.get('https://api.nasa.gov/mars-photos/api/v1/rovers/' + rovers[j] + '/photos?earth_date=' + DATE +'&api_key=JQMtn3Lk30BgE0RQzQwbutPQZU1Vph8yjLKa327l')
    b = a.json()

    for i in range(len(b['photos'])):
        if (b['photos'][i]['id'] == ID):

            webbrowser.open(b['photos'][i]['img_src'])
