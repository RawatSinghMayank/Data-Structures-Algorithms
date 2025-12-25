 
    void myCombinationSum(int sum , int []nums, List <Integer>result, int index){
 
    
    if (index >= nums.length){
        result.add(sum);
        return;
    }
  
    
    myCombinationSum (sum, nums,result,index + 1);
    sum += nums[index];
    
    myCombinationSum (sum,nums,result,index + 1);
    sum -= nums[index];

}
    public ArrayList<Integer> subsetSums(int[] arr) {
        
        ArrayList   <Integer> result = new ArrayList <>();
        
        myCombinationSum(0,arr,result,0);
        return result;
    }


Time : O(2^n)
Space : O(2^n) to store the sum (becuse for array of len n we have 2^n subsets) + O (n) for recursive stack Space