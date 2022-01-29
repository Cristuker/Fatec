package factory;

public class Monta_Fusca implements Servicos_Montagem {
    public Instala_Acessorio Instala(){
        System.out.println("Fusca acessório: antena e alto falante");
        return null;
    }
    
    public Faz_Pintura Pintura(){
        System.out.println("Fusca pintura: cor amarelo");
        return null;
    }

    public Instalar_Motor instala_Motor() {
        System.out.println("motor de fusca: motor de fuscar");
        return null;
    }
}
