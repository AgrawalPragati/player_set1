import java.util.*;
import java.io.*;
public class CamelCase {

	public static void main(String args[])
	{
	    Scanner sc=new Scanner(System.in);
	    String s=sc.nextLine();
	    String a="";
	    char b=s.charAt(0);
	    a=a+Character.toUpperCase(b);
	    for(int i=1;i<s.length();i++)
	    {
	        if(s.charAt(i)>=65 && s.charAt(i)<=90)
	        {
	            a=a+Character.toLowerCase(s.charAt(i));
	        }
	        else if(s.charAt(i)==' ')
	        {
	            a=a+' ';
	            if(s.charAt(i+1)>=97 && s.charAt(i+1)<=122)
	            {
	              a=a+Character.toUpperCase(s.charAt(++i));
	            }
	            
	        }
	        else
	        {
	            a=a+Character.toLowerCase(s.charAt(i));
	        }
	       
	    }
	    System.out.println(a);
	    
	}
}
        