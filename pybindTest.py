# Random test of speed for python invocations from C++
import random

LARGE_NUM = 5000 # previous value: 10000

# Bubble sort
def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
 
# Open and return file
def openFile(file_name):
    arr = None
    with open(file_name, 'r') as file:
        for f in file:
            arr = f.strip().split(',')
        for a in range(len(arr)):
            arr[a] = int(arr[a])
    return arr

# Randomly generate file from built-in Python libraries
def randomNum(size):
    arr = [0]*size
    for a in range(len(arr)):
        arr[a] = random.randint(-5000,5000)   # previous values: -10000,10000

    return arr

# Print out sorted array
def printOut(array):
    print(array)

'''
Performs the following tasks
Driver code and timer in the C++
1. Open a large file of randomly generated numbers
2. Call upon built-in random number generator for another list of numbers
3. Bubble sort first list of numbers
4. Print out the list

vvv Driver code sampler

'''
if __name__ == "__main__":
    # 1. Open file
    file_name = 'C:/Users/crynh/OneDrive/Documents/Github/data-structures-and-algorithms/python invocations/pybindTest.txt'
    arr1 = openFile(file_name)

    # 2. Random array of ints
    arr2 = randomNum(LARGE_NUM)

    # 3. Bubble sort
    bubbleSort(arr1)
    bubbleSort(arr2)

    # 4. Print sorted array
    printOut(arr1)
    printOut(arr2)