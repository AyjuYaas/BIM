public class A17_Prime_20_to_100 {
    public static void main(String[] args){
        int j, n, count;
        for(n=20; n<=100; n++){
            count = 0;
            for(j=1; j<=n; j++){
                if(n%j==0){
                    count++;
                }
            }
            if(count == 2){
                System.out.print(n+" ");
            }
        }
    }
    
}
