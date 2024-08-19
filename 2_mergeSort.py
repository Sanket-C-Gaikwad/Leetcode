def merge_sort(arr):
    if len(arr) > 1:
        # Find the middle point and divide the array into two halves
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]

        # Recursively sort both halves
        merge_sort(left_half)
        merge_sort(right_half)

        # Initialize pointers for left_half, right_half and main array
        i = j = k = 0

        # Merge the temp arrays back into arr[]
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        # Copy the remaining elements of left_half, if any
        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        # Copy the remaining elements of right_half, if any
        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

# Function to print the array
def print_array(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()

# Example usage
arr = [38, 27, 43, 3, 9, 82, 10]
print("Given array is")
print_array(arr)

merge_sort(arr)

print("Sorted array is")
print_array(arr)
