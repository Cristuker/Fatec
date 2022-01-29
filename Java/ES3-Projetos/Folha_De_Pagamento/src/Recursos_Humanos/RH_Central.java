package Recursos_Humanos;

import Pagamento.Calculo_Salario;
import Pagamento.Salario;
import Identificação.Empresa;
import Identificação.Funcionario;

public class RH_Central {
	
	public static void main(String args[]) {
		Salario s = new Salario();
		Calculo_Salario c = new Calculo_Salario();
		Empresa d = new Empresa();
		Funcionario e = new Funcionario();
		
		s= valores(s);
		s.get_salario();
		d.set_nome_Empresa("Fábrica de Copos");
		d.set_seção("Modela Vidro");
		e.set_nome_funcionario("Francisco José");
		e.set_matrícula("654YFV800");
		Imprime(c, d, e, c);
	}
	
public static Salario valores(Salario r) {
	r.set_salario(1234.90);
	r.set_horas_trabalhadas(8.8);
	r.set_dias_trabalhados(28);
	
	return r;	
}

public static void Imprime(Calculo_Salario c, Empresa d, Funcionario e, Salario r) {
	System.out.println("Empresa:" + d.get_nome_Empresa());
	System.out.println("Seção:" + d.get_seção());
	System.out.println("Funcionário:" + e.get_nome_funcionario());
	System.out.println("Matrícula:" + e.get_matrícula());
	System.out.println("Salário: R$" + c.Calculo_Salario(r));
}
	
	
}