package Pagamento;

public class Calculo_Salario {

    double fator_dias;
    double fator_horas;

    public double Calculo_Salario(Salario r) {
        fator_dias = r.get_dias_trabalhados() / 30;
        fator_horas = r.get_horas_trabalhadas() / 8;

        return r.get_salario() * fator_horas * fator_dias;

    }
}
