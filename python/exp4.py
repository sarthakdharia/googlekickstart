import fileinput
words = []
count = 0
c = 0
biagrams = []
p = []
temp = ''
for line in fileinput.input(files ='input.txt'):
    a = line.split(" ")
    for b in a:
        words.append(b)
        count = count + 1
l = []
r = []
print("Following Are The Biagrams: ")
for i in range(0,count-1):
    if words[i] != '</s>\n':
        temp = words[i] + ',' + words[i+1]
        l.append(words[i])
        r.append(words[i+1])
        c = c + 1
        if temp not in biagrams:
            biagrams.append(temp)
            print(temp)

print("")
print("Following Are The Probabilities: \n")

for i in range(0,c):
    print('P('+ r[i] + '|' + l[i] + ') = ')
    cl = 0
    cr = 0
    for j in range(0,count):
        if words[j] == l[i]:
            cl = cl + 1
            if words[j + 1] == r[i]:
                cr = cr + 1       
    p.append(cr/cl)
    print(p[i])
    print('')
    
v = 0
max = 0    
check = input('Enter Word For Word Pridiction : ')
for i in range(0,c):
    if l[i] == check:
        if p[i] > max:
            max = p[i]
            v = i

print('Next Word to word ' + check + ' can be : ' + r[v])
print('Since it has the highest probability.')
        

