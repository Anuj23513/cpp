import math
def miniMaxSum(arr):
    # Write your code here
    arr.sort()
    min_sum=sum(arr[:4])
    max_sum=sum(arr[-4:])
    print(min_sum,max_sum)
    
            
            

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
