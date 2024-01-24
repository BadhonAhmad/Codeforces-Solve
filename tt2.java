// abstract class P {
//     int p = 10;

//     P(int p) {
//         this.p = p;
//         System.out.println("Const: P=" + p);
//     }

//     void pm() {
//         System.out.println("PM: " + p);
//     }

//     abstract void d();
// }

// class Q extends P {
//     int q = 20;

//     Q(int p, int q) {
//         super(p);
//         this.q = q;
//         System.out.println("Const: Q=" + q);
//     }

//     void d() {
//         p++;
//         System.out.println("QD: " + p);
//     }
// }

// class R extends Q {
//     int p=30,r=40;
//     R(int p, int q, int r) {
//         super(p, q);
//         this.r = r;
//         System.out.println("Const: R=" + r);
//     }

//     void d() {
//         p--;
//         System.out.println("RD: " + p);
//     }
// }

// class TestA {
//     public static void main(String args[]) {
//         R r = new R(50, 60, 70);//
//         r.pm();
//         r.d();

//         P p = r;
//         p.d();
//         p.pm();

//         p.p = 300;
//         r.d();
//         //System.out.println(r.p +" " +r.q+  " "+p.p);
//         Q q = r;
//         q.p = 200;
        
//         q.d();
//         r.d();
//     }
// }


interface A {
    static int a = 10;

    void am();

    private int i;
    interface Bk{
        
    }
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

public class tt2 implements B, B.C {
    int x = 10;
    private int p = 0;

    public static void main(String args[]) {
        tt2 t = new tt2();
        t.s();
        t.am();
        //System.out.println("t.a"+t.a);
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
            x = 30;
            int y = 80;
            System.out.println("x is: " + x + " and y is : " + y);
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