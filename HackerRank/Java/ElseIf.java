    import java.io.*;
    import java.util.*;
    import java.text.*;
    import java.math.*;
    import java.util.regex.*;
    import java.lang.Object;

    public class ElseIf {

        public static void main(String[] args) {

            Scanner sc=new Scanner(System.in);
            int n=sc.nextInt();            
            String ans="";
            if(n%2==1){
              ans = "Weird";
            }
            else{
                if(n >  1 && n < 5){
                    ans = "Not Weird";
                }
                   
                else if(n > 5 && n < 21){
                    ans = "Weird";
                }
                    
                else if(n > 20){
                    ans = "Not Weird";
                }                   
                    
               //Complete the code
                
            }
            System.out.println(ans);
            
        }
    }
