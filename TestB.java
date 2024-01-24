interface A {
    static int a = 10;
    void am();
}

interface B extends A {
    static int b = 30;
    int c=50;
    
    interface C {
        final static int a = 40;
        
        void am();

        void bm();
    }

    abstract void bm();
}

class TestB implements B, B.C {
    int x = 10;
    private int p = 0;
    

    public static void main(String args[]) {
        TestB t = new TestB();
        t.s();
        t.am();

        A a = t;
        B b = t;
        C c = t;

        a.am();
        b.am();
        b.bm();
        c.bm();

     }

    public class D {
        D() {
            x=30;
            int y=80;
            System.out.println("x is: " + x +" and y is : "+y);
        }
    
        public void s() {
            System.out.println("x is: " + x + " and p = " + p);
        }
    }

    
    public void am(){System.out.println("AM : = "+c);}
    public void bm(){System.out.println("BM : = "+A.a);}

    void s() {
        x=10;
        int y = 20;
        System.out.println("x is: " + x + " and y is: " + y);
        D d = new D();
        d.s();
    }
}