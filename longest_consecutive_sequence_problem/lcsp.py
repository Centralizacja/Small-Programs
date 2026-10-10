nums = [1,34,35,6,3,2,1,2,3,4,1,2,3,4,5,2,2,23,13,]

def lcsp():
    counter=1
    record=1

    for i in range(1,len(nums)):
        if (nums[i]-1)==nums[i-1]:
            counter=counter+1
            if counter>=record: record=counter
        else:
            counter=1
        

    return record

print(lcsp())
