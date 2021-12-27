lines = []
with open("Day1Data.txt") as fd:
    for line in fd:
        lines.append(line.strip("\n"))
i = 3
c = 0
while i < len(lines):
    if (int(lines[i]) + int(lines[i - 1]) + int(lines[i - 2])) > (int(lines[i - 3]) + int(lines[i - 2]) + int(lines[i - 1])):
            c = c + 1
    i = i + 1
print(c)
