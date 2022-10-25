import fileinput

input_words = []
tags = []
word_tags = []
words = []
count = 0
c = 0
biagrams = []
p = []
t = []
temp = ''
for line in fileinput.input(files ='input2.txt'):
    a = line.split(" ")
    for b in a:
        input_words.append(b)
        count = count + 1

for w in input_words:
    g = 'false'
    for i in w:
        if i == '|':
            g = 'true'
        else:
            b = w
    if g == 'true':
        a , b = w.split('|',1)
        if a not in t:
            t.append(a)
        words.append(a)
        word_tags.append(b)
        tags.append(b)
    else:
        tags.append(w)

for f in tags:
    print(f, end =" ")

l = []
r = []
print("")
print("Following Are The Biagrams: ")
for i in range(0,count-1):
    if tags[i] != '</s>\n':
        temp = tags[i] + ',' + tags[i+1]
        l.append(tags[i])
        r.append(tags[i+1])
        c = c + 1
        if temp not in biagrams:
            biagrams.append(temp)
            print(temp)

print("")
print("")
print("Following Are The Probabilities: \n")

for i in range(0,c):
    print('P('+ r[i] + '|' + l[i] + ') = ', end =" ")
    cl = 0
    cr = 0
    for j in range(0,count):
        if tags[j] == l[i]:
            cl = cl + 1
            if tags[j + 1] == r[i]:
                cr = cr + 1
            
    p.append(cr/cl)
    print(p[i])
    print('')

print('Emission Probabilities Are :')
print('\t N \t M \t V')
for k in t:
    kc = 0
    tc = 0
    mc = 0
    nc = 0
    vc = 0
    for i in range(0,len(words)):
        if words[i].lower() == k.lower():
            kc = kc + 1
            if word_tags[i] == 'N':
                nc = nc + 1
            elif word_tags[i] == 'M':
                mc = mc + 1
            elif word_tags[i] == 'V':
                vc = vc + 1
    
    print(k + '\t' + str(round(nc/kc,2)) + '\t' + str(round(mc/kc,2)) + '\t' + str(round(vc/kc,2)))
