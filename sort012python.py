def sort(arr):
    l=0
    m=0
    h=len(arr)-1
    temp=0
    while(m<=h):
        match arr[m]:
            case 0:
                temp=arr[m]
                arr[m]=arr[l]
                arr[l]=temp
                break;
            case 1:
                m+=1
                break;
            case 2:
                temp=arr[m]
                arr[m]=arr[h]
                arr[h]=temp
                break;
    print(arr)

sort([0,1,1,0,0,2,1,2,2,1,0])
