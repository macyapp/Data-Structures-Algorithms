import java.io.*;
import java.util.StringTokenizer;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new FileReader("ip.txt"));
        StringTokenizer st;
        st=new StringTokenizer(br.readLine());
        int n=Integer.parseInt(st.nextToken());
        int[] a=new int[n];
        st=new StringTokenizer(br.readLine());
        int i;
        for(i=0;i<n;i++) {
            a[i]=Integer.parseInt(st.nextToken());
        }
        for(i=0;i<n;i++) {
            System.out.print(a[i]+" ");
        }
        System.out.println();
        br.close();
    }
}