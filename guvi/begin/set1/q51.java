import java.io.*;
import java.util.*;
public class dig
{
public static void main(String[] args)
{
Scanner in=new Scanner(System.in);
int num,rev=0,n1,n2;
num=in.nextInt();
while(num>0)
{
n1=num%10;
num=num/10;
rev=rev*10+n1;
}
int m=rev;
while(m>0)
{
n2=m%10;
m=m/10;
System.out.print(n2+" ");
}

	

	}

}
