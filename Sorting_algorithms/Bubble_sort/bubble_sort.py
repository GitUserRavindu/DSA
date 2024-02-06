#Bubble Sort Function Definition
def bubble_sort(arr):
    for i in range(len(arr)):
        j = 0
        while (j < len(arr) - 1):
            if (arr[j] > arr[j+1]):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            j += 1
    return

#Main Body
unsorted_arr = list(map(int, input("Enter the array elements separated by space ").split()))
bubble_sort(unsorted_arr)
print(*unsorted_arr)