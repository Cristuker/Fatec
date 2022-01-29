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
public class Triangulo extends Figura {
    float base;
    float altura;

    public Triangulo(float base, float altura) {
        this.base = base;
        this.altura = altura;
    }

    @Override
    public void calcularArea() {
        float result = (base * altura) / 2;
        this.setArea(result);
    }
}
