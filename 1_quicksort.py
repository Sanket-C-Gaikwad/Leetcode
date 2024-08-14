# recurcive algorithm
# time complexity of O(nlog(n)) for average and best case
#                    O(n^2) for worst case if the array is already sorted

# Space complexity of O(nlog(n)) due ti recurcision


def quicksort(arr, left, right):
    if left < right:
        pivot_index = part(arr, left, right)
        quicksort(arr, left, pivot_index - 1)
        quicksort(arr, pivot_index + 1, right)

    

def part(arr, left, right):    
    
    i = left - 1
    pivot = arr[right]
    
    for j in range(left, right):
        
        if arr[j] <= pivot:
            i +=1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[i+1], arr[right] = arr[right], arr[i+1]
    
    return i+1
    
arr = [2,3,5,66,7,8,2]
print(arr)
quicksort(arr, 0, len(arr)-1)
print(arr)

