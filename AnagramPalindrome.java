public class AnagramPalin {

    //T.C.=O(n), S.C.=O(1)
    static int isPossible (String S)
    {
        int count[]=new int[26];
        for (int i=0;i<S.length();i++)
        {
            count[S.charAt(i)-'a']++;
        }
        
        int c=0;
        for (int i=0;i<count.length;i++)
        {
            if (count[i]%2!=0)
                c+=1;
        }
        return (c>=2)?0:1;
    }

    public static void main(String[] args) {
        System.out.println(isPossible("geeksogeeks"));
    }
}
