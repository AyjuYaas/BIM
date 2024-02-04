public class A15_Concept_continue {
    public static void main(String[] args){
        int i, j;
        for(j=1; j<=10; j++){
            if(j==7){
                continue;
            }
            for(i=1; i<=10; i++){
                if(i==7){
                    continue;
                }
                System.out.println(j+ "*" +i+ " = " +(j*i));
            }
            System.out.println("");
        }
    }
}
