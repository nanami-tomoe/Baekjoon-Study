import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class BOJ_10828 {
    public static void main(String[] args) {
        Stack<String> stack = new Stack<>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        try {
            int N = Integer.parseInt(br.readLine());

            for (int i = 0; i < N; i++) {
                String str = br.readLine();
                String[] command = str.split(" ");
                if (command[0].equals("push")) {
                    stack.push(command[1]);
                } else if (command[0].equals("pop")) {
                    if (stack.isEmpty()) {
                        System.out.println("-1");
                    } else {
                        System.out.println(stack.pop());
                    }
                } else if (command[0].equals("size")) {
                    System.out.println(stack.size());
                } else if (command[0].equals("empty")) {
                    if (stack.isEmpty()) {
                        System.out.println("1");
                    } else {
                        System.out.println("0");
                    }
                } else if (command[0].equals("top")) {
                    if (stack.isEmpty()) {
                        System.out.println("-1");
                    } else {
                        System.out.println(stack.peek());
                    }
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try {
                br.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}