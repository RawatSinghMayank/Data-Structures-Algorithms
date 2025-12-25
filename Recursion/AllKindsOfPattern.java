import java.util.*;

 class practiceJava{

	public static boolean findOneSubset (int target,List <Integer> result, int []arr, int index, int sum){

	if (sum >= target){
		if (sum == target){
			return true;
		}
		return false;
	}

	if (index < arr.length){

		result.add(arr[index]);
		sum += arr[index];

		if (findOneSubset(target,result,arr,index + 1,sum)) return true;

		sum -= arr[index];
		result.remove(result.size() -  1);

		if (findOneSubset(target,result,arr,index + 1, sum)) return true;
	}
		return false;	
	
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
		if (findOneSubset(target,result,arr,0,0)){
			for (int ele : result) System.out.print(ele + " " );
		}
		else{
			System.out.println ("Not found");
		}
		
	}
}