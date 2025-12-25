class Solution {

    public List<Integer> luckyNumbers(int[][] matrix) {

        int rows = matrix.length, cols = matrix[0].length;

        int minInRow = Integer.MAX_VALUE, maxInCol = Integer.MIN_VALUE, minMaxRow = Integer.MIN_VALUE, maxMinCol = Integer.MAX_VALUE;

        for (int row = 0; row < rows; row++){
                minInRow = Integer.MAX_VALUE;   
            for (int col = 0; col < cols; col++){
                minInRow = Math.min (minInRow,matrix[row][col]);
            }
            minMaxRow = Math.max (minMaxRow,minInRow);
        }


        for (int i = 0; i < cols; i++){
            maxInCol = Integer.MIN_VALUE;
            for (int j = 0;j < rows; j++){
                maxInCol = Math.max (maxInCol,matrix[j][i]);
            }
            maxMinCol = Math.min (maxMinCol,maxInCol);
        }

    List <Integer> result = new ArrayList <Integer>();
        if (maxMinCol == minMaxRow) result.add(maxMinCol);
     return result;
    }
}