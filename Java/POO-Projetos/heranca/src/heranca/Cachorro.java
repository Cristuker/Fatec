package heranca;

/**
 *
 * @author csilva
 */
public class Cachorro extends Animal {
    
    public Cachorro(String nome) {
        super(nome);
    }
    
    public void latir(){
    /*
        get nome é valido porque esta definido na classe animal
        e cachorro é super classe
    */
        System.out.println(getNome() + "AU AU");
    }
}
