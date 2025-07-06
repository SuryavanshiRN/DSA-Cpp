class Solution {
    public boolean checkIfPangram(String sentence) {
        HashSet<Character> count= new HashSet<>();
        for (int i=0; i < sentence.length(); ++i) {
            count.add(sentence.charAt(i));
        }
        return count.size() == 26;
    }
}