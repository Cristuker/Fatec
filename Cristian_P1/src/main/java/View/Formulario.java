/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package View;

/**
 *
 * @author cristian
 */
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

import negocio.Retangulo;
import negocio.Triangulo;
import negocio.Trapezio;

public class Formulario {
    
	private JFrame form;
	private JLabel lblBaseRet, lblAlturaRet, lblBaseTri, lblAlturaTri, lblResultado, lblBaseMenorTra, lblBaseMaiorTra, lblAlturaTra;
	private JTextField txtBaseRet, txtAlturaRet, txtBaseTri, txtAlturaTri, txtBaseMenorTra, txtBaseMaiorTra, txtAlturaTra;
	private JButton btnTriangulo, btnTrapezio, btnRetangulo;
        
        public Formulario() {
		this.inicializarComponentes();
	}

	private void selectFigure(boolean isRetangulo, boolean isTriangulo, boolean isTrapezio) {
		lblBaseRet.setVisible(isRetangulo);
		txtBaseRet.setVisible(isRetangulo);
		lblAlturaRet.setVisible(isRetangulo);
		txtAlturaRet.setVisible(isRetangulo);
		txtBaseRet.setText("");
		txtAlturaRet.setText("");

		lblBaseTri.setVisible(isTriangulo);
		txtBaseTri.setVisible(isTriangulo);
		lblAlturaTri.setVisible(isTriangulo);
		txtAlturaTri.setVisible(isTriangulo);
		txtBaseTri.setText("");
		txtAlturaTri.setText("");

		lblBaseMenorTra.setVisible(isTrapezio);
		txtBaseMenorTra.setVisible(isTrapezio);
		lblBaseMaiorTra.setVisible(isTrapezio);
		txtBaseMaiorTra.setVisible(isTrapezio);
		lblAlturaTra.setVisible(isTrapezio);
		txtAlturaTra.setVisible(isTrapezio);
		txtBaseMenorTra.setText("");
		txtBaseMaiorTra.setText("");
		txtAlturaTra.setText("");
                lblResultado.setText("");
	}

	private void haveValue(KeyEvent event) {
		if (!Character.isDigit(event.getKeyChar())){
			event.consume();
		}
	}

	private void calRetangulo() {
		float base = Float.parseFloat(txtBaseRet.getText().isEmpty() ? "0": txtBaseRet.getText());
		float altura = Float.parseFloat(txtAlturaRet.getText().isEmpty() ? "0" : txtAlturaRet.getText());
		Retangulo retangulo = new Retangulo(base, altura);
		retangulo.calcularArea();
                float result = retangulo.getArea();
		lblResultado.setText(String.format("Resultado:  %.2f", result));
	}

	private void calcTriangulo() {
		float base = Float.parseFloat(txtBaseTri.getText().isEmpty() ? "0" : txtBaseTri.getText());
		float altura = Float.parseFloat(txtAlturaTri.getText().isEmpty() ? "0" : txtAlturaTri.getText());
		Triangulo triangulo = new Triangulo(base, altura);
		triangulo.calcularArea();
                float result = triangulo.getArea();
		lblResultado.setText(String.format("Resultado:  %.2f", result));
	}

	private void calcTrapezio() {
		float baseMenor = Float.parseFloat(txtBaseMenorTra.getText().isEmpty() ? "0" : txtBaseMenorTra.getText());
		float baseMaior = Float.parseFloat(txtBaseMaiorTra.getText().isEmpty() ? "0": txtBaseMaiorTra.getText());
		float altura = Float.parseFloat(txtAlturaTra.getText().isEmpty() ? "0": txtAlturaTra.getText());
		Trapezio trapezio = new Trapezio(baseMenor, baseMaior, altura);
		trapezio.calcularArea();
                float result = trapezio.getArea();
		lblResultado.setText(String.format("Resultado:  %.2f", result));
	}

	private void inicializarComponentes() {
		form = new JFrame("P1 Java");
		form.setBounds(400, 250, 500, 300);
		form.setLayout(null);
		form.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container content = form.getContentPane();

		this.generateBtn(content);
		this.generateRetanguloInfo(content);
		this.generateTrianguloInfo(content);
		this.generateTrapezioInfo(content);
                this.generateResult(content);
		form.setVisible(true);
	}

	private void generateBtn(Container content) {
                btnRetangulo = new JButton("Calcular Retângulo");
		btnRetangulo.setBounds(20, 50, 200, 40);
		btnRetangulo.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent event) {
				selectFigure(true, false, false);
			}
		});
		content.add(btnRetangulo);

		btnTriangulo = new JButton("Calcular Triângulo");
		btnTriangulo.setBounds(20, 100, 200, 40);
		btnTriangulo.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent event) {
				selectFigure(false, true, false);
			}
		});
		content.add(btnTriangulo);

		btnTrapezio = new JButton("Calcular Trapézio");
		btnTrapezio.setBounds(20, 150, 200, 40);
		btnTrapezio.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent event) {
				selectFigure(false, false, true);
			}
		});
		content.add(btnTrapezio);
	}
        
        private void generateRetanguloInfo(Container content) {
                lblBaseRet = new JLabel("Base:");
		lblBaseRet.setBounds(250, 30, 100, 25);
		lblBaseRet.setVisible(false);
		content.add(lblBaseRet);

		txtBaseRet = new JTextField("0");
		txtBaseRet.setBounds(330, 30, 100, 25);
		txtBaseRet.addKeyListener(new KeyListener() {
			@Override
			public void keyTyped(KeyEvent event) {
				haveValue(event);
			}

			@Override
			public void keyPressed(KeyEvent event) {}

			@Override
			public void keyReleased(KeyEvent event) {
				calRetangulo();
			}
		});
		txtBaseRet.setVisible(false);
		content.add(txtBaseRet);

		lblAlturaRet = new JLabel("Altura:");
		lblAlturaRet.setBounds(250, 70, 100, 25);
		lblAlturaRet.setVisible(false);
		content.add(lblAlturaRet);

		txtAlturaRet = new JTextField("0");
		txtAlturaRet.setBounds(330, 70, 100, 25);
		txtAlturaRet.addKeyListener(new KeyListener() {
			@Override
			public void keyTyped(KeyEvent event) {
				haveValue(event);
			}

			@Override
			public void keyPressed(KeyEvent event) {}

			@Override
			public void keyReleased(KeyEvent event) {
				calRetangulo();
			}
		});
		txtAlturaRet.setVisible(false);
		content.add(txtAlturaRet);
        }
        
        private void generateTrianguloInfo(Container content) {
                lblBaseTri = new JLabel("Base:");
		lblBaseTri.setBounds(250, 30, 100, 25);
		lblBaseTri.setVisible(false);
		content.add(lblBaseTri);

		txtBaseTri = new JTextField("0");
		txtBaseTri.setBounds(330, 30, 100, 25);
		txtBaseTri.addKeyListener(new KeyListener() {
			@Override
			public void keyTyped(KeyEvent event) {
				haveValue(event);
			}

			@Override
			public void keyPressed(KeyEvent event) {}

			@Override
			public void keyReleased(KeyEvent event) {
				if(!txtBaseTri.getText().isEmpty()) {
					calcTriangulo();
				} else {
					lblResultado.setText(String.format("Resultado: "));
				}
			}
		});
		txtBaseTri.setVisible(false);
		content.add(txtBaseTri);

		lblAlturaTri = new JLabel("Altura:");
		lblAlturaTri.setBounds(250, 70, 100, 25);
		lblAlturaTri.setVisible(false);
		content.add(lblAlturaTri);

		txtAlturaTri = new JTextField("0");
		txtAlturaTri.setBounds(330, 70, 100, 25);
		txtAlturaTri.addKeyListener(new KeyListener() {
			@Override
			public void keyTyped(KeyEvent event) {
				haveValue(event);
			}

			@Override
			public void keyPressed(KeyEvent event) {}

			@Override
			public void keyReleased(KeyEvent event) {
				calcTriangulo();
			}
		});
		txtAlturaTri.setVisible(false);
		content.add(txtAlturaTri);
        }

        private void generateTrapezioInfo(Container content) {
                lblBaseMenorTra = new JLabel("Base menor:");
		lblBaseMenorTra.setBounds(250, 30, 100, 25);
		lblBaseMenorTra.setVisible(false);
		content.add(lblBaseMenorTra);

		txtBaseMenorTra = new JTextField("0");
		txtBaseMenorTra.setBounds(350, 30, 100, 25);
		txtBaseMenorTra.addKeyListener(new KeyListener() {
			@Override
			public void keyTyped(KeyEvent event) {
				haveValue(event);
			}

			@Override
			public void keyPressed(KeyEvent event) {}

			@Override
			public void keyReleased(KeyEvent event) {
				calcTrapezio();
			}
		});
		txtBaseMenorTra.setVisible(false);
		content.add(txtBaseMenorTra);

		lblBaseMaiorTra = new JLabel("Base maior:");
		lblBaseMaiorTra.setBounds(250, 70, 100, 25);
		lblBaseMaiorTra.setVisible(false);
		content.add(lblBaseMaiorTra);

		txtBaseMaiorTra = new JTextField("0");
		txtBaseMaiorTra.setBounds(350, 70, 100, 25);
		txtBaseMaiorTra.addKeyListener(new KeyListener() {
			@Override
			public void keyTyped(KeyEvent event) {
				haveValue(event);
			}

			@Override
			public void keyPressed(KeyEvent event) {}

			@Override
			public void keyReleased(KeyEvent event) {
				calcTrapezio();
			}
		});
		txtBaseMaiorTra.setVisible(false);
		content.add(txtBaseMaiorTra);

		lblAlturaTra = new JLabel("Altura:");
		lblAlturaTra.setBounds(250, 110, 100, 25);
		lblAlturaTra.setVisible(false);
		content.add(lblAlturaTra);

		txtAlturaTra = new JTextField("0");
		txtAlturaTra.setBounds(350, 110, 100, 25);
		txtAlturaTra.addKeyListener(new KeyListener() {
			@Override
			public void keyTyped(KeyEvent event) {
				haveValue(event);
			}

			@Override
			public void keyPressed(KeyEvent event) {}

			@Override
			public void keyReleased(KeyEvent event) {
				calcTrapezio();
			}
		});
		txtAlturaTra.setVisible(false);
		content.add(txtAlturaTra);
        }
        
        private void generateResult(Container content) {
            	lblResultado = new JLabel("");
		lblResultado.setBounds(250, 150, 400, 25);
		content.add(lblResultado);
        }
}
