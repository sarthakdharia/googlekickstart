nums = []  
ni = int(input("Enter number of elements : "))  
for i in range(0, ni):
    ele = int(input())
    nums.append(ele)
    
multipliers = []  
m = int(input("Enter number of elements : "))  
for i in range(0, m):
    ele = int(input())
    multipliers.append(ele)
    
sums = 0
len_m = len(multipliers)
for i in range(0,len_m):
    print(nums)
    n = len(nums)
    start = 0
    end = n-1
    mul_s = multipliers[i] * nums[start]
    mul_e = multipliers[i] * nums[end]
    print(mul_s)
    print(mul_e)
    if mul_s > mul_e:
        sums = sums + mul_s
        nums.pop(start)
    else:
        sums = sums + mul_e
        nums.pop(end)        
print(sums)