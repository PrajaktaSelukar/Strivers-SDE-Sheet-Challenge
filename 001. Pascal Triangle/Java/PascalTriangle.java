import java.io.*;
import java.util.* ;
import java.util.ArrayList;

public class PascalTriangle {
    public static void main(String[] args) {
        ArrayList<ArrayList<Long>> result = new ArrayList<>();
        result = printPascal(4);
        for(int i=0; i< result.size(); i++){
            for(int j=0; j<=i; j++){
                System.out.print(result.get(i).get(j));
            }
            System.out.println();
        }
    }

    public static ArrayList<ArrayList<Long>> printPascal(int n) {
        ArrayList<ArrayList<Long>> final_result = new ArrayList<>();
        HashMap<String,Long> cache_map = new HashMap<>();

        for(Long row = 0L; row<n; row++){
            ArrayList<Long> store_row_values = new ArrayList<>();
            for(Long column = 0L; column<=row; column++){
                if(cache_map.containsKey( (String.format("%s%s", row, column)) ) ){
                    store_row_values.add(cache_map.get((String.format("%s%s", row, column))));
                }
                else{
                    cache_map.put(String.format("%s%s", row, column), PascalTriangleCalculator(row, column));
                    store_row_values.add(cache_map.get((String.format("%s%s", row, column))));
                }
            }
            final_result.add(store_row_values);
        }
        return final_result;
    }

    public static Long PascalTriangleCalculator(Long row, Long column){
        if(row==0 || (column==0 || column==row)){
            return 1L;
        }
        return PascalTriangleCalculator(row-1, column) + PascalTriangleCalculator(row-1, column-1);
    }
}
