def getAvg(arr,r,c):
    return (arr[r-1][c-1]+arr[r-1][c]+arr[r-1][c+1]+arr[r][c-1]+arr[r][c]+arr[r][c+1]+arr[r+1][c-1]+arr[r+1][c]+arr[r+1][c+1])//9
def boxBlur(image):
    superlis=[]
    rows=len(image)
    columns=len(image[0]);
    
    for i in range(1,rows-1):
        lis=[]
        for j in range(1,columns-1):
            lis.append(getAvg(image,i,j))
        superlis.append(lis)
    return superlis       
            
