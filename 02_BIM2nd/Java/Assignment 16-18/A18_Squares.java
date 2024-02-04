public class A18_Squares {
    public static void main(String[] args){
        int i, square;
        System.out.println("Number\tSquare");
        for(i=1; i<=10; i++){
            square = (int)Math.pow(i, 2);
            System.out.println(i+"\t"+square);
        }
    }
}
