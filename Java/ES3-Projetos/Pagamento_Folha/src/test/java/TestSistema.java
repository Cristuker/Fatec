import Identificacao.Empresa;
import Identificacao.Funcionario;
import Pagamento.Calculo_Salario;
import Pagamento.Salario;
import Recursos_Humanos.RH_Central;
import static Recursos_Humanos.RH_Central.valores;
import java.io.ByteArrayOutputStream;
import java.io.PrintStream;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;

public class TestSistema {
    
    public TestSistema() {
    }
    
    @BeforeAll
    public static void setUpClass() {
    }
    
    @AfterAll
    public static void tearDownClass() {
    }
    
    @BeforeEach
    public void setUp() {
    }
    
    @AfterEach
    public void tearDown() {
    }

    @Test
    public void TestSystem() {
        System.out.println("Test do sistema");

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
        
        
        ByteArrayOutputStream outContent = new ByteArrayOutputStream();
        System.setOut(new PrintStream(outContent));
        
        
        RH_Central.Imprime(calSal, empresa, funcionario, salario);
    
    }
}
