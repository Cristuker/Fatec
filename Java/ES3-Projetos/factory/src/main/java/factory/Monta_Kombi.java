package factory;

public class Monta_Kombi implements Servicos_Montagem {
    
    public Instala_Acessorio Instala(){
        System.out.println("kombi acessório: rádio AM/FM");
        return null;
    }
    
    public Faz_Pintura Pintura(){
        System.out.println("kombi pintura: tipo saia e blusa \n cor: verde e branco");
        return null;
    }
    
    public Instalar_Motor instala_Motor(){
        System.out.println("kombi motor: v2");
        return null;
    }
}
