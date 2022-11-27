import java.util.*;
import java.io.*;


public class Main {
 
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String[] firstLine = br.readLine().split(" ");
        int k = Integer.parseInt(firstLine[0]); 
        int n = Integer.parseInt(firstLine[1]); 
        
        int[] inputArray = new int[k];
        for(int i=0; i<k; i++) {
            inputArray[i] = Integer.parseInt(br.readLine()); 
        }
        Arrays.sort(inputArray);
        
        long max = inputArray[k-1]; 
        long min = 1;
        long middle = 0; 
        
        while(max >= min) { 
            middle = (max+min)/2;
            
            long allCount = 0;
            
            for(int j=0; j<inputArray.length; j++) {
                
                allCount += inputArray[j]/middle;
            }
            
            if(allCount >= n) {
                
                min = middle + 1;
                
            }else if(allCount < n) {
                
                max = middle - 1;
                
            }
            
        }
        System.out.println(max);
        
    }
 
}