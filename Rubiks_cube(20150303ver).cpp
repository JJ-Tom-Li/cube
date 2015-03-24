#include <iostream>
using namespace std;

char w[10]={'W','W','W','W','W','W','W','W','W','W'};
char y[10]={'Y','Y','Y','Y','Y','Y','Y','Y','Y','Y'};
char b[10]={'B','B','B','B','B','B','B','B','B','B'};
char r[10]={'R','R','R','R','R','R','R','R','R','R'};
char g[10]={'G','G','G','G','G','G','G','G','G','G'};
char o[10]={'O','O','O','O','O','O','O','O','O','O'};
char chr,tmp;
int n=1,i;

void f_clear()
{
     for (i=0;i<10;i++)
         w[i]='W';
     for (i=0;i<10;i++)
         y[i]='Y';
     for (i=0;i<10;i++)
         b[i]='B';
     for (i=0;i<10;i++)
         r[i]='R';
     for (i=0;i<10;i++)
         g[i]='G';
     for (i=0;i<10;i++)
         o[i]='O';
}
void f_out()
{
  cout << "    ";cout << w[1] << w[2] << w[3] <<endl;
  cout << "    ";cout << w[4] << w[5] << w[6] <<endl;   
  cout << "    ";cout << w[7] << w[8] << w[9] <<endl;
  cout << r[1] << r[2] << r[3] <<" ";
  cout << b[1] << b[2] << b[3] <<" ";
  cout << o[1] << o[2] << o[3] <<" ";
  cout << g[1] << g[2] << g[3] <<endl;
  cout << r[4] << r[5] << r[6] <<" ";
  cout << b[4] << b[5] << b[6] <<" ";
  cout << o[4] << o[5] << o[6] <<" ";
  cout << g[4] << g[5] << g[6] <<endl;
  cout << r[7] << r[8] << r[9] <<" ";
  cout << b[7] << b[8] << b[9] <<" ";
  cout << o[7] << o[8] << o[9] <<" ";
  cout << g[7] << g[8] << g[9] <<endl;
  cout << "    ";cout << y[1] << y[2] << y[3] <<endl;
  cout << "    ";cout << y[4] << y[5] << y[6] <<endl;   
  cout << "    ";cout << y[7] << y[8] << y[9] <<endl;

}

void f_R()
{
    tmp=w[3];
    w[3]=b[3];
    b[3]=tmp;
    tmp=w[6];
    w[6]=b[6];
    b[6]=tmp;
    tmp=w[9];
    w[9]=b[9];
    b[9]=tmp;
    
    tmp=y[3];
    y[3]=b[3];
    b[3]=tmp;
    tmp=y[6];
    y[6]=b[6];
    b[6]=tmp;
    tmp=y[9];
    y[9]=b[9];
    b[9]=tmp;
    
    tmp=g[7];
    g[7]=y[3];
    y[3]=tmp;
    tmp=g[4];
    g[4]=y[6];
    y[6]=tmp;
    tmp=g[1];
    g[1]=y[9];
    y[9]=tmp;
    
    tmp=o[3];
    o[3]=o[1];
    o[1]=tmp;
    tmp=o[7];
    o[7]=o[1];
    o[1]=tmp;
    tmp=o[9];
    o[9]=o[7];
    o[7]=tmp;
    tmp=o[2];
    o[2]=o[6];
    o[6]=tmp;
    tmp=o[4];
    o[4]=o[2];
    o[2]=tmp;
    tmp=o[8];
    o[8]=o[4];
    o[4]=tmp;
}
void f_r()
{
    tmp=w[3];
    w[3]=g[7];
    g[7]=tmp;
    tmp=w[6];
    w[6]=g[4];
    g[4]=tmp;
    tmp=w[9];
    w[9]=g[1];
    g[1]=tmp;
    
    tmp=y[3];
    y[3]=g[7];
    g[7]=tmp;
    tmp=y[6];
    y[6]=g[4];
    g[4]=tmp;
    tmp=y[9];
    y[9]=g[1];
    g[1]=tmp;
    
    tmp=b[3];
    b[3]=y[3];
    y[3]=tmp;
    tmp=b[6];
    b[6]=y[6];
    y[6]=tmp;
    tmp=b[9];
    b[9]=y[9];
    y[9]=tmp;
    
    tmp=o[1];
    o[1]=o[3];
    o[3]=tmp;
    tmp=o[3];
    o[3]=o[9];
    o[9]=tmp;
    tmp=o[9];
    o[9]=o[7];
    o[7]=tmp;
    tmp=o[2];
    o[2]=o[6];
    o[6]=tmp;
    tmp=o[8];
    o[8]=o[6];
    o[6]=tmp;
    tmp=o[4];
    o[4]=o[8];
    o[8]=tmp;
}

void f_L()
{
     tmp=b[1];
     b[1]=w[1];
     w[1]=tmp;
     tmp=b[4];
     b[4]=w[4];
     w[4]=tmp;
     tmp=b[7];
     b[7]=w[7];
     w[7]=tmp;
     
     tmp=g[9];
     g[9]=w[1];
     w[1]=tmp;
     tmp=g[6];
     g[6]=w[4];
     w[4]=tmp;
     tmp=g[3];
     g[3]=w[7];
     w[7]=tmp;
     
     tmp=y[1];
     y[1]=g[9];
     g[9]=tmp;
     tmp=y[4];
     y[4]=g[6];
     g[6]=tmp;
     tmp=y[7];
     y[7]=g[3];
     g[3]=tmp;
     
     tmp=r[1];
     r[1]=r[7];
     r[7]=tmp;
     tmp=r[9];
     r[9]=r[7];
     r[7]=tmp;
     tmp=r[3];
     r[3]=r[9];
     r[9]=tmp;
     tmp=r[2];
     r[2]=r[4];
     r[4]=tmp;
     tmp=r[8];
     r[8]=r[4];
     r[4]=tmp;
     tmp=r[6];
     r[6]=r[8];
     r[8]=tmp;
}
void f_l()
{
     tmp=b[1];
     b[1]=w[1];
     w[1]=tmp;
     tmp=b[4];
     b[4]=w[4];
     w[4]=tmp;
     tmp=b[7];
     b[7]=w[7];
     w[7]=tmp;
     
     tmp=b[1];
     b[1]=y[1];
     y[1]=tmp;
     tmp=b[4];
     b[4]=y[4];
     y[4]=tmp;
     tmp=b[7];
     b[7]=y[7];
     y[7]=tmp;
     
     tmp=g[9];
     g[9]=y[1];
     y[1]=tmp;
     tmp=g[6];
     g[6]=y[4];
     y[4]=tmp;
     tmp=g[3];
     g[3]=y[7];
     y[7]=tmp;
     
     tmp=r[7];
     r[7]=r[1];
     r[1]=tmp;
     tmp=r[3];
     r[3]=r[1];
     r[1]=tmp;
     tmp=r[9];
     r[9]=r[3];
     r[3]=tmp;
     tmp=r[4];
     r[4]=r[2];
     r[2]=tmp;
     tmp=r[6];
     r[6]=r[2];
     r[2]=tmp;
     tmp=r[8];
     r[8]=r[6];
     r[6]=tmp;
}

void f_U()
{
     tmp=o[1];
     o[1]=b[1];
     b[1]=tmp;
     tmp=o[2];
     o[2]=b[2];
     b[2]=tmp;
     tmp=o[3];
     o[3]=b[3];
     b[3]=tmp;
     
     tmp=g[1];
     g[1]=o[1];
     o[1]=tmp;
     tmp=g[2];
     g[2]=o[2];
     o[2]=tmp;
     tmp=g[3];
     g[3]=o[3];
     o[3]=tmp;
     
     tmp=r[1];
     r[1]=g[1];
     g[1]=tmp;
     tmp=r[2];
     r[2]=g[2];
     g[2]=tmp;
     tmp=r[3];
     r[3]=g[3];
     g[3]=tmp;
     
     tmp=w[3];
     w[3]=w[1];
     w[1]=tmp;
     tmp=w[7];
     w[7]=w[1];
     w[1]=tmp;
     tmp=w[9];
     w[9]=w[7];
     w[7]=tmp;
     tmp=w[6];
     w[6]=w[2];
     w[2]=tmp;
     tmp=w[4];
     w[4]=w[2];
     w[2]=tmp;
     tmp=w[8];
     w[8]=w[4];
     w[4]=tmp;
}

void f_u()
{
     tmp=r[1];
     r[1]=b[1];
     b[1]=tmp;
     tmp=r[2];
     r[2]=b[2];
     b[2]=tmp;
     tmp=r[3];
     r[3]=b[3];
     b[3]=tmp;
     
     tmp=g[1];
     g[1]=r[1];
     r[1]=tmp;
     tmp=g[2];
     g[2]=r[2];
     r[2]=tmp;
     tmp=g[3];
     g[3]=r[3];
     r[3]=tmp;
     
     tmp=o[1];
     o[1]=g[1];
     g[1]=tmp;
     tmp=o[2];
     o[2]=g[2];
     g[2]=tmp;
     tmp=o[3];
     o[3]=g[3];
     g[3]=tmp;
     
     tmp=w[7];
     w[7]=w[1];
     w[1]=tmp;
     tmp=w[3];
     w[3]=w[1];
     w[1]=tmp;
     tmp=w[9];
     w[9]=w[3];
     w[3]=tmp;
     tmp=w[4];
     w[4]=w[2];
     w[2]=tmp;
     tmp=w[6];
     w[6]=w[2];
     w[2]=tmp;
     tmp=w[8];
     w[8]=w[6];
     w[6]=tmp;
     
     
}
void f_F()
{
     tmp=o[1];
     o[1]=w[7];
     w[7]=tmp;
     tmp=o[4];
     o[4]=w[8];
     w[8]=tmp;
     tmp=o[7];
     o[7]=w[9];
     w[9]=tmp;
     
     tmp=r[9];
     r[9]=w[7];
     w[7]=tmp;
     tmp=r[6];
     r[6]=w[8];
     w[8]=tmp;
     tmp=r[3];
     r[3]=w[9];
     w[9]=tmp;
     
     tmp=y[3];
     y[3]=r[9];
     r[9]=tmp;
     tmp=y[2];
     y[2]=r[6];
     r[6]=tmp;
     tmp=y[1];
     y[1]=r[3];
     r[3]=tmp;
     
     tmp=b[3];
     b[3]=b[1];
     b[1]=tmp;
     tmp=b[7];
     b[7]=b[1];
     b[1]=tmp;
     tmp=b[9];
     b[9]=b[7];
     b[7]=tmp;
     tmp=b[6];
     b[6]=b[2];
     b[2]=tmp;
     tmp=b[4];
     b[4]=b[2];
     b[2]=tmp;
     tmp=b[8];
     b[8]=b[4];
     b[4]=tmp;
}

void f_f()
{
     tmp=r[9];
     r[9]=w[7];
     w[7]=tmp;
     tmp=r[6];
     r[6]=w[8];
     w[8]=tmp;
     tmp=r[3];
     r[3]=w[9];
     w[9]=tmp;

     tmp=o[1];
     o[1]=w[7];
     w[7]=tmp;
     tmp=o[4];
     o[4]=w[8];
     w[8]=tmp;     
     tmp=o[7];
     o[7]=w[9];
     w[9]=tmp;
     
     tmp=y[3];
     y[3]=o[1];
     o[1]=tmp;
     tmp=y[2];
     y[2]=o[4];
     o[4]=tmp;
     tmp=y[1];
     y[1]=o[7];
     o[7]=tmp;
     
     tmp=b[7];
     b[7]=b[1];
     b[1]=tmp;
     tmp=b[3];
     b[3]=b[1];
     b[1]=tmp;
     tmp=b[9];
     b[9]=b[3];
     b[3]=tmp;
     tmp=b[4];
     b[4]=b[2];
     b[2]=tmp;
     tmp=b[6];
     b[6]=b[2];
     b[2]=tmp;
     tmp=b[8];
     b[8]=b[6];
     b[6]=tmp;
          
}

void f_B()
{
     tmp=o[3];
     o[3]=w[1];
     w[1]=tmp;
     tmp=o[6];
     o[6]=w[2];
     w[2]=tmp;
     tmp=o[9];
     o[9]=w[3];
     w[3]=tmp;
     
     tmp=y[9];
     y[9]=o[3];
     o[3]=tmp;
     tmp=y[8];
     y[8]=o[6];
     o[6]=tmp;
     tmp=y[7];
     y[7]=o[9];
     o[9]=tmp;
     
     tmp=r[7];
     r[7]=y[9];
     y[9]=tmp;
     tmp=r[4];
     r[4]=y[8];
     y[8]=tmp;
     tmp=r[1];
     r[1]=y[7];
     y[7]=tmp;
     
     tmp=g[3];
     g[3]=g[1];
     g[1]=tmp;
     tmp=g[7];
     g[7]=g[1];
     g[1]=tmp;
     tmp=g[9];
     g[9]=g[7];
     g[7]=tmp;
     tmp=g[6];
     g[6]=g[2];
     g[2]=tmp;
     tmp=g[4];
     g[4]=g[2];
     g[2]=tmp;
     tmp=g[8];
     g[8]=g[4];
     g[4]=tmp;
}
void f_b()
{
     tmp=o[3];
     o[3]=w[1];
     w[1]=tmp;
     tmp=o[6];
     o[6]=w[2];
     w[2]=tmp;
     tmp=o[9];
     o[9]=w[3];
     w[3]=tmp;
     
     tmp=r[7];
     r[7]=w[1];
     w[1]=tmp;
     tmp=r[4];
     r[4]=w[2];
     w[2]=tmp;
     tmp=r[1];
     r[1]=w[3];
     w[3]=tmp;
     
     tmp=y[9];
     y[9]=r[7];
     r[7]=tmp;
     tmp=y[8];
     y[8]=r[4];
     r[4]=tmp;
     tmp=y[7];
     y[7]=r[1];
     r[1]=tmp;
     
     tmp=g[7];
     g[7]=g[1];
     g[1]=tmp;
     tmp=g[3];
     g[3]=g[1];
     g[1]=tmp;
     tmp=g[9];
     g[9]=g[3];
     g[3]=tmp;
     tmp=g[4];
     g[4]=g[2];
     g[2]=tmp;
     tmp=g[6];
     g[6]=g[2];
     g[2]=tmp;
     tmp=g[8];
     g[8]=g[6];
     g[6]=tmp;
}
void f_D()
{
     tmp=o[7];
     o[7]=b[7];
     b[7]=tmp;
     tmp=o[8];
     o[8]=b[8];
     b[8]=tmp;
     tmp=o[9];
     o[9]=b[9];
     b[9]=tmp;
     
     tmp=r[7];
     r[7]=b[7];
     b[7]=tmp;
     tmp=r[8];
     r[8]=b[8];
     b[8]=tmp;
     tmp=r[9];
     r[9]=b[9];
     b[9]=tmp;
     
     tmp=g[7];
     g[7]=r[7];
     r[7]=tmp;
     tmp=g[8];
     g[8]=r[8];
     r[8]=tmp;
     tmp=g[9];
     g[9]=r[9];
     r[9]=tmp;
     
     tmp=y[3];
     y[3]=y[1];
     y[1]=tmp;
     tmp=y[7];
     y[7]=y[1];
     y[1]=tmp;
     tmp=y[9];
     y[9]=y[7];
     y[7]=tmp;
     tmp=y[6];
     y[6]=y[2];
     y[2]=tmp;
     tmp=y[4];
     y[4]=y[2];
     y[2]=tmp;
     tmp=y[8];
     y[8]=y[4];
     y[4]=tmp;
}
void f_d()
{
     tmp=b[7];
     b[7]=o[7];
     o[7]=tmp;
     tmp=b[8];
     b[8]=o[8];
     o[8]=tmp;
     tmp=b[9];
     b[9]=o[9];
     o[9]=tmp;
     
     tmp=g[7];
     g[7]=o[7];
     o[7]=tmp;
     tmp=g[8];
     g[8]=o[8];
     o[8]=tmp;
     tmp=g[9];
     g[9]=o[9];
     o[9]=tmp;
     
     tmp=r[7];
     r[7]=g[7];
     g[7]=tmp;
     tmp=r[8];
     r[8]=g[8];
     g[8]=tmp;
     tmp=r[9];
     r[9]=g[9];
     g[9]=tmp;
     
     tmp=y[7];
     y[7]=y[1];
     y[1]=tmp;
     tmp=y[3];
     y[3]=y[1];
     y[1]=tmp;
     tmp=y[9];
     y[9]=y[3];
     y[3]=tmp;
     tmp=y[4];
     y[4]=y[2];
     y[2]=tmp;
     tmp=y[6];
     y[6]=y[2];
     y[2]=tmp;
     tmp=y[8];
     y[8]=y[6];
     y[6]=tmp;
     
}
int main()
{
     cout << "歡迎使用!!!!\n";
     cout << "------------------------------\n";
     cout << " R :O面轉動\n";
     cout << " L :R面轉動\n";
     cout << " F :B面轉動\n";
     cout << " B :G面轉動\n";
     cout << " U :W面轉動\n";
     cout << " D :Y面轉動\n";
     cout << "大寫順時針，小寫逆時針。\n";
     cout << " o :顯示當前狀態\n";
     cout << " c :回復到初始狀態\n";
     cout << " h :顯示幫助\n";
     cout << " e :離開\n";
     cout << "   *請一次輸入一個動作，以免程式錯誤!!!*\n";
     cout << "------------------------------\n";
     f_out();
while(n=1)
{
     cout << "請輸入動作:";
     cin >>chr;
if (chr=='R')
{
    system("CLS");
    f_R();
    f_out();
}  
else if (chr=='r')
{
    system("CLS");
    f_r();
    f_out();
}  
else if (chr=='L')
{
     system("CLS");
     f_L();
     f_out();
}
else if (chr=='l')
{
     system("CLS");
     f_l();
     f_out();
}
else if (chr=='F')
{
     system("CLS");
     f_F();
     f_out();
}
else if (chr=='f')
{
     system("CLS");
     f_f();
     f_out();
}
else if (chr=='B')
{
     system("CLS");
     f_B();
     f_out();
}
else if (chr=='b')
{
     system("CLS");
     f_b();
     f_out();
}
else if (chr=='U')
{
     system("CLS");
     f_U();
     f_out();
}
else if (chr=='u')
{
     system("CLS");
     f_u();
     f_out();
}
else if (chr=='D')
{
     system("CLS");
     f_D();
     f_out();
}
else if (chr=='d')
{
     system("CLS");
     f_d();
     f_out();
}
else if (chr=='e')
{
     break;
}
else if (chr=='o')
{
     system("CLS");
     f_out();
}
else if (chr=='c')
{
     system("CLS");
     f_clear();
     f_out(); 
}
else if (chr=='h')
{
     cout << "------------幫助--------------\n";
     cout << " R :O面轉動\n";
     cout << " L :R面轉動\n";
     cout << " F :B面轉動\n";
     cout << " B :G面轉動\n";
     cout << " U :W面轉動\n";
     cout << " D :Y面轉動\n";
     cout << "大寫順時針，小寫逆時針。\n";
     cout << " o :顯示當前狀態\n";
     cout << " h :顯示幫助\n";
     cout << " c :回復到初始狀態\n";
     cout << " e :離開\n";
     cout << "   *請一次輸入一個動作，以免程式錯誤!!!*\n";
     cout << "------------------------------\n";
}
else
{
    cout << "輸入不正確!\n";
}
}

      system("PAUSE");
      return 0;
}
