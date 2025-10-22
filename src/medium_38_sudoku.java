import java.util.*;

public class medium_38_sudoku {

    public static void main(String[] args)
    {
        System.out.println("one pass");
    }

    public boolean isValidSudokd_onepass(char[][] board) {

        Set<Character>[] rows = new HashSet[9];
        Set<Character>[] cols = new HashSet[9];
        Set<Character>[] boxes = new HashSet[9];

        for (int i = 0; i < 9; i++)
        {
            rows[i] = new HashSet<>();
            cols[i] = new HashSet<>();
            boxes[i] = new HashSet<>();
        }

        for (int r = 0; r < board.length; r++)
        {
            for (int c = 0; c < board[0].length; c++)
            {
                char num = board[r][c];
                if (num == '.') continue;

                // row 1 col 7 each box contains 9 valuesc
                int box_index = (r / 3) * 3 + (c / 3);

                if (rows[r].contains(num) ||
                    cols[c].contains(num) ||
                    boxes[box_index].contains(num))
                {
                    return false;
                }

                rows[r].add(num);
                cols[c].add(num);
                boxes[box_index].add(num);
            }
        }
        return true;
    }

    // slow run (can do in one pass)
    public boolean isValidSudoku_multiplepass(char[][] board) {
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
