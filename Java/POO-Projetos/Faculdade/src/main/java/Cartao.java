/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author cris
 */
public class Cartao {
    String nome;
    double valor;
    TipoCartao tipo;

    public Cartao(String nome, double valor, TipoCartao tipo) {
        this.nome = nome;
        this.valor = valor;
        this.tipo = tipo;
    }
    
    double descontar(){
        switch(tipo){
            case SILVER: {
                return 1;
            }
            case GOLD:{
                return 0.99;
            }
            case PLATINUM: {
                return 0.95;
            }
            default:
                return 0.85;
        }
    }
    
    void mostrarFatura(){
        System.out.println("Nome: " + nome);
        double valorDescontado = valor * descontar();
        System.out.println("Valor: " + valorDescontado);
        System.out.println("Tipo: " + tipo);
    }
    
}
