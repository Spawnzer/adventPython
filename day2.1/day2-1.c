lines = []
with open("Day2Data.txt") as fd:
	for line in fd:
		lines.append(line.strip("\n"))
i = 0
d = 0
h = 0
while i < len(lines):
	if lines[i][0] == 'f':
		h += int(lines[i][len(lines[i]) - 1])
	elif lines [i][0] == 'd':
		d += int(lines[i][len(lines[i]) - 1])
	else:
		d -= int(lines[i][len(lines[i]) - 1])
	i = i + 1
print(d * h)
