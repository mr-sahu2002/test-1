import java.util.Scanner;
public class Sample{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int i,j;
        System.out.println("enter the number of clubs");
        int no=sc.nextInt();
        int a[]=new int[no];

        for(i=0;i<no;i++){
            a[i]=sc.nextInt();
        }
        int max=a[0];
        for(i=0;i<a.length;i++){
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        int n=1;
        int output=0;
        while(n<a[no-1]){
            int m=0;
            for(j=0;j<no;j++){
                if(a[j]%n==0){
                    m+=1;
                }
            }
            if((n*m)>output){
                output=n*m;
            }
            n++;
        }
        System.out.println(output);
    }
}