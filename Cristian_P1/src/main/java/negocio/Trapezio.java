/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package negocio;

/**
 *
 * @author cristian
 */
public class Trapezio extends Figura {
    float baseMenor; 
    float baseMaior;
    float altura;

    public Trapezio(float baseMenor, float baseMaior, float altura) {
        this.baseMenor = baseMenor;
        this.baseMaior = baseMaior;
        this.altura = altura;
    }

    @Override
    public void calcularArea() {
        float result = ((baseMenor + baseMaior) * altura ) / 2;
        this.setArea(result);
    }
}
