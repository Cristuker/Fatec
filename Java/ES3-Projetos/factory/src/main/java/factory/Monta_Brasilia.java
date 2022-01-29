package factory;

public class Monta_Brasilia implements Servicos_Montagem{
    
    public Instala_Acessorio Instala(){
        System.out.println("brasilia acessório: rádio AM");
        return null;
    }
    
    public Faz_Pintura Pintura(){
        System.out.println("brasilia pintura: completa \n cor: amarela");
        return null;
    }
    
    public Instalar_Motor instala_Motor(){
        System.out.println("brasilia motor: v8");
        return null;
    }

}
