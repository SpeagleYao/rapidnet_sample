import argparse


parser = argparse.ArgumentParser()
parser.add_argument("-input", type=str)
parser.add_argument("-output", type=str)
args = parser.parse_args()


infile = open(args.input, 'r')
outfile = open(args.output, 'w')


times = []
count = 0
for line in infile.readlines():
  line = line.strip()
  split = line.split(' ')
  word = split[0]
  if word.isdigit():
    times.append(int(word))
  elif word.startswith('time='):
    count += 1
    toWrite = split[6][14:]
    outfile.write(toWrite+'\n')

print("maintenance time:", (times[1]-times[0])/1000000, "s")
print("average query time:", ((times[-1]-times[1])/count)/1000000, "s")


infile.close()
outfile.close()