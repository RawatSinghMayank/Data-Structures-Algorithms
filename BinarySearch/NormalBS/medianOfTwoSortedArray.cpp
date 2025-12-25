
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int len1 = nums1.size();
        int len2 = nums2.size();

        int i = 0, j = 0;
        int counter = 0;
        int len = len1 + len2;
       
        int element1,element2;

        int index1 = len/2 - 1 , index2 = len/2;
    

        while (i < len1 && j < len2){

            if (nums1[i] <= nums2[j]){

                if (counter == index1) element1 = nums1[i];
                else if(counter == index2) element2 = nums1[i];
                   i++;
                counter++;
            }

            else {
               
               if (counter == index1) element1 = nums2[j];
               else if(counter == index2) element2 = nums2[j];
                j++;
                counter++;
                
            }

        }


        while ( i < len1){

           
             if (counter == index1) element1 = nums1[i];
            else if(counter == index2) element2 = nums1[i]; 
             i++;
            counter++;
        }


        while (j <  len2){

          
            if (counter == index1) element1 = nums2[j];
            else if(counter == index2) element2 = nums2[j];
              j++;
            counter++;
        }

       if (len % 2 == 0) return (element1 + element2)/ 2.0;
       return element2;
       }
    };



class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        
        if (nums1.length > nums2.length){
            return findMedianSortedArrays (nums2,nums1);
        }

        int x = nums1.length;
        int y = nums2.length;

        int low = 0, high = x;

        while (low <= high){ 

            int partitionX = low + (high - low)/2;
            int partitionY = (x + y + 1) / 2 - partitionX;

            int maxLeftX = (partitionX == 0) ? Integer.MIN_VALUE : nums1[partitionX - 1];
            int minRightX = (partitionX == x) ? Integer.MAX_VALUE : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? Integer.MIN_VALUE : nums2[partitionY - 1];
            int minRightY = (partitionY == y) ? Integer.MAX_VALUE : nums2[partitionY];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX){

                if ((x + y) % 2 == 0){
                    return ( (double)(Math.max(maxLeftX,maxLeftY) + (double) Math.min(minRightX ,minRightY)) / 2.0);
                }
                else {
                    return Math.max(maxLeftX,maxLeftY);
                }
            }

            else if (maxLeftX > minRightY) {
                high = partitionX - 1;
            }
            else{
                low = partitionX + 1;
            } 
        }

        return 0;
    }
}

// Slight difference in this code I used x + y /2 - partitionX then for odd length case median element will be on  the right side


class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        
        if (nums1.length > nums2.length){
            return findMedianSortedArrays (nums2,nums1);
        }

        int x = nums1.length;
        int y = nums2.length;

        int low = 0, high = x;

        while (low <= high){ 

            int partitionX = low + (high - low)/2;
            int partitionY = (x + y ) / 2 - partitionX;

            int maxLeftX = (partitionX == 0) ? Integer.MIN_VALUE : nums1[partitionX - 1];
            int minRightX = (partitionX == x) ? Integer.MAX_VALUE : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? Integer.MIN_VALUE : nums2[partitionY - 1];
            int minRightY = (partitionY == y) ? Integer.MAX_VALUE : nums2[partitionY];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX){

                if ((x + y) % 2 == 0){
                    return ( (double)(Math.max(maxLeftX,maxLeftY) + (double) Math.min(minRightX ,minRightY)) / 2.0);
                }
                else {
                    return Math.min(minRightX,minRightY);
                }
            }

            else if (maxLeftX > minRightY) {
                high = partitionX - 1;
            }
            else{
                low = partitionX + 1;
            } 
        }

        return 0;
    }
}