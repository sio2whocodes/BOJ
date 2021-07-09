import java.io.*;
import java.util.ArrayDeque;

//https://sio2whocode.tistory.com/123
//https://www.acmicpc.net/problem/10866

public class Q10866 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        ArrayDeque deque = new ArrayDeque();

        for(int i = 0 ; i < n ; i++){
            String[] s = br.readLine().split(" ");
            String instruction = s[0];
            int element = 0;
            if(s.length > 1){
                 element = Integer.parseInt(s[1]);
            }

            switch (instruction) {
                case "push_front" :
                    deque.addFirst(element);
                    break;

                case "push_back" :
                    deque.add(element);
                    break;

                case "pop_front" :
                    Object popf = deque.pollFirst();
                    if(popf == null){
                        bw.write("-1\n");
                    }else{
                        bw.write(popf.toString()+"\n");
                    }
                    break;

                case "pop_back" :
                    Object popb = deque.pollLast();
                    if(popb == null){
                        bw.write("-1\n");
                    }else{
                        bw.write(popb.toString()+"\n");
                    }
                    break;
                case "size" :
                    bw.write(deque.size()+"\n");
                    break;
                case "empty" :
                    if(deque.isEmpty()){
                        bw.write("1\n");
                    }else{
                        bw.write("0\n");
                    }
                    break;
                case "front" :
                    if(deque.peekFirst() == null){
                        bw.write("-1\n");
                    }else{
                        bw.write(deque.peekFirst().toString()+"\n");
                    }
                    break;

                case "back":
                    if(deque.peekLast() == null){
                        bw.write("-1\n");
                    }else{
                        bw.write(deque.peekLast().toString()+"\n");
                    }
            }

        }

        br.close();
        bw.close();
    }
}
