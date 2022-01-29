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
public abstract class Figura implements IFigura {
        float area;

	public void setArea(float area) {
		this.area = area;
	}

	public float getArea() {
		return area;
	}
}
