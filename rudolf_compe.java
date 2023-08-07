import java.util.*;
public class rudolf_compe {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        while (t-- > 0) {
            long n = sc.nextLong();
            long m = sc.nextLong();
            long h = sc.nextLong();
            long ans = 1;
            long rp = 0;
            long rpe = 0;
            long[] arr = new long[m];
            for (long i = 0; i < m; i++) {
                arr[i] = sc.nextLong();
            }
            long[] answ = solve(arr, h);
            rp = answ[0];
            rpe = answ[1];
            n--;
            while (n-- > 0) {
                for (long i = 0; i < m; i++) {
                    arr[i] = sc.nextLong();
                }
                answ = solve(arr, h);
                // System.out.println(answ[0]+" "+answ[1]);
                if (answ[0] > rp || (answ[0] == rp && answ[1] <= rpe))
                    ans++;
            }
            System.out.println(ans);
        }
    }

    public static long[] solve(long[] arr, long h) {
        Arrays.sort(arr);
        long sum = 0;
        long p = 0;
        long time = 0;
        for (long i = 0; i < arr.length; i++) {
            if (time + arr[i] <= h) {
                time += arr[i];
                p++;
                sum += time;
            }
        }
        long[] ar = new long[2];
        ar[0] = p;
        ar[1] = sum;
        return ar;
    }
}