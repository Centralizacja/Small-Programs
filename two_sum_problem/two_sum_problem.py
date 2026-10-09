"""


w1 = "append"
w2 = "dneppa"

def linear_complexity():
    
    #This is a simple algorithm that will sort both words, and compare the two. This results in a time complexity of O(n)
    

    w3 = ''.join(sorted(w1))
    w4 = ''.join(sorted(w2))

    if (w3 == w4):
        return True
    return False

print(linear_complexity())
"""


nums = [1,2,453,7,246,35,3,46,57,58,42,1,1221,1,2,46,46, 75,4,8,9,4,16]
target = 70

def n_squared_complexity():
    nums2 = nums.copy()
    for i in range(len(nums)):
        for k in range(len(nums2)):
            if (nums[i]+nums2[k] == target and i!=k):
                return f"index 1: {i} ({nums[i]}), index 2: {k} ({nums2[k]}), target: {target}"
    return f"There is no pair"

print(n_squared_complexity())