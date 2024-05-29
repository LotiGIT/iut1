package application;

public class Main {
	public static void main(String[] args) throws MonException {
		Abonne nathan = new Abonne("Nathan", "Pleuven");
		nathan.addNum();
		nathan.addNum();
		nathan.afficheNumeros();
	}
}
