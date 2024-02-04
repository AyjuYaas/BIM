import java.util.*;

class Time {
    int hr, min, sec;
    Time Sum(Time t1, Time t2){
        Time tsum = new Time();
        tsum.sec = t1.sec + t2.sec;
        if(tsum.sec > 60){
            tsum.min += 1;
            tsum.sec = 60-tsum.sec;
        }

        tsum.min = t1.min + t2.min;
        if(tsum.min > 60){
            tsum.hr += 1;
            tsum.min = 60-tsum.min;
        }

        tsum.hr = t1.hr + t2.hr;
        if(tsum.hr > 24){
            tsum.hr = 24-tsum.hr;
        }

        return tsum;
    }
}

class A33_TimeDemo {
    public static void main(String[] args) {
        Time[] t = new Time[2];
        Scanner scan = new Scanner(System.in);

        for(int i=0; i<2; i++){
            t[i] = new Time();
            System.out.print("Enter Hr Min Sec: ");
            t[i].hr = scan.nextInt();
            t[i].min = scan.nextInt();
            t[i].sec = scan.nextInt();
        }
        Time tsum = new Time();
        tsum = tsum.Sum(t[0], t[1]);
        System.out.println("Sum Time = " + tsum.hr + ":" + tsum.min + ":" +tsum.sec);
    }
}
