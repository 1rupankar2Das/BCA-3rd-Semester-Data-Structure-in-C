import java.util.*;
public class sort_array 
{
    public static int[] arr = new int[10];
    public static void input() 
	{
        for (int i = 0; i < 10; i++) 
		{
            Scanner scn = new Scanner(System.in);
            System.out.println("Enter 10 number");
            arr[i] = scn.nextInt();
        }
    }
    public static void find_max_min() 
	{
        Arrays.sort(arr);
        System.out.println("The maximum number is"+ arr[9]);
        System.out.println("The minimum number is"+ arr[0]);
    }
    public static void main(String[] args) 
	{
        input();
        find_max_min();
    }
}
