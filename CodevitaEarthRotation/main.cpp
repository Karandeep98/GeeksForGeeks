#include <bits/stdc++.h>

using namespace std;

int main()
{

    float period_Of_Earths_Rotation;
    cin>>period_Of_Earths_Rotation;
    float longitude;
    cin>>longitude;
    float time = (period_Of_Earths_Rotation/360)*longitude;

    int hour=time;
    float decimal=time-hour;
    float minutes=decimal*60;
    //cout<<hour<<":"<<minutes;
    float hourhand = (hour*30) +(minutes/2); //      (minutes/60)*30 = (minutes/2)
    float minutehand = minutes*6;          //   (minutes/60)*360 = minutes*6
   float angle1,angle2;

    if(hourhand>=minutehand){
         angle1=hourhand-minutehand;
         angle2=360-angle1;
    }
    else{
         angle1=minutehand-hourhand;
         angle2=360-angle1;
    }
    float minimum = min(angle1,angle2);
    //printf("%.2f",minimum);
    cout<<minimum;

}
