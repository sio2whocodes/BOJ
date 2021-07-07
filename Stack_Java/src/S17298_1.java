import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Stack;

//https://www.acmicpc.net/problem/17298
//https://sio2whocode.tistory.com/121
public class S17298_1 {
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

        Stack<Integer> stack = new Stack<>();

        for(int i = n-1 ; i >= 0 ; i--){
            result.add(n-1-i,-1);
            while(!stack.empty()){
                if(arr[i] < stack.peek()){
                    result.set(n-1-i,stack.peek());
                    break;
                }else{
                    stack.pop(); //나보다 크지 않다면 후보에서도 탈락(스택에서 빠짐)
                }
            }
            stack.add(arr[i]);
        }

        Collections.reverse(result);
        bw.write(result.toString().substring(1,result.toString().length()-1).replaceAll(",",""));
        br.close();
        bw.close();
    }
}
