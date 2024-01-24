public class loop {
    public static void main(String[] args) {
        int i = 0;

        First: while (i <= 8) {
            int sum = 0;

            i++;

            Second: for (int j = 1; j <= i;) {
                sum = sum + j++;

                for (int k = 1; k <= j; k++) {
                    if (k % 2 != 0)
                        continue;

                    sum = sum + k;

                    if (sum > 50)
                        break Second;
                }

                if (i == 3)
                    continue First;
            }

            System.out.print(sum + " ");
        }
    }
}
