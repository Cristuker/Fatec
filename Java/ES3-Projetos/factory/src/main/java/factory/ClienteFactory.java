package factory;

public class ClienteFactory {
    public static void main(String[] args) {
        
        Servicos_Montagem sm = null;
        Montagem_Completa mc = null;
        Encapsula_Objetos_Factory kf = new Encapsula_Objetos_Factory();
        
        sm = kf.Acabamento("kombi");
        sm.Instala();
        sm.Pintura();
        sm.instala_Motor();
        
        sm = kf.Acabamento("fusca");
        sm.Instala();
        sm.Pintura();
        sm.instala_Motor();
        
        sm = kf.Acabamento("brasilia");
        sm.Instala();
        sm.Pintura();
        sm.instala_Motor();
        
        mc = kf.Acabamento_Padrao("acessorio");
        mc.Instala();
        
        mc = kf.Acabamento_Padrao("pintura");
        mc.Pintura();
        
        kf.FunilariaCompleta();
    }
}
