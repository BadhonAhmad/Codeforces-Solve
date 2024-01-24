
public class ThreadExam implements Runnable {
    public ThreadExam() {
        Thread t = Thread.currentThread();//main theke kaj hocceh
        System.out.println("Current Thread1: " + t);//[main,5,main]
        t.setName("ExamThread");//
        t.setPriority(4);
        System.out.println("Current Thread: " + t);
        printer();
    }

    synchronized public void printer() {
        Thread t = Thread.currentThread();
        System.out.println("Printer ekhane: " + t);
    }

    public void run() {
        Thread t = Thread.currentThread();
        System.out.println("Current Thread3: " + t);
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            
            System.out.println("Exiting threadExam");
        }
        printer();
        System.out.println("ThreadExam Exiting.");
    }

    public static void main(String[] args) {
        Thread t = new Thread(new ThreadExam(),"KhaledThread");
        System.out.println("Current Thread fire eshe: " + t);
        t.setPriority(7);
        t.start();
        var cnt = 12;
        var sk = 13;
        //double a ()->123.45;
        try {
            t.join();
        } catch (InterruptedException e) { }
        System.out.println("ThreadMain Exiting.");
    }
}

