public class queue {
    private int[] data;

    private static final int DEFAULT_SIZE = 10;

    int end = 0;

    public queue(){
        this(DEFAULT_SIZE);
    }

    public queue(int size){
        this.data = new int[size];
    }

    public boolean isFull() {
        return end == data.length; // ptr is at last index
    }

    public boolean isEmpty(){
        return end == 0;
    }

    public boolean insert(int item){
        if(isFull()){
            return false;
        }
        data[end++]=item;
        return true;
    }

    public int remove() throws Exception {
        if(isEmpty()){
            throw new Exception("queue is empty");
        }

        int removed=data[0];

        System.arraycopy(data, 1, data, 0, data.length - 1);
        end--;
        return removed;

    }

    public int front() throws Exception{
        if(isEmpty()){
            throw new Exception("queue is Empty");
        }
        return data[0];
    }

    public void display(){
        System.out.println("queue=>");
        for (int i = 0; i < end; i++) {
            System.out.print(data[i] + " <- ");
        }
        System.out.println("END");
    }

    public static void main(String[] args) throws Exception {
        queue queue = new queue();
        queue.insert(1);
        queue.insert(2);
        queue.insert(3);
        queue.insert(4);
        queue.insert(5);
        queue.insert(6);
        queue.insert(7);
        queue.insert(8);
        queue.insert(9);
        queue.insert(10);
        

        queue.display();

        System.out.println(queue.remove());
        System.out.println(queue.remove());
        System.out.println(queue.remove());
        System.out.println(queue.remove());
        System.out.println(queue.remove());

    }
}

