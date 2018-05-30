package project1;
import java.util.Scanner;

public class Assignment {

	public static void main(String[] args) {
		System.out.println("Enter an input string:");
		Scanner s= new Scanner(System.in);
		String str= s.nextLine();
		s.close();
		String str1= str.toLowerCase();
		String unique="";
		for(int i=0;i<str1.length();i++)
		{
			if(unique.indexOf(str1.charAt(i))== -1)
			{
				unique = unique + str1.charAt(i);
		    }
					
		}
		for(int i=0;i<unique.length();i++)
		{
			int find=0;
			for(int j=0;j<str1.length();j++)
			{
				if(str1.charAt(j)== unique.charAt(i))
				{
					find++;
				}
			}
			System.out.println("Number of "+unique.charAt(i)+ " is "+find);
		}
			
		
  	    char[] charr= str1.toCharArray();
		int k=0;
		while(k<str1.length())
		{
			//char ch= charr[k];
			charr[k]= (char)(charr[k]-32);
			k= k+2;
		}
		//String str3= new String(str2);
		for(int i=0;i<str1.length();i++)
		{
			System.out.print(charr[i]);
		}
		
	}
}
