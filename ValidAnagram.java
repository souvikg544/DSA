class Solution {
    public boolean isAnagram(String s, String t) {
        
      // if the lengths are not equal, then it cannot be an anagram
        if(s.length() != t.length()){
            return false;
        }
        
        // converting the string s to array and the sorting it and making it a string
        char[] temp = s.toCharArray();
        Arrays.sort(temp);
        s = new String(temp);
        
        // initializing temp with null to reuse it for string t
        temp = null;
        
        // converting the string t to array and the sorting it and making it a string
        temp = t.toCharArray();
        Arrays.sort(temp);
        t = new String(temp);

        // if both the strings are equal, return true else return false
        if(s.equalsIgnoreCase(t)){
            return true;
        }
        return false;
    }
}
