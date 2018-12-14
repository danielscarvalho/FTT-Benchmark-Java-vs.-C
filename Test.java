public class Test {

    private static int test(int i) {
        return i % 3;    }

    private static int compute(int i) {
        return i + 1;    }

    private static int exec() {
        int sum = 0;        for (int l = 0; l < 1000; l++) {
            int i = 0;            while (i < 2000000) {
                if (test(i) != 0) {
                    sum += compute(i);                }
                i++;            }
        }
        return sum;    }

    public static void main(String[] args) {
        exec();    }
}

