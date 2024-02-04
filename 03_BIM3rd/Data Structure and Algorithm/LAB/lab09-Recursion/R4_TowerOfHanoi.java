public class R4_TowerOfHanoi {
    static void towerOfHanoi(char from, char to, char temp, int n) {
        if (n == 1) {
            System.out.println("Move disk 1 from " + from + " to " + to);
            return;
        }
        towerOfHanoi(from, temp, to, n - 1);
        System.out.println("Move Disk " + n + " from " + from + " to " + to);
        towerOfHanoi(temp, to, from, n - 1);
    }

    public static void main(String[] args) {
        char from = 'A';
        char to = 'C';
        char temp = 'B';

        char numberOfDisk = 4;
        towerOfHanoi(from, to, temp, numberOfDisk);
    }
}
