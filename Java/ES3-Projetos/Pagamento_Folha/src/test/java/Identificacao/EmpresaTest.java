package Identificacao;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class EmpresaTest {
    
    public EmpresaTest() {
        System.out.println("Suite de test da classe Empresa");
    }

    @org.junit.jupiter.api.BeforeAll
    public static void setUpClass() throws Exception {
    }

    @org.junit.jupiter.api.AfterAll
    public static void tearDownClass() throws Exception {
    }

    @org.junit.jupiter.api.BeforeEach
    public void setUp() throws Exception {
    }

    @org.junit.jupiter.api.AfterEach
    public void tearDown() throws Exception {
    }
    

    @org.junit.jupiter.api.Test
    public void testSet_nome_Empresa() {
        
        System.out.println("Test set_nome_Empresa");
        
        String nome_Empresa = "fatec";
        Empresa instance = new Empresa();
        
        instance.set_nome_Empresa(nome_Empresa);
        
        assertEquals(nome_Empresa, instance.get_nome_Empresa());
    }


    @org.junit.jupiter.api.Test
    public void testSetSecao() {
        System.out.println("Test setSecao");
        String secao = "01";
        Empresa instance = new Empresa();
        instance.setSecao(secao);
        assertEquals(secao, instance.getSecao());
    }

    
    @org.junit.jupiter.api.Test
    public void testGet_nome_Empresa() {
        System.out.println("Test get_nome_Empresa");
        
        Empresa instance = new Empresa();
        instance.set_nome_Empresa("Fatec");
        String expResult = "Fatec";
        String result = instance.get_nome_Empresa();
        assertEquals(expResult, result);
    }

    @org.junit.jupiter.api.Test
    public void testGetSecao() {
        System.out.println("getSecao");
        
        Empresa instance = new Empresa();
        
        String expResult = "01";
        instance.setSecao(expResult);
        String result = instance.getSecao();
        assertEquals(expResult, result);
    }
    
}
