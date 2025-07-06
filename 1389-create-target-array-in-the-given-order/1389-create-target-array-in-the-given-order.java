class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {

    int ln=nums.length;

    int[] target=new int[ln];

    ArrayList<Integer> arrlist= new ArrayList<Integer>();
    for(int i = 0; i < ln; i++){
    
        arrlist.add(index[i],nums[i]);
    }

    for(int i = 0; i < ln; i++){
        target[i] = arrlist.get(i);
    }

    return target;
}
}