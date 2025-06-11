
# 1 2 3 4 5 6 given
# 6 1 2 3 4 5 ->1 
# 5 6 1 2 3 4 ->2
# 4 5 6 1 2 3 ->3

def RotatedList(arr,k):
        n=len(arr)
        k=k%n
        temp=[]
        for i in range(0,n-k):
            temp.append(arr[i])
        for i in range(0,k):
            arr[i]=arr[i+(n-k)]
        for i in range(k,len(arr)):
            arr[i]=temp[i-k]
        for i in arr:
            print(i)
list=[1,2,3,4,5,6]
k=2
RotatedList(list,k)