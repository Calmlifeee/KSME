#include <SoftwareSerial.h>

#define BT_RXD 3
#define BT_TXD 2

SoftwareSerial bluetooth(BT_RXD, BT_TXD);

int analoginpin0 = A0;
int analoginpin1 = A1;

int sensorpin16 = A2;
int sensorpin17 = A3;
int sensorpin18 = A4;
int sensorpin19 = A5;
int sensorpin20 = A6;
int sensorpin21 = A7;
int sensorpin22 = A8;
int sensorpin23 = A9;
int sensorpin24 = A10;

int pin_A = 8;
int pin_B = 9;
int pin_C = 10;

int pin_D = 11;
int pin_E = 12;
int pin_F = 13;

int sensor0 = 0;
int sensor1 = 0;
int sensor2 = 0;
int sensor3 = 0;
int sensor4 = 0;
int sensor5 = 0;
int sensor6 = 0;
int sensor7 = 0;
int sensor8 = 0;
int sensor9 = 0;
int sensor10 = 0;
int sensor11 = 0;
int sensor12 = 0;
int sensor13 = 0;
int sensor14 = 0;
int sensor15 = 0;
int sensor16 = 0;
int sensor17 = 0;
int sensor18 = 0;
int sensor19 = 0;
int sensor20 = 0;
int sensor21 = 0;
int sensor22 = 0;
int sensor23 = 0;
int sensor24 = 0;

int sensor_sum0 = 0;
int sensor_sum1 = 0;
int sensor_sum2 = 0;
int sensor_sum3 = 0;
int sensor_sum4 = 0;
int sensor_sum5 = 0;
int sensor_sum6 = 0;
int sensor_sum7 = 0;
int sensor_sum8 = 0;
int sensor_sum9 = 0;
int sensor_sum10 = 0;
int sensor_sum11 = 0;
int sensor_sum12 = 0;
int sensor_sum13 = 0;
int sensor_sum14 = 0;
int sensor_sum15 = 0;
int sensor_sum16 = 0;
int sensor_sum17 = 0;
int sensor_sum18 = 0;
int sensor_sum19 = 0;
int sensor_sum20 = 0;
int sensor_sum21 = 0;
int sensor_sum22 = 0;
int sensor_sum23 = 0;
int sensor_sum24 = 0;

double sensor_ave0 = 0;
double sensor_ave1 = 0;
double sensor_ave2 = 0;
double sensor_ave3 = 0;
double sensor_ave4 = 0;
double sensor_ave5 = 0;
double sensor_ave6 = 0;
double sensor_ave7 = 0;
double sensor_ave8 = 0;
double sensor_ave9 = 0;
double sensor_ave10 = 0;
double sensor_ave11 = 0;
double sensor_ave12 = 0;
double sensor_ave13 = 0;
double sensor_ave14 = 0;
double sensor_ave15 = 0;
double sensor_ave16 = 0;
double sensor_ave17 = 0;
double sensor_ave18 = 0;
double sensor_ave19 = 0;
double sensor_ave20 = 0;
double sensor_ave21 = 0;
double sensor_ave22 = 0;
double sensor_ave23 = 0;
double sensor_ave24 = 0;

double total_sum = 0;

double sensor_dev0 = 0;
double sensor_dev1 = 0;
double sensor_dev2 = 0;
double sensor_dev3 = 0;
double sensor_dev4 = 0;
double sensor_dev5 = 0;
double sensor_dev6 = 0;
double sensor_dev7 = 0;
double sensor_dev8 = 0;
double sensor_dev9 = 0;
double sensor_dev10 = 0;
double sensor_dev11 = 0;
double sensor_dev12 = 0;
double sensor_dev13 = 0;
double sensor_dev14 = 0;
double sensor_dev15 = 0;
double sensor_dev16 = 0;
double sensor_dev17 = 0;
double sensor_dev18 = 0;
double sensor_dev19 = 0;
double sensor_dev20 = 0;
double sensor_dev21 = 0;
double sensor_dev22 = 0;
double sensor_dev23 = 0;
double sensor_dev24 = 0;

double afterdata0 =0;
double afterdata1 =0;
double afterdata2 =0;
double afterdata3 =0;
double afterdata4 =0;
double afterdata5 =0;
double afterdata6 =0;
double afterdata7 =0;
double afterdata8 =0;
double afterdata9 =0;
double afterdata10 =0;
double afterdata11 =0;
double afterdata12 =0;
double afterdata13 =0;
double afterdata14 =0;
double afterdata15 =0;
double afterdata16 =0;
double afterdata17 =0;
double afterdata18 =0;
double afterdata19 =0;
double afterdata20 =0;
double afterdata21 =0;
double afterdata22 =0;
double afterdata23 =0;
double afterdata24 =0;

double good_1 = 0;
double left_1 = 0;
double right_1 = 0;
double front_1 = 0;

double good_2 = 0;
double left_2 = 0;
double right_2 = 0;
double front_2 = 0;


void setup()                  
{
  pinMode(analoginpin0, INPUT);
  pinMode(pin_A, OUTPUT);
  pinMode(pin_B, OUTPUT);
  pinMode(pin_C, OUTPUT);
  pinMode(analoginpin1, INPUT);
  pinMode(pin_D, OUTPUT);
  pinMode(pin_E, OUTPUT);
  pinMode(pin_F, OUTPUT);
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop()
{
  int sensor[25] = {sensor0,sensor1,sensor2,sensor3,sensor4,sensor5,sensor6,sensor7,sensor8,sensor9,sensor10,sensor11,sensor12,sensor13,sensor14,sensor15,sensor16,sensor17,sensor18,sensor19,sensor20,sensor21,sensor22,sensor23,sensor24};
  int sensor_sum[25] = {sensor_sum0,sensor_sum1,sensor_sum2,sensor_sum3,sensor_sum4,sensor_sum5,sensor_sum6,sensor_sum7,sensor_sum8,sensor_sum9,sensor_sum10,sensor_sum11,sensor_sum12,sensor_sum13,sensor_sum14,sensor_sum15,sensor_sum16,sensor_sum17,sensor_sum18,sensor_sum19,sensor_sum20,sensor_sum21,sensor_sum22,sensor_sum23,sensor_sum24};
  double sensor_ave[25] = {sensor_ave0,sensor_ave1,sensor_ave2,sensor_ave3,sensor_ave4,sensor_ave5,sensor_ave6,sensor_ave7,sensor_ave8,sensor_ave9,sensor_ave10,sensor_ave11,sensor_ave12,sensor_ave13,sensor_ave14,sensor_ave15,sensor_ave16,sensor_ave17,sensor_ave18,sensor_ave19,sensor_ave20,sensor_ave21,sensor_ave22,sensor_ave23,sensor_ave24};
  double sensor_dev[25] = {sensor_dev0,sensor_dev1,sensor_dev2,sensor_dev3,sensor_dev4,sensor_dev5,sensor_dev6,sensor_dev7,sensor_dev8,sensor_dev9,sensor_dev10,sensor_dev11,sensor_dev12,sensor_dev13,sensor_dev14,sensor_dev15,sensor_dev16,sensor_dev17,sensor_dev18,sensor_dev19,sensor_dev20,sensor_dev21,sensor_dev22,sensor_dev23,sensor_dev24};
  double afterdata[25] = {afterdata0, afterdata1, afterdata2, afterdata3, afterdata4, afterdata5, afterdata6, afterdata7, afterdata8, afterdata9, afterdata10, afterdata11, afterdata12, afterdata13, afterdata14, afterdata15, afterdata16, afterdata17, afterdata18, afterdata19, afterdata20, afterdata21, afterdata22, afterdata23, afterdata24}; 

  for(int t=0; t<=9; t++)
  {
    for(int i=0; i<=24; i++)
    {
      digitalWrite(pin_A, LOW); digitalWrite(pin_B, LOW); digitalWrite(pin_C, LOW);
      sensor[0] = analogRead(analoginpin0);
      digitalWrite(pin_A, HIGH); digitalWrite(pin_B, LOW); digitalWrite(pin_C, LOW);
      sensor[1] = analogRead(analoginpin0);
      digitalWrite(pin_A, LOW); digitalWrite(pin_B, HIGH); digitalWrite(pin_C, LOW);
      sensor[2] = analogRead(analoginpin0);
      digitalWrite(pin_A, LOW); digitalWrite(pin_B, LOW); digitalWrite(pin_C, HIGH);
      sensor[3] = analogRead(analoginpin0);
      digitalWrite(pin_A, HIGH); digitalWrite(pin_B, HIGH); digitalWrite(pin_C, LOW);
      sensor[4] = analogRead(analoginpin0); 
      digitalWrite(pin_A, HIGH); digitalWrite(pin_B, LOW); digitalWrite(pin_C, HIGH);
      sensor[5] = analogRead(analoginpin0);
      digitalWrite(pin_A, LOW); digitalWrite(pin_B, HIGH); digitalWrite(pin_C, HIGH);
      sensor[6] = analogRead(analoginpin0);
      digitalWrite(pin_A, HIGH); digitalWrite(pin_B, HIGH); digitalWrite(pin_C, HIGH);
      sensor[7] = analogRead(analoginpin0);
      
      digitalWrite(pin_D, LOW); digitalWrite(pin_E, LOW); digitalWrite(pin_F, LOW);
      sensor[8] = analogRead(analoginpin1);
      digitalWrite(pin_D, HIGH); digitalWrite(pin_E, LOW); digitalWrite(pin_F, LOW);
      sensor[9] = analogRead(analoginpin1);
      digitalWrite(pin_D, LOW); digitalWrite(pin_E, HIGH); digitalWrite(pin_F, LOW);
      sensor[10] = analogRead(analoginpin1);
      digitalWrite(pin_D, LOW); digitalWrite(pin_E, LOW); digitalWrite(pin_F, HIGH);
      sensor[11] = analogRead(analoginpin1);
      digitalWrite(pin_D, HIGH); digitalWrite(pin_E, HIGH); digitalWrite(pin_F, LOW);
      sensor[12] = analogRead(analoginpin1);
      digitalWrite(pin_D, HIGH); digitalWrite(pin_E, LOW); digitalWrite(pin_F, HIGH);
      sensor[13] = analogRead(analoginpin1);
      digitalWrite(pin_D, LOW); digitalWrite(pin_E, HIGH); digitalWrite(pin_F, HIGH);
      sensor[14] = analogRead(analoginpin1);
      digitalWrite(pin_D, HIGH); digitalWrite(pin_E, HIGH); digitalWrite(pin_F, HIGH);
      sensor[15] = analogRead(analoginpin1);
      
      sensor[16] = analogRead(sensorpin16);
      sensor[17] = analogRead(sensorpin17);
      sensor[18] = analogRead(sensorpin18);
      sensor[19] = analogRead(sensorpin19);
      sensor[20] = analogRead(sensorpin20);
      sensor[21] = analogRead(sensorpin21);
      sensor[22] = analogRead(sensorpin22);
      sensor[23] = analogRead(sensorpin23);
      sensor[24] = analogRead(sensorpin24);
      
      sensor_sum[i]+= sensor[i];
      
      }

      delay(100);
  }

  for(int a=0; a<=24; a++)
  {
    sensor_ave[a] = sensor_sum[a]/10;
  }

  double total_sum = 0;
  
  for(int b=0; b<=24; b++)
  {
    total_sum += sensor_ave[b];
  }

  double mean = total_sum/25;

  for(int c=0; c<=24; c++)
  {
    sensor_dev[c] = mean - sensor_ave[c];
  }

  double variance = 0;
  
  for(int d=0; d<=24; d++)
  {
    variance += sensor_dev[d]*sensor_dev[d];
  }

  double real_variance = variance/25;
  
  double standard_deviation = sqrt(real_variance);

  for(int e=0; e<=24; e++)
  {
    afterdata[e] = (sensor_ave[e] - mean)/standard_deviation;

    good_1 = 7.32024508e+00*afterdata[0]+1.21891387e+01*afterdata[1]-7.77285431e+01*afterdata[2]+2.08191796e+01*afterdata[4]+1.15901578e+01*afterdata[3]+3.49180159e+00*afterdata[5]+6.49073021e-01*afterdata[6]-5.10379901e+00*afterdata[7]-3.86843361e+00*afterdata[8]+1.43355529e+01*afterdata[9]-3.20122353e+00*afterdata[13]+3.23979981e+00*afterdata[11]+4.47861354e+00*afterdata[14]+6.16072651e+00*afterdata[12]-9.76198383e+00*afterdata[10]-1.91147030e+00*afterdata[15]+6.64434869e+00*afterdata[16]+5.32582695e+00*afterdata[17]+1.64009367e+01*afterdata[18]-3.72022487e+00*afterdata[19]-4.68815548e+00*afterdata[20]-1.50707633e+00*afterdata[21]+3.77403315e+00*afterdata[22]+2.57816205e+00*afterdata[23]-7.50668657e+00*afterdata[24]-134.17290915;
    right_1 = -1.01807435e+00*afterdata[0]+1.48579946e+01*afterdata[1]-2.99272430e+00*afterdata[2]-2.05358165e+01*afterdata[4]-1.49059064e+01*afterdata[3]+7.42958638e-02*afterdata[5]+1.73049788e+01*afterdata[6]-2.43699204e-01*afterdata[7]-1.19913906e+01*afterdata[8]-7.83294254e+00*afterdata[9]-2.17157082e-02*afterdata[13]+4.72639191e+00*afterdata[11]+7.06248100e+00*afterdata[14]+1.34790096e+01*afterdata[12]+2.24177152e+00*afterdata[10]-5.93980071e+00*afterdata[15]+3.79177408e+00*afterdata[16]+4.76935698e+00*afterdata[17]+9.05483292e+00*afterdata[18]-3.12948068e+00*afterdata[19]-2.95866703e+00*afterdata[20]+1.04169016e+01*afterdata[21]+-8.34049885e+00*afterdata[22]+-5.49606004e+00*afterdata[23]+-2.37301207e+00*afterdata[24]-91.30920358;
    left_1 = -7.98953299e+00*afterdata[0]-8.41331945e+00*afterdata[1]+6.55092486e+00*afterdata[2]+5.70214234e+00*afterdata[4]-7.89496438e+00*afterdata[3]-1.93813251e+00*afterdata[5]-1.34613866e+01*afterdata[6]-2.36317816e+00*afterdata[7]+1.32488172e+01*afterdata[8]-2.21297183e+00*afterdata[9]-6.17449170e-01*afterdata[13]+8.16673804e-01*afterdata[11]+3.25010874e+00*afterdata[14]+6.72283246e-01*afterdata[12]+8.53344820e+00*afterdata[10]-1.75800941e+00*afterdata[15]+5.38109421e+00*afterdata[16]+-2.77468541e+00*afterdata[17]-2.86728728e-01*afterdata[18]+3.33189723e+00*afterdata[19]+3.53347204e+00*afterdata[20]+5.68108664e+00*afterdata[21]-8.84273960e+00*afterdata[22]-2.27604988e+00*afterdata[23]+4.12719998e+00*afterdata[24]-21.83057453;
    front_1 = -5.21795408e+00*afterdata[0]+3.71304555e+00*afterdata[1]-1.68123560e+00*afterdata[2]+1.32346723e+01*afterdata[4]+3.76578158e+00*afterdata[3]+2.09454320e+00*afterdata[5]+1.00713241e+01*afterdata[6]+4.19939309e+00*afterdata[7]-3.36193439e+00*afterdata[8]+2.06672606e+00*afterdata[9]+1.58728748e+00*afterdata[13]+1.58594088e+00*afterdata[11]-3.23445258e+00*afterdata[14]-8.71698696e+00*afterdata[12]-1.13450275e+00*afterdata[10]+7.43263282e-02*afterdata[15]-4.79278191e+00*afterdata[16]+1.32079325e+00*afterdata[17]-1.60362321e+01*afterdata[18]+1.95235877e+00*afterdata[19]+1.93983315e+00*afterdata[20]+-3.18668923e+00*afterdata[21]-1.56461598e+00*afterdata[22]-6.18510382e-01*afterdata[23]+1.93987012e+00*afterdata[24]-21.90732722;

    good_2 = 2.05230028*afterdata[0]+3.11061575*afterdata[1]-37.01380891*afterdata[2]+5.94084563*afterdata[4]+3.52469299*afterdata[3]+0.3391438*afterdata[6]-0.9503923*afterdata[8]+0.70978387*afterdata[11]+0.84062688*afterdata[14]+1.55807696*afterdata[12]+0.16964929*afterdata[10]-0.64499831*afterdata[15]+2.66030514*afterdata[16]+0.37478916*afterdata[17]+5.36859518*afterdata[18]+0.4237445*afterdata[22]-47.67351663;
    right_2 = -1.25419703*afterdata[0]+14.3479432*afterdata[1]-4.87758947*afterdata[2]-24.56868125*afterdata[4]-16.21509872*afterdata[3]+14.84542243*afterdata[6]-12.002531*afterdata[8]+8.7128072*afterdata[11]+8.18913229*afterdata[14]+8.72154982*afterdata[12]-5.52405297*afterdata[10]-5.8365433*afterdata[15]+9.98513094*afterdata[16]+0.40408926*afterdata[17]+10.38545998*afterdata[18]+-10.38646653*afterdata[22]-100.09473697;
    left_2 = -5.09613789*afterdata[0]-8.98810967*afterdata[1]+6.00888873*afterdata[2]+4.56563481*afterdata[4]-10.34796918*afterdata[3]-11.4240676*afterdata[6]+11.6597524*afterdata[8]+1.68480313*afterdata[11]+2.09341107*afterdata[14]+1.90133617*afterdata[12]+7.59648218*afterdata[10]+6.76246691*afterdata[15]+4.97369268*afterdata[16]-1.51712522*afterdata[17]+0.72127881*afterdata[18]-4.81510374*afterdata[22]-20.4962565;
    front_2 = -5.61829135*afterdata[0]+1.08627388*afterdata[1]-2.54457123*afterdata[2]+11.21004935*afterdata[4]+2.00183192*afterdata[3]+9.82906999*afterdata[6]-5.06819601*afterdata[8]+0.29489719*afterdata[11]-3.08050069*afterdata[14]-6.40812212*afterdata[12]-2.56332654*afterdata[10]-1.12016626*afterdata[15]-6.25966589*afterdata[16]+0.09518585*afterdata[17]-15.76689358*afterdata[18]-7.61506317*afterdata[22]-27.11087596;
  }
  
  Serial.print("sum : ");
  for(int z=0; z<=24; z++)
  {
    Serial.print(sensor_sum[z]);
    Serial.print(" ");
  } 
  Serial.println(" ");

  Serial.print("ave : ");
  for(int y=0; y<=24; y++)
  {
    Serial.print(sensor_ave[y]);
    Serial.print(" ");
  }
  Serial.println(" ");

  Serial.print("total_sum : ");
  Serial.println(total_sum);

  Serial.print("mean : ");
  Serial.println(mean);

  Serial.print("dev : ");
  for(int x=0; x<=24; x++)
  {
    Serial.print(sensor_dev[x]);
    Serial.print(" ");
  }
  Serial.println(" ");

  Serial.print("var : ");
  Serial.println(variance);

  Serial.print("real_var : ");
  Serial.println(real_variance);

  Serial.print("standard_deviation : ");
  Serial.println(standard_deviation);

  Serial.print("afterdata : ");
  for(int W=0; W<=24; W++)
  {
    Serial.print(afterdata[W]);
    Serial.print(" ");
  }
  
  Serial.println(" ");

  Serial.print("good_1 : ");
  Serial.println(good_1);

  Serial.print("right_1 : ");
  Serial.println(right_1);

  Serial.print("left_1 : ");
  Serial.println(left_1);

  Serial.print("front_1 : ");
  Serial.println(front_1);

  Serial.print("good_2 : ");
  Serial.println(good_2);

  Serial.print("right_2 : ");
  Serial.println(right_2);

  Serial.print("left_2 : ");
  Serial.println(left_2);

  Serial.print("front_2 : ");
  Serial.println(front_2);

  Serial.println(" ");

  if(good_1>0&&left_1<0&&right_1<0&&front_1<0)
  {
    {
      if(good_2>0&&left_2<0&&right_2<0&&front_2<0)
      {
        bluetooth.print(11);
        Serial.println("good_1 & good_2");
      }

      else if(good_2<0&&left_2<0&&right_2>0&&front_2<0)
      {
        bluetooth.print(12);
        Serial.println("good_1 & right_2");
      }

      else if(good_2<0&&left_2>0&&right_2<0&&front_2<0)
      {
        bluetooth.print(13);
        Serial.println("good_1 & left_2");
      }

      else if(good_2<0&&left_2<0&&right_2<0&&front_2>0)
      {
        bluetooth.print(14);
        Serial.println("good_1 & front_2");
      }

      else
      {
        bluetooth.print(0);
        Serial.println("none data");
      }
    }
  }

  else if(good_1<0&&left_1<0&&right_1>0&&front_1<0)
  {
    {
      if(good_2>0&&left_2<0&&right_2<0&&front_2<0)
      {
        bluetooth.print(21);
        Serial.println("right_2 & good_2");
      }

      else if(good_2<0&&left_2<0&&right_2>0&&front_2<0)
      {
        bluetooth.print(22);
        Serial.println("right_2 & right_2");
      }

      else if(good_2<0&&left_2>0&&right_2<0&&front_2<0)
      {
        bluetooth.print(23);
        Serial.println("right_2 & left_2");
      }

      else if(good_2<0&&left_2<0&&right_2<0&&front_2>0)
      {
        bluetooth.print(24);
        Serial.println("right_2 & front_2");
      }

      else
      {
        bluetooth.print(0);
        Serial.println("none data");
      }
    }
  }
  
  else if(good_1<0&&left_1>0&&right_1<0&&front_1<0)
  {
    if(good_2>0&&left_2<0&&right_2<0&&front_2<0)
      {
        bluetooth.print(31);
        Serial.println("left_1 & good_2");
      }

      else if(good_2<0&&left_2<0&&right_2>0&&front_2<0)
      {
        bluetooth.print(32);
        Serial.println("left_1 & right_2");
      }

      else if(good_2<0&&left_2>0&&right_2<0&&front_2<0)
      {
        bluetooth.print(33);
        Serial.println("left_1 & left_2");
      }

      else if(good_2<0&&left_2<0&&right_2<0&&front_2>0)
      {
        bluetooth.print(34);
        Serial.println("left_1 & front_2");
      }

      else
      {
        bluetooth.print(0);
        Serial.println("none data");
      }
  }

  else if(good_1<0&&left_1<0&&right_1<0&&front_1>0)
  {
    if(good_2>0&&left_2<0&&right_2<0&&front_2<0)
      {
        bluetooth.print(41);
        Serial.println("front_2 & good_2");
      }

      else if(good_2<0&&left_2<0&&right_2>0&&front_2<0)
      {
        bluetooth.print(42);
        Serial.println("front_2 & right_2");
      }

      else if(good_2<0&&left_2>0&&right_2<0&&front_2<0)
      {
        bluetooth.print(43);
        Serial.println("front_2 & left_2");
      }

      else if(good_2<0&&left_2<0&&right_2<0&&front_2>0)
      {
        bluetooth.print(44);
        Serial.println("front_2 & front_2");
      }

      else
      {
        bluetooth.print(0);
        Serial.println("none data");
      }
  }

  else
  {
    bluetooth.print(0);
    Serial.println("none data");
  }

  Serial.println(" ");
  
  delay(4000);
}  
