class search:
    def __init__(self,a,n):
        
        beg = 0
        end = len(a)
        mid = (beg+end)//2

        while(beg>=end and a[mid]!=n):
            if n<a[mid]:
                end = mid-1
            else :
                beg = mid+1
        if(a[mid]==n):
            print ("index is ",mid+1)
        else : 
            print("Element not found")


a = [1,3,5,7,9]
b = search(a,5)