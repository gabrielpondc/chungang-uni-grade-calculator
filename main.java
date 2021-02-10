package afa;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;

public class main {
    static ArrayList<String> Name = new ArrayList<String>();
    static ArrayList<Double> Score = new ArrayList<Double>();
    static ArrayList<Double> Credit = new ArrayList<Double>();

    public static void calculator() {
        double zongfen = 0;
        double zongxuefen = 0;
        double jidian;
        double a = 0, b = 0;
        for (int i = 0; i < Name.size(); i++) {
            a = Score.get(i);
            b = Credit.get(i);
            zongfen += a * b;
            zongxuefen += b;

        }
        jidian = zongfen / zongxuefen;
        System.out.println("The class grade entered now is" + jidian);
    }

    public static void input() throws IOException {
        String s;
        String sc;
        double score;
        double credit=0.0;
        Scanner xd = new Scanner(System.in);
        Scanner cr = new Scanner(System.in);
        Scanner br = new Scanner(System.in);
        System.out.print("Course Name:");
        s = br.nextLine();
        System.out.print("Grade:");
        score = xd.nextDouble();
        System.out.print("Final Score:");
        sc = cr.nextLine();
        if (sc.equals("a")){
		    credit = 4.0;}
	    if (sc.equals("A")){
		    credit = 4.5;}
	    if (sc.equals("B")){
		    credit = 3.5;}
	    if (sc.equals("b")){
		    credit = 3.0;}
	    if (sc.equals("C")){
		    credit = 2.5;}
	    if (sc.equals("c")){
		    credit = 2.0;}
	    if (sc.equals("D")){
		    credit = 1.5;}
	    if (sc.equals("d")){
		    credit = 1.0;}
	    if (sc.equals("F")){
		    credit = 0.0;}
        Name.add(s);
        Score.add(score);
        Credit.add(credit);
        }

    

    public static void show() {
        for (int i = 0; i < Name.size(); i++) {
            System.out.println("Course：" + Name.get(i) + "   Grade：" + Score.get(i) + "   Score：" + Credit.get(i));
        }
    }

    public static void calculate() {
        double zongfen = 0;
        double zongxuefen = 0;
        double jidian;
        double a = 0, b = 0;
        for (int i = 0; i < Name.size(); i++) {
            a = Score.get(i);
            b = Credit.get(i);
            zongfen += a * b;
            zongxuefen += a;

        }
        jidian = zongfen / zongxuefen;
        System.out.println("Final Score：" + jidian + "You get " + zongxuefen + " in this term");
    }

    public static void main(String[] args) throws IOException {
        Scanner sp = new Scanner(System.in);
        int n;
        System.out.println( "Chung-ang Uni. Grade calculator");
        System.out.println("How many classes did you take this semester?" );
        n=sp.nextInt();
        for (int i = 1; i <= n; i++) {
            if (i >= 2) {
                calculate();
            }
            else
            System.out.println( "The Grade for now：0。");
            System.out.println( "No." + i + "Course is entering，" +(n - i )+"course is left 。" +"\n"+ "(Upper case is + score, lower case is normal score, F is 0, no P score)");
            input();
    }
    show();
    System.out.println(" ");
    calculate();
}

}
