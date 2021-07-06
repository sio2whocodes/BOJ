import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class S9935 {
    public static void main(String[] args) {
//        Scanner in = new Scanner(System.in);
//        String s = in.next();
//        String bomb = in.next();

        String s = "mirkovC4nizCC44";
        String b = "C4";
        char[] cs = s.toCharArray();
        char[] cb = b.toCharArray();
        Stream<Character> chs = s.chars().mapToObj(i->(char)i);

        char[] oa;
        List<Character> cl = new ArrayList<>();
        for(Character be : cb){

            s.chars().mapToObj(o->(char)o).filter(ch->ch != be).map(o->(char)o).forEach(e->cl.add(e));

            System.out.println(cl);
        }

//        for(char c : cs){
//
//        }
    }
}
