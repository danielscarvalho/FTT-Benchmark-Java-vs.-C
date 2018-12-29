import java.io.*;
import java.util.Scanner;

//Source: https://stackoverflow.com/questions/29662971/java-faster-than-c

public class SortArray {
public static void main(String[] args) throws IOException {
    System.out.println("Hello world");
    Scanner s = new Scanner(new File("bigarray.txt"));

    int[] array = new int[100000];
    for(int i=0; i<100000; i++) {
        array[i] = s.nextInt();
    }


    for(int i=0; i<array.length; i++) {
        for(int j=i+1; j<array.length; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i=0; i<array.length; i++) {
        System.out.print(array[i] + ", ");
    }

}
}
