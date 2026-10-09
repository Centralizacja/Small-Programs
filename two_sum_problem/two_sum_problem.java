import java.lang.Integer;

public class two_sum_problem {

    String[] nums = null;
    int target;

    public two_sum_problem() {

        /*
        This constructor is just to initialize the actual list for demonstrations
        */
        
        String ints = "57, 10, 3, 61, 88, 15, 7, 81, 17, 4, 31, 51, 63, 75, 90, 54, 7, 68, 69, 64, 8, 19, 15, 62, 94, 87, 40, 61, 71, 17";
        target = 67;

        nums = ints.split(", ");

    }

    private String n_squared_complexity() {

        for (int i=0; i<nums.length;i++) {
            for (int k=0; k<nums.length;k++) {
                if (Integer.parseInt(nums[i]) + Integer.parseInt(nums[k]) == target && i!=k) {
                    return "index 1: "+i+" ("+nums[i]+"), index 2: "+k+" ("+nums[k]+"), target: "+target;
                }
            }
        }
        return "There is no pair";

    }
    
    public static void main(String[] args) {

        two_sum_problem obj = new two_sum_problem();
        System.out.println(obj.n_squared_complexity());

    }

}