import java.io.*;
import java.util.*;

public class Main {
	static int Process(long n) {
		int sum = 0;
		while (n > 0) {
			sum += (n % 10);
			n /= 10;
		}
		return sum;
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int tt = in.nextInt();
		while (tt > 0) {
			int n = in.nextInt();
			long[] a = new long[n];
			long[] b = new long[n];
			for (int i = 0; i < n; i++) {
				a[i] = in.nextLong();
				b[i] = in.nextLong();
			}
			int chef = 0;
			int morty = 0;
			for (int i = 0; i < n; i++) {
				if (Process(a[i]) > Process(b[i])) {
					chef++;
				} else if (Process(a[i]) < Process(b[i])) {
					morty++;
				} else {
					chef++;
					morty++;
				}
			}
			if (chef > morty) {
				System.out.println(0 + " " + chef);
			} else if (chef < morty) {
				System.out.println(1 + " " + morty);
			} else {
				System.out.println(2 + " " + chef);
			}
			tt--;
		}
	}
}
