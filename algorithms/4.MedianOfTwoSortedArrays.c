double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int c1,c2;
    c1 = c2 = 0;
    int sumSize = nums1Size+nums2Size;
    int sArray[sumSize];
    while( c1<nums1Size || c2<nums2Size ){
        if(c1>=nums1Size){
            sArray[c1+c2]=nums2[c2++];
        }else if(c2>=nums2Size){
            sArray[c1+c2]=nums1[c1++];
        }else{
            sArray[c1+c2] = nums1[c1]<nums2[c2] ? nums1[c1++] : nums2[c2++];
        }
    }
    if(1 == sumSize%2)
        return (double)sArray[(sumSize-1)/2];
    else
        return (double)(sArray[(sumSize/2)-1]+sArray[sumSize/2])/2;
    return 0;
}