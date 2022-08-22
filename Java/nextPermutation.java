import java.io.BufferedReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class nextPermutation {
    public static void np(int[] a){
        if(a == null || a.length <= 1) return;
        int i = a.length-2;
        while(i >=0 && a[i] >= a[i+1])i--;
        if(i >= 0){
            int j = a.length-1;
            while(a[j] <= a[i]) j--;
            swap(a,i,j);
        }
        reverse(a,i+1,a.length-1);
    }
    public static void swap(int[] a, int i,int j){
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    public static void reverse(int[] a, int i, int j){
        while(i<j) swap(a,i++,j);
    }
    public static void main(String args[])throws IOException{
       Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i =0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        np(arr);

        for(int i =0;i<n;i++){
            System.out.print(arr[i]+" ");
        }


    }
}
