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
public class Circulo implements IFigura{
    private double raio;
    private double area;
    private double perimetro;
    
    public Circulo(double raio){
        this.setRaio(raio);
    }

    @Override
    public void calcularArea(){
        this.area = Math.PI * (this.getRaio() * this.getRaio());
    }
    @Override
    public void calcularPerimetro(){
        this.perimetro = 2 * Math.PI * this.getRaio();
    }

    public double getRaio(){
        return raio;
    }

    public void setRaio(double raio){
        this.raio = raio;
    }
    
    public double getArea(){
        return this.area;
    }
    
    public double getPerimetro() {
        return this.perimetro;
    }
}
