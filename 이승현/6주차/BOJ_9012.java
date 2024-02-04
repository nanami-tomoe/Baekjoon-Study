import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class BOJ_9012 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());

        for(int i = 0; i < T; i++) {
            int open = 0;
            int close = 0;
            String PS = br.readLine();
            if(checkBalanced(PS)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        br.close();
    }

    public static boolean checkBalanced(String string) {
        Stack<Character> stack = new Stack<>();
        for(char c : string.toCharArray()) {
            if(c == '(') {
                stack.push(c);
            } else if (c == ')') {
                if(stack.isEmpty()) {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.isEmpty();
    }
}
