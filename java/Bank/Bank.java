package Bank;

class Account{
    //1.for default tye
    //String name;

    //2.public--\

    public String name;


    //3. protected---
    protected String email;


    //4.private ..
    private String password;

    //to access private class we use getters and setters..

    //get fun--
    public String getPassword(){
        return this.password;
    }


    //put random fun in set password
    // public String getPassword(){
    //     setPassword(randomPass);
    //     return this.password;
    // }


    //set fun..
    public void setPassword(String pass)
    {
        this.password=pass;
    }

}
public class Bank {
    public static void main(String args[])
    {
        //this is public type access modifier
        Account account1=new Account();
        //to access use . operator
        account1.name="Apna college";
        account1.email="apnacollege@gmail.com";
        //account1.password="abcd";
        account1.setPassword("abcd");
        System.out.println(account1.getPassword());
    }

    
}



//encapsulation is-->in any class combine data and ther entity..
//data hiding possible..use access modifier..

//abstraction--visible important things and hide non important things..
//use abstract keyword 2. interfaces
