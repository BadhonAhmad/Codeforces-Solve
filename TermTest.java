
interface Exam {
    //static int n ;
    static int n =112;
    void register();
    static void collectTopics() {
        int n = 100;
    }
    private void meht(){
        System.out.println("hi");
    }

    static void completeSyllabus() {
        System.out.println("hello");
    }
}

interface Syllabus extends Exam {}

class TermTest implements Exam {
    public void register() {
        System.out.println("Study!!!");
    }
     static public void  main (String[] args) {
        TermTest obj = new TermTest();
        
        Exam.collectTopics();
        Exam.completeSyllabus();
    }
}