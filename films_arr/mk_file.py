import random

with open("./data.txt", 'w') as f:
  for i in range(999999):
    f.write("".join(random.sample(list(map(chr, range(97, 123))),10))+"\n" + str(random.randint(0, 100)) + "\n\n")