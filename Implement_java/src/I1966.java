import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class I1966 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for(int t = 0 ; t < T ; t++){
            int N = in.nextInt();
            int target = in.nextInt();
            Queue<Integer> q = new LinkedList<>();

            for(int nn = 0 ; nn < N ; nn++){
                int p = in.nextInt();
                q.add(p);
            }

            int cnt = 0;
            while(!q.isEmpty()){
                if (q.stream().anyMatch(n->q.peek()<n)) {
                    int del = q.remove();
                    q.add(del);
                    if(target == 0){
                        target = q.size()-1;
                    }
                    else
                        target--;
                } else {
                    cnt++;
                    if(target == 0){
                        System.out.println(cnt);
                        break;
                    }else{
                        q.remove();
                        target--;
                    }
                }
            }
        }
    }
}
