import java.util.Scanner;

public class BOJ_1541 {
    static int answer = 0;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String example = in.nextLine();
        String[] str = example.split("-");

        for(int i = 0; i < str.length; i++) {
            int temp = mySum(str[i]);
            if(i == 0) {
                answer += temp;
            } else {
                answer -= temp;
            }
        }

        System.out.println(answer);
    }

    private static int mySum(String a) {
        int sum = 0;
        String[] str = a.split("[+]"); // +를 인식을 잘 못해서 대괄로 쳐주기

        for(String s : str) {
            sum += Integer.parseInt(s);
        }

        return sum;
    }
}
