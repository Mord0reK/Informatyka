# Napisz program, kt�ry za pomoc� instrukcji do ... while sumuje liczby parzyste w przedziale od 1 do 100.

sum = 0
i = 1
while True:
    i += 1
    if i % 2 == 0:
        sum += i
    if i > 100:
        break

print(sum)
