import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class BOJ_11659 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] NM = br.readLine().split(" ");
        int N = Integer.parseInt(NM[0]);
        int M = Integer.parseInt(NM[1]);

        int[] nums = Arrays.stream(br.readLine().split(" "))
                .mapToInt(Integer::parseInt)
                .toArray();
        int[] prefixSum = new int[N];
        prefixSum[0] = nums[0];
        for(int i = 1; i < N; i++) {
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }

        for(int i = 0; i < M; i++) {
            String[] ab = br.readLine().split(" ");
            int a = Integer.parseInt(ab[0]);
            int b = Integer.parseInt(ab[1]);
            if(a == 1) {
                System.out.println(prefixSum[b-1]);
            } else {
                int sum = prefixSum[b-1] - prefixSum[a-2];
                System.out.println(sum);
            }
        }
    }
}
