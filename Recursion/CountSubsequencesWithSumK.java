import java.util.*;


 class practiceJava{

	public static int  countOfSub (int target,List <Integer> result, int []arr, int index, int sum){

        int countOfSubsequencesEqualsK = 0;
	if (sum >= target){
		if (sum == target){
            return 1;
		}
        return 0;
	}

	if (index < arr.length){

		result.add(arr[index]);
		sum += arr[index];

		countOfSubsequencesEqualsK += countOfSub(target,result,arr,index + 1,sum);

		sum -= arr[index];
		result.remove(result.size() -  1);

		countOfSubsequencesEqualsK += countOfSub(target,result,arr,index + 1, sum);
    }
        return countOfSubsequencesEqualsK;
		
 }


	public static void main (String []args){

		Scanner in = new Scanner (System.in);
		int n = in.nextInt();
		int []arr = new int[n];

		for (int i = 0; i < n; i++){
			arr[i] = in.nextInt();
		}

		List <Integer> result = new ArrayList <>();

		int target = in.nextInt();
		System.out.println (countOfSub(target,result,arr,0,0));		
	}
}