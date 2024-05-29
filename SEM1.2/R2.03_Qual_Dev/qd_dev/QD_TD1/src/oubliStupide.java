public class oubliStupide {
	public static void main(String[] args) {
		try
		{
			int[] tab = null;
			System.out.println(tab[2]);
		} catch (java.lang.NullPointerException exc)
		{
			System.out.println("T'as pas créé de tableau niguedouille");
		}
	}
}