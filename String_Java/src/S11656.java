import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
//https://sio2whocode.tistory.com/118
//https://www.acmicpc.net/problem/11656
public class S11656 {
    public static void main(String[] args) {
        String s;
        Scanner in = new Scanner(System.in);
        s = in.next();

        List<String> suffixes = new ArrayList<>();
        for(int i = 0 ; i < s.length() ; i++){
            suffixes.add(s.substring(i,s.length()));
        }
        Collections.sort(suffixes);
        for(String suf : suffixes) {
            System.out.println(suf);
        }
    }
}
