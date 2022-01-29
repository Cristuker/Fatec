package Recursos_Humanos;

import Pagamento.Calculo_Salario;
import Pagamento.Salario;
import Identificacao.Empresa;
import Identificacao.Funcionario;

public class RH_Central {

    public static void main(String args[]) {
        
        Salario salario = new Salario();
        Calculo_Salario calSal = new Calculo_Salario();
        Empresa empresa = new Empresa();
        Funcionario funcionario = new Funcionario();

        salario = valores(salario);
        salario.get_salario();
        empresa.set_nome_Empresa("Fábrica de Copos");
        empresa.setSecao("Modela Vidro");
        funcionario.set_nome_funcionario("Francisco José");
        funcionario.setMatricula("654YFV800");
        Imprime(calSal, empresa, funcionario, salario);
    }

    public static Salario valores(Salario r) {
        r.set_salario(1234.90);
        r.set_horas_trabalhadas(8.8);
        r.set_dias_trabalhados(28);

        return r;
    }

    public static void Imprime(Calculo_Salario calSal, Empresa empresa, Funcionario funcionario, Salario salario) {
        System.out.println("Empresa:" + empresa.get_nome_Empresa());
        System.out.println("Seção:" + empresa.getSecao());
	System.out.println("Funcionario:" + funcionario.get_nome_funcionario());
        System.out.println("Matricula:" + funcionario.getMatricula());
	System.out.println("Salario: R$" + calSal.Calculo_Salario(salario));
    }

}
