package application;

public class NumTel {
	private String valeur;
	
	public NumTel (String num) throws MonException
	{
		if(!numeroValide(num))
		{
			throw new MonException (num);
		}
		else
		{
			valeur = num;
	
		}
	}
	
	private static boolean numeroValide(String num)
	{
		boolean res = true;
		if(num.length() != 10)
		{
			res = false;
		}
		else
		{
			int i = 0;
			while((i<=9) && res)
			{
				res = Character.isDigit(num.charAt(i));
				i++;
			}
		}
		return res;
	}
	
	public String toString()
	{
		return valeur;
	}
	
}
