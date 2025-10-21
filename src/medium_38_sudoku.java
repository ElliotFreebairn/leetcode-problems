import java.util.*;

public class medium_38_sudoku {

    public static void main(String[] args)
    {
        System.out.println("hello");
    }

    // slow run (can do in one pass)
     public boolean isValidSudoku(char[][] board) {
        // row pass
        for (int r = 0; r < board.length; r++)
        {
            String numbers = "";
            for (int c = 0; c < board[0].length; c++)
            {
                String num = Character.toString(board[r][c]);
                if (numbers.contains(num)) {
                    return false;
                } 

                if (!num.equals(".")) {
                    numbers += num;
                    // System.out.println("picking " + num);
                }
            }
        }

        System.out.println("passed row");
        for (int c = 0; c < board[0].length; c++)
        {
            String numbers = "";
            for (int r = 0; r < board.length; r++)
            {  
                String num = Character.toString(board[r][c]);
                if (numbers.contains(num)) return false;

                if (!num.equals(".")) numbers += num;
            }
        }

        System.out.println("passed col");
        // square pass
        for (int r = 0; r < board.length; r +=3)
        {
            for (int c = 0; c < board[0].length; c+= 3)
            {
                List<Character> numbers = new ArrayList<>();
                for (int x = 0; x < 3; x++)
                {
                    for (int y = 0; y < 3; y++)
                    {
                        char num = board[r + x][c + y];
                        if (numbers.contains(num))  {
                            System.out.println(num);
                            return false;
                        }
                        

                        if (num != '.') numbers.add(num);
                    }
                }
            }
        }

        return true;
    }
}
