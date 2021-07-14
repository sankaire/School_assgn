names = [
    {"name": "peter", "county": "kajiado"},
    {"name": "maggy", "county": "kiambu"},
    {"name": "kaluki", "county": "kitui"},
]


names.sort(key=lambda person: person["name"])

print(names)
