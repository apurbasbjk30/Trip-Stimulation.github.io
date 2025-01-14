#include <iostream>
using namespace std;
class trip {
public:
    int speed;
    int t[8];
    double total_dis = 0;
    double total_time = 0;
};

class trip1:public trip{
    public:
    
    int Reach_h=9;
    int Reach_m=0;
    int Reach_s=0;
    double dis[7] = {0.5, 8.5, 10, 8, 7, 5, 1};
        // Constructor to get speed
    trip1() {
        
        
        cout << "Enter the speed you want to travel: ";
        cin >> speed;
    }
    
    void total_dis_func() {
        for (int i = 0; i < 7; i++) {
            total_dis = total_dis+ dis[i];
        }
        cout << "Total Distance is: " << total_dis << " km" << endl;
    }

    void Time_taken() {
        // Calculate the time taken 
        for (int i = 0; i < 7; i++) {
            t[i] = dis[i] / speed * 3600; // time in seconds
            total_time += t[i];
        }

    }
 void dis_speed() {
        double Avg_speed = total_dis / (total_time / 3600); // Average speed in km/h
        cout << "Average Speed for the trip is: " << Avg_speed << " km/h" << endl;
    }

int avg_speed() {
        double Avg_speed = total_dis / (total_time / 3600);
      return Avg_speed;
    }
void Time_reached() {
       
     for (int i = 0; i < 7; i++) {
            // Convert seconds to hours, minutes, and seconds
      Reach_s = Reach_s+ (t[i] % 60);
            if(Reach_s>=60){
                Reach_s=Reach_s/60;
                int k = Reach_s/60;
                Reach_m= Reach_m + k;
            }
          
       Reach_m = Reach_m+((t[i] % 3600) / 60);
              Reach_h = Reach_h+(t[i] / 3600);
              
    cout << "Reached time for segment " << i + 1 << " is " 
                 << Reach_h << ":" << Reach_m << ":" << Reach_s <<   endl;
       
    }
     }
     
     void rest_time() {
    // Target time: 24 hours
    int reporting_h = 11;
    int reporting_m = 0;
    int reporting_s = 0;
    
    // Calculate the difference between target time and reached time
    int Rest_h = reporting_h - Reach_h;
    int Rest_m = reporting_m - Reach_m;
    int Rest_s = reporting_s - Reach_s;
    // Adjust for negative seconds
    if (Rest_s < 0) {
        Rest_s += 60;  // Add 60 seconds
        Rest_m--;      // Subtract 1 minute
    }

    // Adjust for negative minutes
    if (Rest_m < 0) {
        Rest_m += 60;  // Add 60 minutes
        Rest_h--;      // Subtract 1 hour
    }

    // Output the rest time
    if (Rest_h < 0 || (Rest_h == 0 && Rest_m <= 0 && Rest_s <= 0)) {
        cout << "No rest time remaining. You have already reached the target or exceeded it." << endl;
    } else {
        cout << "Rest time is: " << Rest_h << " hours " << Rest_m << " minutes " << Rest_s << " seconds" << endl;
    }
cout<<" IT WILL REST and start from 11 AM - the Reporting time. "<<endl<<endl;
}

 
};

 class trip2:public trip{
    public:
    int Reach_h=11;
       int Reach_m=0;
       int Reach_s=0;
     double dis[6] = {1,5,7,8,2.5,8.5};
        // Constructor to get speed
    trip2() {
      cout << "Enter the speed you want to travel: ";
        cin >> speed;
    }

    void total_dis_func() {
        for (int i = 0; i < 6; i++) {
            total_dis += dis[i];
        }
        cout << "Total Distance is: " << total_dis << " km" << endl;
    }

    void Time_taken() {
        // Calculate the time taken 
        for (int i = 0; i < 6; i++) {
            t[i] = dis[i] / speed * 3600; // time in seconds
            total_time += t[i];
        }

      
    }
     void dis_speed() {
        double Avg_speed = total_dis / (total_time / 3600); // Average speed in km/h
        cout << "Average Speed for the trip is: " << Avg_speed << " km/h" << endl;
    }
    
    
     int avg_speed() {
        double Avg_speed = total_dis / (total_time / 3600);
      return Avg_speed;
    }
    
     void Time_reached() {
       
        for (int i = 0; i < 6; i++) {
            // Convert seconds to hours, minutes, and seconds
            Reach_s = Reach_s+ (t[i] % 60);
            if(Reach_s>=60){
                Reach_s=Reach_s/60;
                int k = Reach_s/60;
                Reach_m= Reach_m + k;
            }
          
            Reach_m = Reach_m+((t[i] % 3600) / 60);
              Reach_h = Reach_h+(t[i] / 3600);
        cout << "Reached time for segment " << i + 1 << " is " 
                 << Reach_h << ":" << Reach_m << ":" << Reach_s <<   endl;
       
        }
    }
    
         void rest_time() {
    // Target time: 24 hours
    int reporting_h = 13;
    int reporting_m = 0;
    int reporting_s = 0;
    
    // Calculate the difference between target time and reached time
    int Rest_h = reporting_h - Reach_h;
    int Rest_m = reporting_m - Reach_m;
    int Rest_s = reporting_s - Reach_s;
    // Adjust for negative seconds
    if (Rest_s < 0) {
        Rest_s += 60;  // Add 60 seconds
        Rest_m--;      // Subtract 1 minute
    }

    // Adjust for negative minutes
    if (Rest_m < 0) {
        Rest_m += 60;  // Add 60 minutes
        Rest_h--;      // Subtract 1 hour
    }

    // Output the rest time
    if (Rest_h < 0 || (Rest_h == 0 && Rest_m <= 0 && Rest_s <= 0)) {
        cout << "No rest time remaining. You have already reached the target or exceeded it." << endl;
    } else {
        cout << "Rest time is: " << Rest_h << " hours " << Rest_m << " minutes " << Rest_s << " seconds" << endl;
    }
cout<<" IT WILL REST and start from 1 pm-the Reporting time. "<<endl<<endl;
}

    };

 class trip3:public trip{
    public:
    double dis[6] = {8.5,2.5,8,7,5,1};
    int Reach_h=1;
       int Reach_m=0;
       int Reach_s=0;
        // Constructor to get speed
    trip3() {
        
        
        cout << "Enter the speed you want to travel: ";
        cin >> speed;
    }


    void total_dis_func() {
        for (int i = 0; i < 6; i++) {
            total_dis += dis[i];
        }
        cout << "Total Distance is: " << total_dis << " km" << endl;
    }

    void Time_taken() {
        // Calculate the time taken 
        for (int i = 0; i < 6; i++) {
            t[i] = (dis[i] / speed) * 3600; // time in seconds
            total_time += t[i];
        }
    }

     void dis_speed() {
        double Avg_speed = total_dis / (total_time / 3600); // Average speed in km/h
        cout << "Average Speed for the trip is: " << Avg_speed << " km/h" << endl;
    }
    
    
     int avg_speed() {
        double Avg_speed = total_dis / (total_time / 3600);
      return Avg_speed;
    }
     void Time_reached() {
        
        for (int i = 0; i < 6; i++) {
            // Convert seconds to hours, minutes, and seconds
            Reach_s = Reach_s+ (t[i] % 60);
            if(Reach_s>=60){
                Reach_s=Reach_s/60;
                int k = Reach_s/60;
                Reach_m= Reach_m + k;
            }
          
            Reach_m = Reach_m+((t[i] % 3600) / 60);
              Reach_h = Reach_h+(t[i] / 3600);
        cout << "Reached time for segment " << i + 1 << " is " 
                 << Reach_h << ":" << Reach_m << ":" << Reach_s <<   endl;
       
        }
    }
    
         void rest_time() {
    // Target time: 24 hours
    int reporting_h = 3;
    int reporting_m = 0;
    int reporting_s = 0;
    
    // Calculate the difference between target time and reached time
    int Rest_h = reporting_h - Reach_h;
    int Rest_m = reporting_m - Reach_m;
    int Rest_s = reporting_s - Reach_s;
    // Adjust for negative seconds
    if (Rest_s < 0) {
        Rest_s += 60;  // Add 60 seconds
        Rest_m--;      // Subtract 1 minute
    }

    // Adjust for negative minutes
    if (Rest_m < 0) {
        Rest_m += 60;  // Add 60 minutes
        Rest_h--;      // Subtract 1 hour
    }

    // Output the rest time
    if (Rest_h < 0 || (Rest_h == 0 && Rest_m <= 0 && Rest_s <= 0)) {
        cout << "No rest time remaining. You have already reached the target or exceeded it." << endl;
    } else {
        cout << "Rest time is: " << Rest_h << " hours " << Rest_m << " minutes " << Rest_s << " seconds" << endl<<endl;
    }
cout<<" IT WILL REST and start  from 3 pm- the Reporting time. "<<endl<<endl;
}

    };
    class trip4:public trip{
        public:
           double dis[1] = {19};
           int Reach_h=3;
           int Reach_m=0;
           int Reach_s=0;
        // Constructor to get speed
    trip4() {
     
        cout << "Enter the speed you want to travel: ";
        cin >> speed;
    }
    
    void total_dis_func() {
        for (int i = 0; i < 1; i++) {
            total_dis += dis[i];
        }
        cout << "Total Distance is: " << total_dis << " km" << endl;
    }

    void Time_taken() {
        // Calculate the time taken 
        for (int i = 0; i < 1; i++) {
            t[i] = dis[i] / speed * 3600; // time in seconds
            total_time += t[i];
        }

      
    }
 void dis_speed() {
        double Avg_speed = total_dis / (total_time / 3600); // Average speed in km/h

        cout << "Average Speed for the trip is: " << Avg_speed << " km/h" << endl;
    }
    
    
     int avg_speed() {
        double Avg_speed = total_dis / (total_time / 3600);
      return Avg_speed;
    }
    
     void Time_reached() {
       
        for (int i = 0; i < 1; i++) {
            // Convert seconds to hours, minutes, and seconds
            Reach_s = Reach_s+ (t[i] % 60);
            if(Reach_s>=60){
                Reach_s=Reach_s/60;
                int k = Reach_s/60;
                Reach_m= Reach_m + k;
            }
          
            Reach_m = Reach_m+((t[i] % 3600) / 60);
              Reach_h = Reach_h+(t[i] / 3600);
        cout << "Reached time for segment " << i + 1 << " is " 
                 << Reach_h << ":" << Reach_m << ":" << Reach_s <<   endl;
       
        }
    }
    
         void rest_time() {
    // Target time: 24 hours
    int reporting_h = 4;
    int reporting_m = 45;
    int reporting_s = 0;
    
    // Calculate the difference between target time and reached time
    int Rest_h = reporting_h - Reach_h;
    int Rest_m = reporting_m - Reach_m;
    int Rest_s = reporting_s - Reach_s;
    // Adjust for negative seconds
    if (Rest_s < 0) {
        Rest_s += 60;  // Add 60 seconds
        Rest_m--;      // Subtract 1 minute
    }

    // Adjust for negative minutes
    if (Rest_m < 0) {
        Rest_m += 60;  // Add 60 minutes
        Rest_h--;      // Subtract 1 hour
    }

    // Output the rest time
    if (Rest_h < 0 || (Rest_h == 0 && Rest_m <= 0 && Rest_s <= 0)) {
        cout << "No rest time remaining. You have already reached the target or exceeded it." << endl;
    } else {
        cout << "Rest time is: " << Rest_h << " hours " << Rest_m << " minutes " << Rest_s << " seconds" << endl<<endl;
    }
cout<<" IT WILL REST and start from 4.45 pm to reach the reporting time 5 pm "<< endl<<endl;
}

    };
    class trip5:public trip{
        public:
        double dis[1] = {19};
        
        // Constructor to get speed
    trip5() {
        
        cout << "Enter the speed you want to travel: ";
        cin >> speed;
    }
    void total_dis_func() {
        for (int i = 0; i < 1; i++) {
            total_dis += dis[i];
        }
        cout << "Total Distance is: " << total_dis << " km" << endl;
    }

    void Time_taken() {
        // Calculate the time taken 
        for (int i = 0; i < 1; i++) {
            t[i] = dis[i] / speed * 3600; // time in seconds
            total_time += t[i];
        }

      
    }


     void dis_speed() {
        double Avg_speed = total_dis / (total_time / 3600); // Average speed in km/h
        cout << "Average Speed for the trip is: " << Avg_speed << " km/h" << endl;
    }
    
    
     int avg_speed() {
        double Avg_speed = total_dis / (total_time / 3600);
      return Avg_speed;
    }
    
     void Time_reached() {
       int Reach_h=4;
       int Reach_m=45;
       int Reach_s=0;
        for (int i = 0; i < 1; i++) {
            // Convert seconds to hours, minutes, and seconds
            Reach_s = Reach_s+ (t[i] % 60);
            if(Reach_s>=60){
                Reach_s=Reach_s/60;
                int k = Reach_s/60;
                Reach_m= Reach_m + k;
            }
          
            Reach_m = Reach_m+((t[i] % 3600) / 60);
              Reach_h = Reach_h+(t[i] / 3600);
        cout << "Reached time for segment " << i + 1 << " is " 
                 << Reach_h << ":" << Reach_m << ":" << Reach_s <<   endl<<endl;
       
        }
    }
 };


int main() {
    trip1 obj1;
    obj1.total_dis_func();
    obj1.Time_taken();
    obj1.Time_reached();
    obj1.dis_speed();
     obj1.rest_time();
    int a= obj1.avg_speed();
    
    trip2 trip2;
    trip2.total_dis_func();
    trip2.Time_taken();
    trip2.Time_reached();
    trip2.dis_speed();
    trip2.rest_time();
    int b= trip2.avg_speed();
    
    trip3 trip3;
    trip3.total_dis_func();
    trip3.Time_taken();
    trip3.Time_reached();
    trip3.dis_speed();
    trip3.rest_time();
     int c= trip3.avg_speed();
    
    trip4 trip4;
    trip4.total_dis_func();
    trip4.Time_taken();
    trip4.Time_reached();
    trip4.dis_speed();
    trip4.rest_time();
     int d= trip4.avg_speed();
    
    trip5 trip5;
    trip5.total_dis_func();
    trip5.Time_taken();
    trip5.Time_reached();
    trip5.dis_speed();
     int e= trip5.avg_speed();
    
    
    int Best_speed=(a+b+c+d+e)/5;
    
    cout<<"Best Speed of The CAR is:"<< Best_speed<<" Km/h"<<endl;
}