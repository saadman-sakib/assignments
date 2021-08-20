file = open("names.csv", "r")
s = file.read()
file.close()

print(s)

s = s.replace(";",",")
print(s)
file = open("names.csv", "w")
file.write(s)
