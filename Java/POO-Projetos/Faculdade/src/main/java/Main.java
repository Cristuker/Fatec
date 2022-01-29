
import java.util.Scanner;

public class Main{
    public static void main(String args []){
        /*Scanner scan = new Scanner(System.in);
        System.out.println("Digite uma disciplina");
        String data = scan.nextLine();
        Disciplina disciplina = new Disciplina(data,10,Curso.ADS);
        scan.close();
        disciplina.mostrarDados();
        disciplina.mostrarMensagem();*/
        
        Cartao cc = new Cartao("Cristian",100,TipoCartao.BLACK);
        
        cc.mostrarFatura();
    }
}