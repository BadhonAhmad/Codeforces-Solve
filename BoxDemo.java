
class Box{
    double width,height ,depth;
    Box(double w,double h,double d){
        width=w;
        height=h;
        depth=d;
    }
    double volume(){
        return width*height*depth;
    }
}
public class BoxDemo {
    public static void main(String[] args) {
        Box b1 = new Box(10, 10, 10);
        
        Box b2=b1;//10

        Box b3=new Box(20,20,20);

        System.out.println("B1="+b1.volume()+"B2="+b2.volume()+"B3="+b3.volume());
        b1.width=b1.height=b1.depth=30;
        b2.width=b2.height=b2.depth=40;//b2=b1=40
        b3.width=b3.height=b3.depth=50;//b3=50
        System.out.println("B1="+b1.volume()+"B2="+b2.volume()+"B3="+b3.volume());
        b1=b3;b3=b2;//b1=50,b3=40,b2=40
        System.out.println("B1="+b1.volume()+"B2="+b2.volume()+"B3="+b3.volume());
        b1.width=b1.height=b1.depth=5;//b1 alada
        b2.width=b2.height=b2.depth=6;//
        b3.width=b3.height=b3.depth=7;//
        System.out.println("B1="+b1.volume()+"B2="+b2.volume()+"B3="+b3.volume());
    }
}
