
public class one {
    public static void main(String[] args) {
        try {
            int a=args.length;
            int b=42/a;
            System.out.println("a="+a);
            try {
                if (a == 1) {
                    a = a / (a - a);
                }
                if (a == 2) {
                    int[] c = {1};
                    c[42] = 99;
                    System.out.println("hello");
                } else throw new NullPointerException("null");
            }catch (ArrayIndexOutOfBoundsException e){
                System.out.println("out of bounds");
            }
        } catch (ArithmeticException e) {
            System.out.println("divide by 0");
        }
        catch (Exception e) {
            System.out.println("Any exception");
        }
    }
}

