import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;

//https://sio2whocode.tistory.com/122
//https://www.acmicpc.net/problem/12015
public class B12015 {
    static ArrayList<Integer> al = new ArrayList<>();

    public static int lower_bound(int s, int e, int n){
        while(s < e){
            int mid = (s+e)/2;
            if(al.get(mid) >= n){
                e = mid;
            }else{
                s = mid + 1;
            }
        }
        return s;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        String s = br.readLine();
        String[] sarr = s.split(" ",n);
        int[] arr = Arrays.stream(sarr).mapToInt(a->Integer.parseInt(a)).toArray();

        al.add(0);
        for(int a : arr){
            if(al.get(al.size()-1) < a){
                al.add(a);
            }else{
                al.set(lower_bound(0,al.size()-1,a), a);
            }
        }
        al.remove(0); // 0제거
        bw.write(al.size()+"\n");

        bw.close();
        br.close();

    }


}
