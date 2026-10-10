public class lcsp {
    int[] nums = {1,2,3,4,6,78,8,1,2,3,4,5,6};
    int record=1;

    public lcsp() {
        int counter=1;
        for (int i=1;i<nums.length;i++) {
            if ((nums[i]-1)==nums[i-1]) {
                ++counter;
                record = (counter>record) ? counter : record;
            }
            else {
                counter=1;
            }
        }
    }

    public int result() {
        return record;
    }


    public static void main(String[] args) {

        lcsp obj = new lcsp();

        System.out.println(obj.result());

    }
}