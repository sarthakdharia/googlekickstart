import nltk
from nltk import word_tokenize

string = input("Enter The Sentence : ") 
words = set(nltk.corpus.words.words())
filtered=" ".join(w for w in word_tokenize(string) \
if w.lower() in words or not w.isalpha()) 
print(filtered)