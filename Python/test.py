# Library
import datetime as dt
import json
from pprint import pprint

# Get the Information root and DateTime for the latest update
x = dt.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
print(x + "\n")

root = {
    "Name": "Abdelkarim BOURHAILA",
    "Age": 24,
    "Email": "bourhaila.abdelkarim@gmail.com"
}

pprint(root)

# Create a Data for Json file
json_string = json.dumps(root, indent=4)

# Inject The Information root and DateTime in the Json file
with open("file.txt", "w") as f:
    f.write("This is a new line\n")
    f.write("Updated at: " + x + "\n")
    f.write(json_string)

# The 'with' statement automatically handles file closing.
