package factory;

public class Encapsula_Objetos_Factory {
    
    public Servicos_Montagem Acabamento(String modelo){
        
        Servicos_Montagem carro = null;
        
        if(modelo.equals("kombi")){
            carro =  new Monta_Kombi();
        }
        
        if(modelo.equals("fusca")){
            carro = new Monta_Fusca();
        }
        
        if(modelo.equals("brasilia")){
            carro = new Monta_Brasilia();
        }
        
        return carro;
    }
    
    public Montagem_Completa Acabamento_Padrao(String acabamento){
        
        Montagem_Completa carro_standard = null;
        
        if(acabamento.equals("acessorio")){
            carro_standard = new Instala_Acessorio();
        }
        
        if(acabamento.equals("pintura")){
            carro_standard =  new Faz_Pintura();
        }
        return carro_standard;
    }
    
    public Funilaria FunilariaCompleta(){
        Funilaria carro = null;
        carro = new Recupera_Pintura();
        return null;
        
    }
    
}
