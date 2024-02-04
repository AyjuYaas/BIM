class A19_Array_Sort{
    public static void main(String[] args){
        int[] a = {44, 33, 69, 96, 77, 12};
        int i, j, temp, flag = 0;
        do{
            flag = 0;
            for(i=0; i<5; i++){
                j = i+1;
                if(a[i]>a[j]){
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;

                    flag = 1;
                }
            }
        }while(flag == 1);
        for(i=0; i<6; i++){
            System.out.print(a[i] + "\t");
        }
    }
}