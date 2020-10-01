def binarySerch(array,key,lower_bound,upper_bound):
    if(lower_bound>upper_bound):
        return False
    else:
        middle=(lower_bound+upper_bound)//2
        if(array[middle]==key):
            return True
        elif(array[middle]>key):
            return binarySearch(array,key,lower_bound,middle)#[lower_bound,middle)
        else:
            return binarySearch(array,key,middle,upper_bound)


