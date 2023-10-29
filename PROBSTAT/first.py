import statistics


def main () :
    arr = [17,21,22,18,19,17,21]
    print(f"Te Average of the array is  {statistics.mean(arr)}")
    

    print(f"The median is {statistics.median(arr)}")
    print(f"The Variance is {statistics.variance(arr)}")
    print(f"The  Mode is {statistics.mode(arr)}")


def app() :
    students = [57,43,25,38,47]
    print(sum(students)/len(students))
    
    
main()




