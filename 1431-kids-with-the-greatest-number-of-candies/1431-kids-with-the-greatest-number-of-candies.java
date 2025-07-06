
class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max=0;
        for(int i: candies){
            if(i>max){
                max=i;
            }
        }
        ArrayList<Boolean> list = new ArrayList<>();
        for(int i: candies){
            if((i+extraCandies)>=max){
                list.add(true);
            }else{
                list.add(false);
            }

            
        }return list;
        
    }
}