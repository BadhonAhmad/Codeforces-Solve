class meh {
    public static void main(String[] args) throws java.io.IOException{
        while (true) {
            char[] s = new char[10];
            int i=0;
            while (true) {
                char c = (char) System.in.read();
                
                if (c == '\n' || c == ' ') {
                    break;
                }
                s[i++] = c;
            }
            int v = 0, co = 0;
            if (s[0] == 'e' && s[1] == 'n' && s[2] == 'd') {
                break;
            }
            for (int j = 0; j < i; j++) {
                if (s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I'
                        || s[j] == 'o'
                        || s[j] == 'O' || s[j] == 'u' || s[j] == 'U') {
                    v++;
                } else
                    co++;
            }
            co--;
            System.out.print("vowels =" + v +" ");
            System.out.println("consonant ="+co +" ");
        }
    }
}