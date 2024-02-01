import java.util.Arrays;
import java.util.Scanner;

public class BOJ_2309 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] h = new int[9];
        int sum = 0;
        for(int i = 0; i < 9; i++) {
            h[i] = in.nextInt();
            sum += h[i];
        }

        Arrays.sort(h);
        int diff = sum - 100;

        int a = 0;
        int b = 0;
        for(int i = 0; i < 8; i++) {
            for(int j =i+1; j < 9; j++) {
                if(h[i] + h[j] == diff) {
                    a = i;
                    b = j;
                }
            }
        }

        for(int i = 0; i < 9; i++) {
            if(i != a && i != b) {
                System.out.println(h[i]);
            }
        }
    }
}
