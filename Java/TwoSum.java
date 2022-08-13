import java.util.*;
import java.io.*;
public class TwoSum{
        static int[] twoSum(int []nums,int target){
            Map <Integer,Integer> map = new HashMap<Integer,Integer>();
            int []result = new int[2];
            for(int i = 0; i < nums.length; i++){
                if(map.containsKey(target - nums[i])){
                    result[0] = map.get(target-nums[i]);
                    result[1] = i;
                }
                map.put(nums[i],i);
            }
            return result;
        }
public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int target = sc.nextInt();
        int []nums = new int[n];
            for(int i = 0 ; i < n ; i++){
                nums[i] = sc.nextInt();
            }
      int arr[] = twoSum(nums,target); 
      System.out.println(arr[0]+" "+arr[1]);
    }
}