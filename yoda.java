import java.util.Scanner;
public class yoda {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String i1 = s.next();
        String i2 = s.next();
        String o1 = "";
        String o2 = "";
        while (i1.length()<i2.length()) i1="0"+i1;
        while (i1.length()>i2.length()) i2="0"+i2;
        for(int i=0;i<i1.length();i++) {
            char n1 = i1.charAt(i);
            char n2 = i2.charAt(i);
            if (n1>=n2) o1+=n1;
            if (n1<=n2) o2+=n2;
        }
        if(o1.matches("")) System.out.println("YODA");
        else System.out.println(Integer.parseInt(o1)+"");
        if(o2.matches("")) System.out.println("YODA");
        else System.out.println(Integer.parseInt(o2)+"");
    }
}