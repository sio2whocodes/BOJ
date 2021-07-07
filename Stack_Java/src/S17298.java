import java.io.*;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Stack;

public class S17298 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());

        String[] stringArr = br.readLine().split(" ");
        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++){
            arr[i] = Integer.parseInt(stringArr[i]);
        }

        ArrayList<Integer> result = new ArrayList<>();

        Stack<Integer> orgStack = new Stack<>();
        Stack<Integer> newStack = new Stack<>();

        for(int i = n-1 ; i >= 0 ; i--){
            newStack.clear();
            newStack.addAll(orgStack);
            result.add(n-1-i,-1);
            while(!newStack.empty()){
                int comp = newStack.pop();
                if(arr[i] < comp){
                    result.set(n-1-i,comp);
                    break;
                }
            }
            orgStack.add(arr[i]);
        }

        Collections.reverse(result);
        bw.write(result.toString().substring(1,result.toString().length()-1).replaceAll(",",""));
        br.close();
        bw.close();
    }
}
