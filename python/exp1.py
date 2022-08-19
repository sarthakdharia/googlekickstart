def exchange(s):
    for i in range(0,len(s)):
        ns = s[len(s)-1]+s[1:len(s)-1]+s[0]
        return ns
            
str = input("Enter a string : ")
print("New String: ", exchange(str))