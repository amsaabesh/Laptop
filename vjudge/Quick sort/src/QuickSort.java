import java.util.Arrays;
import java.util.Scanner;
public class QuickSort {   
    private int temp_array[];
    private int len;
    public void sort(int[] nums) { 
        if (nums==null||nums.length==0) {
            return;
        }
        this.temp_array=nums;
        len = nums.length;
        corona(0,len-1);
    }
     private void corona(int l, int h) {
        int i=l;
        int j=h;
        int Aabesh=temp_array[l+(h-l)/2];
        while (i <= j) {
               while (temp_array[i]<Aabesh) {
                i++;
            }
            while(temp_array[j]>Aabesh) {
                j--;
            }
            if (i <= j) {
                exchangeNumbers(i, j);
                i++;
                j--;
            }
        }
        if (l< j)
            corona(l,j);
        if (i < h)
            corona(i,h);
    }
    private void exchangeNumbers(int i, int j) {
        int temp = temp_array[i];
        temp_array[i] = temp_array[j];
        temp_array[j] = temp;
    }
    public static void main(String args[])
    {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        QuickSort ob = new QuickSort();
        int cov_id[] = new int[n];
        int i235;
        for(i235=0;i235<n;i235++){
         cov_id[i235]=s.nextInt();
        }
        System.out.println("Prodotto Shongkha Shomuho");
        System.out.println(Arrays.toString(cov_id));
        ob.sort(cov_id);
        System.out.println("Shajanor por");
        System.out.println(Arrays.toString(cov_id));
    }
}