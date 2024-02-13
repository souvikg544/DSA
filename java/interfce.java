//all unneceesary information-->hide and important information is visible only..
//interface have not constructor..

interface animal{
    int eyes=2;
    public void walk();
    public void eyes();
}

class horse implements animal{
    public void walk(){
        System.out.println("walk on 4 legs..");
    }

    public void eyes(){
        System.out.println("2 eyes..");
    }
}


public class interfce {
    public static void main(String args[])
    {
        horse horse=new horse();
        horse.walk();
        horse.eyes();
    }
    
}
