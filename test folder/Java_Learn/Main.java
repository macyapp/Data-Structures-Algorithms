import java.io.*;

class Program {
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new FileReader("ip.txt"));
        PrintWriter pw=new PrintWriter(new FileWriter("op.txt"));
        String name="";
        System.out.println("Hello, "+name);
        pw.flush();
	}
}