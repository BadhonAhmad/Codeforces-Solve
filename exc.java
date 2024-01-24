 class exc{
     public static void m() {
         throw new NullPointerException("null");
     }

     public static void m(int e) {
         try {
             System.out.println("e =" + e);
             return;
         } finally {
             System.out.println("not reachable");
         }
     }
    public static void main(String[] args) {
        int e = args.length;
        System.out.println("Total Exceptions: " + e);
        if (e == 0)
            e = 10 / e;
        try{
            if(e == 1) e=e/(e-e);
            try{
                if(e == 2){
                    int a[] ={1};
                    a[1]=99;
                    System.out.println("a[1] = "+a[1]);
                }
                else if(e == 3){
                    m();
                }
                else m(e);
            }catch(ArrayIndexOutOfBoundsException ex){
                System.out.println("Divide by zero");
            }finally{
                System.out.println("the reachable code");
            }
        } catch (ArithmeticException | NullPointerException ex) {
            System.out.println("Array index out of Bounds or Null");
        }
        catch (Exception ex) {
            System.out.println("Any exception");
        }
        finally {
            System.out.println("program completed");
        }
        System.out.println("Exam ended");
    }
}