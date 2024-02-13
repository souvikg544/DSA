class LL{
    Node head;
    class Node{
        String data;
        node next;
    }

    Node(String data){
        this.data=data;
        this.next=null;
    }

    //add--first,last..
    public void addFirst(String data)
    {
        Node newNode=new Node(data);
        if(head==null)
        {
            head=newNode;
            return;
        }

        newNode.next=head;
        head=newNode;
    }

    public void addLast(String data)
    {
        Node newNode=new Node(data);
        if(head==null)
        {
            head=newNode;
            return;
        }

        Node currNde=head;
        while(currNode.next!=null)
        {
            currNode=currNode.next;
        }
        currNode.next=newNode;
    }

    //print
    public void printList(){
        if(head==null)
        {
            System.out.println("list is empty..");
            return;
        }

        Node currNode=head;
        while(currNode!=null)
        {
            System.out.print(currNode.data+"->");
            currNode=currNode.next;
        }
        System.out.println("null");
    }
}
public class LL {
    public static void main(String args[])
    {
        LL list=new LL();
        list.addFirst("a");
        list.addFirst("is");
        list.printList();
    }
    
}
