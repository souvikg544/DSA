//multiple level inheritance..
interface animal{
    int eyes=2;
    void walk();

}

interface herbivores{

}

class horse implements animal,herbivores{
    public void walk(){
        System.out.println("walk on 4 legs..");
    }
}

public class inheriti {
    public static void main(String args[]){
        horse horse=new horse();
        horse.walk();
    }
    
}
