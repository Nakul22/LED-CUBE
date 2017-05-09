
int layer[5]={28,27,24,25,26};
int rc[5][5]={{53,51,49,47,45},{52,50,48,46,44},{42,40,38,43,41},{39,37,36,35,34},{33,32,31,30,29}};

void setup()
{
  int m=14;
  for(m=14;m<=53;m++)
  {
   pinMode(m,OUTPUT);
  }
  for(m=0;m<5;m++)
  {
    digitalWrite(layer[m],HIGH);
  }
}

void reset()
{
  for(int m=0;m<5;m++)
  {
    digitalWrite(layer[m],HIGH);
  }
  for(int r2=0;r2<5;r2++)
  for(int r1=0;r1<5;r1++)
  {
    digitalWrite(rc[r2][r1],LOW);
  }
}

void glowall()                                                                        //GLOW ALL
{
  int i=0,j=0;
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      digitalWrite(rc[i][j],HIGH);
      digitalWrite(layer[i],LOW);
    }
  }
}

void glow(int i,int j,int k)                                                           //GLOW
{
  digitalWrite(rc[i][j],HIGH);
  digitalWrite(layer[k],LOW);
}






                                                                                        //#PATTERNS


void spiral(int del)                                                                    //SPIRALS
{
  int i=0,j=0,k=0;
  for(k=0;k<5;k++)
  {
    for(i=0;i<5;i++)
    {
      glow(i,0,k);
      delay(del);
      reset();
    }
    for(j=1;j<5;j++)
    {
      glow(4,j,k);
      delay(del);
      reset();
    }
    for(i=3;i>=0;i--)
    {
      glow(i,4,k);
      delay(del);
      reset();
    }
    for(j=3;j>0;j--)
    {
      glow(0,j,k);
      delay(del);
      reset();
    }
  }
}







void sequence()                                                                  //SEQUENCE
{
  for(int x=0;x<8;x++)
  {
    glowall();
    delay(80);
    reset();
    delay(420);
  }
  for(int x=0;x<14;x++)
  {
    glowall();
    delay(80);
    reset();
    delay(170);
  }
  delay(2000);
} 






void up2down(int del)                                        //UP2DOWN
{
  int i,j,k;
  for(k=0;k<5;k++)
  {
    for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
      {
        glow(i,j,k);
      }
    }
    delay(del);
    reset();
  }
  for(k=4;k>=0;k--)
  {
    for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
      {
        glow(i,j,k);
      }
    }
    delay(del);
    reset();
  }
}








void lines(int del)                                //5*del                    //LINES
{
  randomSeed(0);
  int i,j,k;
  i=random(5);
  j=random(5);
  for(k=4;k>=0;k--)
  {
    glow(i,j,k);
    delay(del);
    reset();
  }
}













void randomafro1()                                                //RANDOM AFRO
{
  randomSeed(0);
  int i,j,k,d;
  for(d=0;d<=700;d++)
  {
    i=random(5);
    j=random(5);
    k=random(5);
    glow(i,j,k);
    delay(100);
    reset();
    d=d+100;
  }
  delay(1);
  reset();
}

void randomafro2()
{
  randomSeed(0);
  int i,j,k,d;
  for(d=0;d<=700;d++)
  {
    i=random(5);
    j=random(5);
    k=random(5);
    glow(i,j,k);
    delay(60);
    reset();
    d=d+59;
  }
  delay(1);
  reset();
}
void randomafro3()
{
  randomSeed(0);
  int i,j,k,d;
  for(d=0;d<=19500;d++)
  {
    i=random(5);
    j=random(5);
    k=random(5);
    glow(i,j,k);
    delay(60);
    reset();
    d=d+59;
  }
  delay(1);
  reset();
}

void randomafro()
{
  delay(1);
  reset();
  delay(1);
  randomafro1();
  delay(1);
  reset();
  delay(1);
  randomafro2();
  delay(1);
  reset();
  delay(1);
  randomafro3();
  delay(1);
  reset();
  delay(1);
}










void keeda(int del)                                                    //KEEDA
{
  int i=0,j=0,k=0;
  for(i=0;i<5;i++)
  {
    glow(i,j,k);
    delay(del);
  }
  
  reset();
  i=0;j=0;k=0;
  
  for(k=0;k<5;k++)
  {
    for(i=0;i<5;i++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  i=0;j=0;k=4;
  reset();
  
  for(j=0;j<5;j++)
  {
    for(i=0;i<5;i++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=0;j=4;k=4;
  
  for(int n=5;n>0;n--)
  {
    for(i=0;i<n;i++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=0;j=0;k=4;
  
  for(int j=4;j>=0;j--)
  {
    glow(i,j,k);
    delay(del);
  }
  
  reset();
  i=0;j=0;k=4;
  
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=4;j=0;k=0;
  
  for(k=4;k>=0;k--)
  {
    for(j=0;j<5;j++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=4;j=0;k=0;
  
  for(int n=5;n>0;n--)
  {
    for(j=0;j<n;j++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=4;j=0;k=0;
  
  for(k=0;k<5;k++)
  {
    glow(i,j,k);
    delay(del);
  }
  
  reset();
  i=0;j=0;k=0;
  
  for(i=4;i>=0;i--)
  {
    for(k=0;k<5;k++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=0;j=0;k=0;
  
  for(j=0;j<5;j++)
  {
    for(k=0;k<5;k++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=0;j=4;k=0;
  
  for(int n=5;n>0;n--)
  {
    for(k=0;k<n;k++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=0;j=4;k=0;
  
  for(i=0;i<5;i++)
  {
    glow(i,j,k);
    delay(del);
  }
  
  reset();
  i=0;j=4;k=0;
  
  for(k=0;k<5;k++)
  {
    for(i=0;i<5;i++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=0;j=0;k=4;
  
  for(j=4;j>=0;j--)
  {
    for(i=0;i<5;i++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=0;j=0;k=4;
  
  for(int n=5;n>0;n--)
  {
    for(i=0;i<n;i++)
    {
      glow(i,j,k);
    }
    delay(del);
    reset();
  }
  
  reset();
  i=0;j=0;k=4;
  
  for(k=4;k>=0;k--)
  {
    glow(i,j,k);
    delay(del);
  }
  reset();
}















void square1(int del)                                                         //SQUARE
{
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<=i;j++)
    {
      digitalWrite(layer[j],LOW);
      digitalWrite(rc[j][i],HIGH);
      digitalWrite(rc[i][j],HIGH);
    }
    delay(del);
  }
  delay(del);
  for(int k=4;k>=0;k--)
  {
    digitalWrite(layer[4-k],HIGH);
    for(int i=0;i<5;i++)
    {
      digitalWrite(rc[i][4-k],LOW);
      digitalWrite(rc[4-k][i],LOW);
    }
    delay(del);
  }
  reset();
  delay(1);
}
/*
void square2(int del)
{
  for(int i=1;i<5;i++)
  {
    digitalWrite(row[i],LOW);
    digitalWrite(clm[5-i],HIGH);
    delay(del);
  }
  for(int i=4;i>0;i--)
  {
    digitalWrite(row[5-i],HIGH);
    digitalWrite(clm[5-i],LOW);
    delay(del);
  }
}

void square3(int del)
{
  for(int i=1;i<5;i++)
  {
    digitalWrite(row[5-i],LOW);
    digitalWrite(clm[5-i],HIGH);
    delay(del);
  }
  for(int i=4;i>0;i--)
  {
    digitalWrite(row[5-i],HIGH);
    digitalWrite(clm[i],LOW);
    delay(del);
  }
}

void square4(int del)
{
  for(int i=1;i<5;i++)
  {
    digitalWrite(row[5-i],LOW);
    digitalWrite(clm[i],HIGH);
    delay(del);
  }
  for(int i=4;i>0;i--)
  {
    digitalWrite(row[i],HIGH);
    digitalWrite(clm[i],LOW);
    delay(del);
  }
}

void square(int del)
{
  square1(del);
  reset();
  square1(del);
  reset();
  square2(del);
  reset();
  square3(del);
  reset();
  square4(del);
  reset();
}










*/



void loop()
{
  reset();
  randomafro();
  delay(60);
  reset();
  delay(500);
  for(int n=0;n<45;n++)
  {
    lines(101);
    reset(); 
  }
  delay(100);
  sequence();
  reset();
  delay(200);
  for(int x=0;x<4;x++)
  {
  keeda(45);
  reset();
  }
  delay(1);
  reset();
  delay(500);
  
}
