# Napisz program, kt�ry za pomoc� instrukcji while sumuje liczby nieparzyste w przedziale od 1 do 100.

sum = 0
i = 0
while i < 100:
    i += 1
    if i % 2 != 0:
        sum += i

print(sum)
