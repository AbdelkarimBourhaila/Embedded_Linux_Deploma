"""______________Write code to find automatically bitcoin rate_______________"""


import requests
from pprint import pprint

url = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")

dct = url.json()

print("Bitcoin (EUR) : ", dct["bpi"]["EUR"]["rate"])

print("Bitcoin (GBP) : ", dct["bpi"]["GBP"]["rate"])

print("Bitcoin (USD) : ", dct["bpi"]["USD"]["rate"])

