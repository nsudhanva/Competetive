import java.util.*;
import java.lang.Math.*;
import java.math.*;

class LASTDIG2{

	public static void main(String[] args){

		Scanner scan = new Scanner(System.in);
		int testCases = scan.nextInt();
		BigInteger a;
		BigInteger b;
		BigInteger lastDigit;

		for(int i = 0; i < testCases; i++){
			a = scan.nextBigInteger();
			b = scan.nextBigInteger();

			lastDigit = a.modPow(b, BigInteger.valueOf(10));

			System.out.println(lastDigit);
		}
    }
}
