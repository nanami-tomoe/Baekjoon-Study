public class BOJ_4673 {
    static int NUM = 10000;
    public static void main(String[] args) {
        int[] d = new int[NUM];

        for(int i = 1; i < NUM; i++) {
            int seq = i; // 수열을 실행한 수
            int n = i; // i의 각 자릿수를 연산하기 위한 수
            while(n != 0) {
                seq += n % 10;
                n /= 10;
            }

            if (seq < NUM && d[seq] != 1) {
                d[seq] = 1;
            }
        }

        for(int i = 1; i < NUM; i++) {
            if(d[i] != 1) {
                System.out.println(i);
            }
        }
    }
}
