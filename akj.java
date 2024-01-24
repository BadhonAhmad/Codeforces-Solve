
public class akj {
    private static void sout(String prntStr) {
        System.out.println(prntStr);
    }

    public static void main(String[] args) throws Exception {
        try {
            try {
                try {
                    throw new NullPointerException();
                } catch (Exception e) {
                    sout(e.toString());
                    throw new RuntimeException();
                }
            } catch (Exception e) {
                sout(e.toString());
                throw new ArithmeticException();
            }
        } 
        catch (Exception e) {
            sout(e.toString());
        }
        finally {
            sout("Finish!");
        }
        System.out.println("heil");
    }
}