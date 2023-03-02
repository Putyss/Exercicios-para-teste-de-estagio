import java.util.Scanner;

public class InverteString {
    public static void main(String[] args){

        String invertida = "";
        Scanner entrada = new Scanner(System.in);

        System.out.println("Digite uma frase que deseja inverter:");
        String original = entrada.nextLine();

        // Percorre a string original de trás para frente e adiciona cada caractere à string invertida.
        for (int i = original.length() - 1; i >= 0; i--) {
            invertida = invertida + original.charAt(i);
        }

        //Mostra a String original e a invertida.
        System.out.println("String original: " + original);
        System.out.println("String invertida: " + invertida);




    }


}
