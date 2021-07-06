import java.io.*;
import java.util.*;

public class S5430 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int T = Integer.parseInt(br.readLine());
        for (int t = 0; t < T; t++) {
            String func = br.readLine();
            int n = Integer.parseInt(br.readLine());
            String arr = br.readLine();

            arr = arr.substring(1, arr.length() - 1);
            List<String> sl = new ArrayList<>(Arrays.asList(arr.split(",",n).clone()));

            if(n == 0){
                sl.removeAll(sl);
            }

            Deque<String> dq = new ArrayDeque<>(sl);

            boolean error = false;
            boolean pointerFirst = true;
            for (char p : func.toCharArray()) {
                if (p == 'R') {
                    pointerFirst = !pointerFirst;
                } else {
                    //p == 'D'
                    if (dq.isEmpty()) {
                        error = true;
                        break;
                    } else {
                        if(pointerFirst){
                            dq.pollFirst();
                        }else{
                            dq.pollLast();
                        }
                    }
                }
            }

            if(error){
                bw.write("error\n");
            } else {
                if (pointerFirst) {
                    bw.write(dq.toString().replaceAll(" ","")+"\n");
                }
                else {
                    List<Object> result = Arrays.asList(dq.toArray());
                    Collections.reverse(result);
                    bw.write(result.toString().replaceAll(" ","")+"\n");
                }
            }
        }
        br.close();
        bw.close();
    }
}
