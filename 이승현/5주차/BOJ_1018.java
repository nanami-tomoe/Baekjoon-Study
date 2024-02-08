import java.util.Scanner;

public class BOJ_1018 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int M = in.nextInt();
        int N = in.nextInt();
        String[] chess = new String[M];

        for(int i = 0; i < M; i++) {
            chess[i] = in.next();
        }

        int result = 64;
        for(int i = 0; i <= (M-8); i++) {
            for(int j = 0; j <= (N-8); j++) {
                int wrong = count(chess ,i, j);
                if(wrong < result) {
                    result = wrong;
                }
            }
        }
        System.out.println(result);
    }

    public static int count(String[] chess, int a, int b) {
        int numB = 0;
        int numW = 0;

        for(int i = a; i < a+8; i++) {
            for(int j = b; j < b+8; j++) {
                if(i % 2 == j % 2) {
                    if(chess[i].charAt(j) != 'B') {
                        numB++;
                    } else {
                        numW++;
                    }
                } else {
                    if(chess[i].charAt(j) != 'W') {
                        numB++;
                    } else {
                        numW++;
                    }
                }
            }
        }
        return Math.min(numW, numB);
    }
}
