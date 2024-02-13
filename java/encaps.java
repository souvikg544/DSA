

abstract class animal{
    abstract void walk();
    animal(){
        System.out.println("you can create a horse");
    }
    public void eat()
    {
       System.out.println("animal eats..");
    }

    
}


class horse extends animal{
    horse(){
        System.out.println("you are a horse..");
    }
    public void walk()
    {
        System.out.println("walk on 4 legs");
    }

}



class chicken extends animal{
    public void walk(){
        System.out.println("walk on 2 legs");
    }
}



public class encaps {
    public static void main(String args[]){
        horse horse=new horse();
        // horse.walk();
        // horse.eat();

    }

    
}
