import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class PascalOptimal {
    public static void main(String[] args) {
        List<List<Integer>> result = new ArrayList<>();
        result = printPascal(30);
        for(int i=0; i< result.size(); i++){
            for(int j=0; j<=i; j++){
                System.out.print(result.get(i).get(j));
            }
            System.out.println();
        }
    }

    public static List<List<Integer>> printPascal(int n) {
        List<List<Integer>> final_result = new ArrayList<>();
        HashMap<String,Integer> cache_map = new HashMap<>();
        int tempValue = 0;

        for(int row = 0; row<n; row++){
            List<Integer> store_row_values = new ArrayList<>();
            for(int column = 0; column<=row; column++){
                if(cache_map.containsKey( (String.format("%s%s", row, column)) ) ){
                    store_row_values.add(cache_map.get((String.format("%s%s", row, column))));
                }
                else{
                    tempValue = PascalTriangleCalculator(row, column);
                    cache_map.put(String.format("%s%s", row, column), tempValue);
                    cache_map.put(String.format("%s%s", row, row-column), tempValue);
                    store_row_values.add(cache_map.get((String.format("%s%s", row, column))));
                }
            }
            final_result.add(store_row_values);
        }

        return final_result;
    }

    public static int PascalTriangleCalculator(int row, int column){
        if(row==0 || (column==0 || column==row)){
            return 1;
        }
        return PascalTriangleCalculator(row-1, column) + PascalTriangleCalculator(row-1, column-1);
    }
}
