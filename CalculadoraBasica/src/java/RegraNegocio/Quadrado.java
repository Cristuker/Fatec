/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package RegraNegocio;

/**
 *
 * @author Usuário
 */
public class Quadrado implements IFigura{
    private double lado;
    private double area;
    private double perimetro;

    public Quadrado(double lado){
        this.setLado(lado);
    }
    
    @Override
    public void calcularArea(){
        this.area =  this.getLado() * this.getLado();
    }

    public void calcularPerimetro(){
        double resultado = this.lado + this.lado + this.lado + this.lado;
        this.perimetro = resultado;
    }

    public double getLado(){
        return this.lado;
    }

    public void setLado(double lado){
        this.lado = lado;
    }
    
    public double getArea(){
        return this.area;
    }
    
    public double getPerimetro() {
        return this.perimetro;
    }

    
}
