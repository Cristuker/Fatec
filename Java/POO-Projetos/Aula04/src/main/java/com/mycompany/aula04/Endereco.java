
package com.mycompany.aula04;

public class Endereco {
    private String logradouro, cidade;
    private Estado estado;
    
    Endereco(String logradouro, String cidade, Estado estado){
        this.logradouro = logradouro;
        this.cidade = cidade;
        this.estado = estado;
    }
    
    public void mostrarEndereco(){
        System.out.println("Estado: "+ estado);
        System.out.println("Cidade: "+ cidade);
        System.out.println("Logradouro: "+logradouro);
    }
}
