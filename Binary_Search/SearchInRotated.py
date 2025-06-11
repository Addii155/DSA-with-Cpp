def BinarySearch(arr,tar):
    size=len(arr)
    i=0
    j=size-1
    while(i<=j):
        mid=(i+j)//2
        if arr[mid]==tar: 
            return mid
        elif arr[mid]>tar:
            j=mid-1
        else:
            i=mid+1
    return -1

arr=[1,2,3,4,5,6,7,7,8]
tar=10
print(BinarySearch(arr,tar))

