//FEW ADJUSTMENTS TO BE MADE ALMOST DONE
#include<bits/stdc++.h>
using namespace std;
// base class
// base class will have one co-ordinate 
// x and y
class pawn
{
    public:int x,y;
};
//soldier will inherit from pawn class 
//soldiers will have respective ids
class soldier:public pawn
{
    int id;
    public:
    void setPawn(int d,int x1,int y1)
    {
        this->x=x1;
        this->y=y1;
        this->id=d;
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
    int getID()
    {
        return this->id;
    }
};
//king will inherit from pawn class
class king :public pawn
{
    public:
    king(int f1,int f2)
    {
        x=f1;
        y=f2;
    }
    void setPawn(int x1,int x2)
    {
        this->x=x1;
        this->y=x2;
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
};
//queen will inherit from pawn class 
class queen:public pawn
{  
    public:
    queen(int f1,int f2)
    {
        x=f1;
        y=f2;
    }
    void setPawn(int x1,int x2)
    {
        this->x=x1;
        this->y=x2;
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
};
//rook will inherit from pawn class
class rook:public pawn
{
    int x1,x2;
    public:
    rook(int x1,int x2,int y1,int y2)
    {
        x=x1;
        y=x2;
        this->x1=y1;
        this->x2=y2;
    }
    void setPawn(int x1,int y1,int type)
    {
        if(type==1)
        {
            this->x1=x1;
            this->x2=y1;
        }
        else
        {
            this->x=x1;
            this->y=y1;
        }
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
    int getX1()
    {
        return this->x1;
    }
    int getX2()
    {
        return this->x2;
    }
};
// knight will inherit from pawn class
// it will have another two co-ordinates
class knight:public pawn
{
    int x1,x2;
    public:
    knight(int x1,int x2,int y1,int y2)
    {
        x=x1;
        y=x2;
        this->x1=y1;
        this->x2=y2;
    }
    void setPawn(int x1,int y1,int type)
    {
        if(type==1)
        {
            this->x1=x1;
            this->x2=y1;
        }
        else
        {
            this->x=x1;
            this->y=y1;
        }
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
    int getX1()
    {
        return this->x1;
    }
    int getX2()
    {
        return this->x2;
    }
};  
//bishop will inherit from pawn class
// it will have another two co-ordinates
class bishop:public pawn
{
    int x1,x2;
    public:
    bishop(int x1,int x2,int y1,int y2)
    {
        x=x1;
        y=x2;
        this->x1=y1;
        this->x2=y2;
    }
    void setPawn(int x1,int y1,int type)
    {
        if(type==1)
        {
            this->x1=x1;
            this->x2=y1;
        }
        else
        {
            this->x=x1;
            this->y=y1;
        }
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
    int getX1()
    {
        return this->x1;
    }
    int getX2()
    {
        return this->x2;
    }
};
king black_king(0,3);
king white_king(7,3);
queen black_queen(0,4);
queen white_queen(7,4);
bishop black_bishop(0,2,0,5);
bishop white_bishop(7,2,7,5);
knight black_knight(0,1,0,6);
knight white_knight(7,1,7,6);
rook black_rook(0,0,0,7);
rook white_rook(7,0,7,7);
soldier black_soldier[8];
soldier white_soldier[8];
void printBoard()
{
    for(int i=0;i<8;i+=1)
    {
        for(int j=0;j<8;j+=1)
        {
            int flag=0;
            int k1,k2,k3,k4;
            int q1,q2,q3,q4;
            int b1,b2,b3,b4;
            // king
            k1=black_king.getX();
            k2=black_king.getY();
            if(i==k1 && j==k2)
            {
                flag=1;
                cout<<"BKi"<<" ";
                continue;
            }
            k3=white_king.getX();
            k4=white_king.getY();
            if(i==k3 && j==k4)
            {
                flag=1;
                cout<<"WKi"<<" ";
                continue;
            }
            //queen
            q1=black_queen.getX();
            q2=black_queen.getY();
            if(i==q1 && j==q2)
            {
                flag=1;
                cout<<"BQi"<<" ";
                continue;
            }
            q3=white_queen.getX();
            q4=white_queen.getY(); 
            if(i==q3 && j==q4)
            {
                flag=1;
                cout<<"WQi"<<" ";
                continue;
            }
            //BISHOP
            b1=black_bishop.getX();
            b2=black_bishop.getY();
            if(i==b1 && j==b2)
            {
                flag=1;
                cout<<"BBi"<<" ";
                continue;
            }
            b3=black_bishop.getX1();
            b4=black_bishop.getX2();
            if(i==b3 && j==b4)
            {
                flag=1;
                cout<<"BBi"<<" ";
                continue;
            }
            b1=white_bishop.getX();
            b2=white_bishop.getY();
            if(i==b1 && j==b2)
            {
                flag=1;
                cout<<"WBi"<<" ";
                continue;
            }
            b3=white_bishop.getX1();
            b4=white_bishop.getX2();
            if(i==b3 && j==b4)
            {
                flag=1;
                cout<<"WBi"<<" ";
                continue;
            }
            //KNIGHT
            b1=black_knight.getX();
            b2=black_knight.getY();
            if(i==b1 && j==b2)
            {
                flag=1;
                cout<<"BKi"<<" ";
                continue;
            }
            b3=black_knight.getX1();
            b4=black_knight.getX2();
            if(i==b3 && j==b4)
            {
                flag=1;
                cout<<"BKi"<<" ";
                continue;
            }
            b1=white_knight.getX();
            b2=white_knight.getY();
            if(i==b1 && j==b2)
            {
                flag=1;
                cout<<"WKi"<<" ";
                continue;
            }
            b3=white_knight.getX1();
            b4=white_knight.getX2();
            if(i==b3 && j==b4)
            {
                flag=1;
                cout<<"WKi"<<" ";
                continue;
            }
            //rook
            b1=black_rook.getX();
            b2=black_rook.getY();
            if(i==b1 && j==b2)
            {
                flag=1;
                cout<<"BRo"<<" ";
                continue;
            }
            b3=black_rook.getX1();
            b4=black_rook.getX2();
            if(i==b3 && j==b4)
            {
                flag=1;
                cout<<"BRo"<<" ";
                continue;
            }
            b1=white_rook.getX();
            b2=white_rook.getY();
            if(i==b1 && j==b2)
            {
                flag=1;
                cout<<"WRo"<<" ";
                continue;
            }
            b3=white_rook.getX1();
            b4=white_rook.getX2();
            if(i==b3 && j==b4)
            {
                flag=1;
                cout<<"WRo"<<" ";
                continue;
            }
            for(int k=0;k<8;k+=1)
            {
                int x1=black_soldier[k].getX();
                int x2=black_soldier[k].getY();
                if(i==x1 && j==x2)
                {
                    flag=1;
                    cout<<"BSo"<<" ";
                    continue;
                }
                x1=white_soldier[k].getX();
                x2=white_soldier[k].getY();
                if(i==x1 && j==x2)
                {
                    flag=1;
                    cout<<"WSo"<<" ";
                    continue;
                }
            }
            //no pawn
            if(flag==0)
            cout<<"."<<"   ";
        }
        cout<<endl;
    }
}
bool checkMate(int turn)
{
    int x1,x2;
    if(turn==1)
    {
        x1=white_king.getX();
        x2=white_king.getY();
    }
    else
    {
        x1=black_king.getX();
        x2=white_king.getY();
    }
    return false;
}
int checkPawn(int x,int y)
{
    int flag=0;
    int k1,k2,k3,k4;
    int q1,q2,q3,q4;
    int b1,b2,b3,b4;
    k1=black_king.getX();
    k2=black_king.getY();
    if(x==k1 && y==k2)
    {
        flag=1;
        return 3;
    }
    k3=white_king.getX();
    k4=white_king.getY();
    if(x==k3 && y==k4)
    {
        flag=1;
        return 3;
    }
    q1=black_queen.getX();
    q2=black_queen.getY();
    if(x==q1 && y==q2)
    {
        flag=1;
        return 4;
    }
    q3=white_queen.getX();
    q4=white_queen.getY(); 
    if(x==q3 && y==q4)
    {
        flag=1;
        return 4;
    }
    b1=black_bishop.getX();
    b2=black_bishop.getY();
    if(x==b1 && y==b2)
    {
        flag=1;
        return 2;
    }
    b3=black_bishop.getX1();
    b4=black_bishop.getX2();
    if(x==b3 && y==b4)
    {
        flag=1;
        return 5;
    }
    b1=white_bishop.getX();
    b2=white_bishop.getY();
    if(x==b1 && y==b2)
    {
        flag=1;
        return 2;
    }
    b3=white_bishop.getX1();
    b4=white_bishop.getX2();
    if(x==b3 && y==b4)
    {
        flag=1;
        return 5;
    }
    b1=black_knight.getX();
    b2=black_knight.getY();
    if(x==b1 && y==b2)
    {
        flag=1;
        return 1;
    }
    b3=black_knight.getX1();
    b4=black_knight.getX2();
    if(x==b3 && y==b4)
    {
        flag=1;
        return 6;
    }
    b1=white_knight.getX();
    b2=white_knight.getY();
    if(x==b1 && y==b2)
    {
        flag=1;
        return 1;
    }
    b3=white_knight.getX1();
    b4=white_knight.getX2();
    if(x==b3 && y==b4)
    {
        flag=1;
        return 6;
    }
    b1=black_rook.getX();
    b2=black_rook.getY();
    if(x==b1 && y==b2)
    {
        flag=1;
        return 0;
    }
    b3=black_rook.getX1();
    b4=black_rook.getX2();
    if(x==b3 && y==b4)
    {
        flag=1;
        return 7;
    }
    b1=white_rook.getX();
    b2=white_rook.getY();
    if(x==b1 && y==b2)
    {
        flag=1;
        return 0;
    }
    b3=white_rook.getX1();
    b4=white_rook.getX2();
    if(x==b3 && y==b4)
    {
        flag=1;
        return 7;
    }
    for(int k=0;k<8;k+=1)
    {
        int x1=black_soldier[k].getX();
        int x2=black_soldier[k].getY();
        if(x==x1 && y==x2)
        {
            flag=1;
            return 8;
                    
        }
        x1=white_soldier[k].getX();
        x2=white_soldier[k].getY();
        if(x==x1 && y==x2)
        {
            flag=1;
            return 8;
        }
    }
    return 9;
}
bool isbishop(int x,int y,int end1,int end2)
{
    int flag=0;
    for(int i=x+1;i<end1;i+=1)
    {
        int num=checkPawn(i,y);
        if(num!=9)
        return false;
        if(i==end1 && y==end2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return true;
    for(int i=x-1;i>=0;i-=1)
    {
        int num=checkPawn(i,y);
        if(num!=9)
        return false;
        if(i==end1 && y==end2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return true;
    for(int i=y+1;i<end2;i+=1)
    {
        int num=checkPawn(x,i);
        if(num!=9)
        return false;
        if(x==end1 && i==end2)
        {
            flag=1;
            break;
        }
    }
    for(int i=y-1;i>=0;i-=1)
    {
        int num=checkPawn(x,i);
        if(num!=9)
        return false;
        if(x==end1 && i==end2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return true;
    else
    return false;
}
bool isknight(int x,int y,int end1,int end2)
{
    int newx1=x+2;
    int newx2=x-2;
    int newy1=y-1;
    int newy2=y+1;
    if(newx1==end1 && newy1==end2)
    return true;
    else if(newx1==end1 && newy2==end2)
    return true;
    else if(newx2==end1 && newy2==end2)
    return true;
    else if(newx2==end1 && newy1==end2)
    return true;
    newx1=x+1;
    newx2=x-1;
    newy1=y-2;
    newy2=y+2;
    if(newx1==end1 && newy1==end2 && checkPawn(newx1,newy1)==9)
    return true;
    else if(newx1==end1 && newy2==end2 && checkPawn(newx1,newy2)==9)
    return true;
    else if(newx2==end1 && newy2==end2 && checkPawn(newx2,newy2)==9)
    return true;
    else if(newx2==end1 && newy1==end2 && checkPawn(newx2,newy1)==9)
    return true;
    return false;
}
bool isrook(int x,int y,int end1,int end2)
{
    int newx1=x+1;
    int newy1=y+1;
    int flag=0;
    while(newx1<8 && newy1<8)
    {
        int num=checkPawn(newx1,newy1);
        if(num!=9)
        return false;
        if(newx1==end1 && newy1==end2)
        {
            return true;
        }
        newx1+=1;
        newy1+=1;
    }
    newx1=x-1;
    newy1=y-1;
    while(newx1>=0 && newy1>=0)
    {
        int num=checkPawn(newx1,newy1);
        if(num!=9)
        return false;
        if(newx1==end1 && newy1==end2)
        {
            return true;
        }
        newx1-=1;
        newy1-=1;
    }
    newx1=x-1;
    newy1=y+1;
    while(newx1>=0 && newy1<8)
    {
        int num=checkPawn(newx1,newy1);
        if(num!=9)
        return false;
        if(newx1==end1 && newy1==end2)
        {
            return true;
        }
        newx1-=1;
        newy1+=1;
    }
    newx1=x+1;
    newy1=y-1;
    while(newx1<8 && newy1>=0)
    {
        int num=checkPawn(newx1,newy1);
        if(num!=9)
        return false;
        if(newx1==end1 && newy1==end2)
        {
            return true;
        }
        newx1+=1;
        newy1-=1;
    }
    return false;
}
bool isking(int x,int y,int end1,int end2)
{
    int newx1=x-1;
    int newy1=y-1;
    if(newx1==end1 && newy1==end2)
    return true;
    newx1=x-1;
    newy1=y;
    if(newx1==end1 && newy1==end2)
    return true;
    newx1=x-1;
    newy1=y+1;
    if(newx1==end1 && newy1==end2)
    return true;
    newx1=x;
    newy1=y-1;
    if(newx1==end1 && newy1==end2)
    return true;
    newx1=x;
    newy1=y+1;
    if(newx1==end1 && newy1==end2)
    return true;
    newx1=x+1;
    newy1=y-1;
    if(newx1==end1 && newy1==end2)
    return true;
    newx1=x+1;
    newy1=y;
    if(newx1==end1 && newy1==end2)
    return true;
    newx1=x+1;
    newy1=y+1;
    if(newx1==end1 && newy1==end2)
    return true;
    return false;
}
bool isqueen(int x,int y,int end1,int end2)
{
    if(isbishop(x,y,end1,end2))
    return true;
    if(isrook(x,y,end1,end2))
    return true;
    if(isking(x,y,end1,end2))
    return true;
    return false;
}
bool issoldier(int x,int y,int end1,int end2)
{
    int newx1=x+1;
    int newx2=y;
    if(newx1==end1 && newx2==end2)
    return true;
    newx1=x+2;
    newx2=y;
    if(newx1==end1 && newx2==end2)
    return true;
    newx1=x-1;
    if(newx1==end1 && newx2==end2)
    return true;
    newx1=x-2;
    if(newx1==end1 && newx2==end2)
    return true;
    return false;
}
bool ismovable(int x,int y,int end1,int end2,int turn)
{
    int num=checkPawn(x,y);
    //bishop
    if(num==0 || num==7)
    {
        if(isbishop(x,y,end1,end2))
        {
            if(turn==1)
            {
                //void setPawn(int x1,int y1,int type)
                if(num==0)
                black_bishop.setPawn(end1,end2,0);
                else
                black_bishop.setPawn(end1,end2,1);
            }
            else
            {
                if(num==0)
                white_bishop.setPawn(end1,end2,0);
                else
                white_bishop.setPawn(end1,end2,1);
            }
        }
        else
        return false;
    }
    //knight
    else if(num==1 || num==6)
    {
        if(isknight(x,y,end1,end2))
        {
            if(turn==1)
            {
                //void setPawn(int x1,int y1,int type)
                if(num==1)
                black_knight.setPawn(end1,end2,0);
                else
                black_knight.setPawn(end1,end2,1);
            }
            else
            {
                if(num==1)
                white_knight.setPawn(end1,end2,0);
                else
                white_knight.setPawn(end1,end2,1);
            }
        }
        else
        return false;
    }
    //rook
    else if(num==2 || num==5)
    {
        if(isrook(x,y,end1,end2))
        {
            if(turn==1)
            {
                //void setPawn(int x1,int y1,int type)
                if(num==2)
                black_rook.setPawn(end1,end2,0);
                else
                black_rook.setPawn(end1,end2,1);
            }
            else
            {
                if(num==2)
                white_rook.setPawn(end1,end2,0);
                else
                white_rook.setPawn(end1,end2,1);
            }
        }
        else
        return false;
    }
    //king
    else if(num==3)
    {
        if(isking(x,y,end1,end2))
        {
            if(turn==1)
            {
                black_king.setPawn(end1,end2);
            }
            else
            {
                white_king.setPawn(end1,end2);
            }
        }
        else
        return false;
    }
    //queen
    else if(num==4)
    {   
        if(isqueen(x,y,end1,end2))
        {
            if(turn==1)
            {
                black_queen.setPawn(end1,end2);
            }
            else
            {
                white_queen.setPawn(end1,end2);
            }
        }
        else
        return false;
    }
    else if(num==8)
    {
        if(issoldier(x,y,end1,end2))
        {
            if(turn==1)
            {
                for(int i=0;i<8;i+=1)
                {
                    int x1=black_soldier[i].getX();
                    int x2=black_soldier[i].getY();
                    int d=black_soldier[i].getID();
                    if(x1==x && x2==y)
                    {
                        black_soldier[i].setPawn(d,end1,end2);
                        break;
                    }
                }
            }
            else
            {
                for(int i=0;i<8;i+=1)
                {
                    int x1=white_soldier[i].getX();
                    int x2=white_soldier[i].getY();
                    int d=white_soldier[i].getID();
                    if(x1==x && x2==y)
                    {
                        white_soldier[i].setPawn(d,end1,end2);
                        break;
                    }
                }
            }
        }
        else
        return false;
    }
    return false;
}
bool issoldestroy(int x,int y,int end1,int end2)
{
    int newx1=x+1;
    int newx2=y+1;
    if(newx1==end1 && newx2==end2)
    return true;
    newx1=x-1;
    newx2=y-1;
    if(newx1==end1 && newx2==end2)
    return true;
    newx1=x-1;
    newx2=y+1;
    if(newx1==end1 && newx2==end2)
    return true;
    newx1=x+1;
    newx2=y-1;
    if(newx1==end1 && newx2==end2)
    return true;
    return false;
}
void deletePawn(int x,int y,int turn)
{
    int ch=checkPawn(x,y);
    if(ch==8)
    {
        for(int i=0;i<8;i+=1)
        {
            int x1,x2;
            if(turn==1)
            {
                x1=white_soldier[i].getX();
                x2=white_soldier[i].getY();
                if(x1==x && y==x2)
                {
                    white_soldier[i].setPawn(white_soldier[i].getID(),9999,9999);
                    break;
                }
            }
            else
            {
                x1=black_soldier[i].getX();
                x2=black_soldier[i].getY();
                if(x1==x && y==x2)
                {
                    black_soldier[i].setPawn(black_soldier[i].getID(),9999,9999);
                    break;
                }
            }
        }
    }
    else if(ch==0 || ch==7)
    {
        if(turn==1)
        {
            if(ch==0)
            white_bishop.setPawn(9999,9999,1);
            else
            white_bishop.setPawn(9999,9999,0);
        }
        else
        {
            if(ch==0)
            black_bishop.setPawn(9999,9999,1);
            else
            black_bishop.setPawn(9999,9999,0);
        }
    }
    else if(ch==1 || ch==6)
    {
        if(turn==1)
        {
            if(ch==1)
            white_knight.setPawn(9999,9999,1);
            else
            white_knight.setPawn(9999,9999,0);
        }
        else
        {
            if(ch==1)
            black_knight.setPawn(9999,9999,1);
            else
            black_knight.setPawn(9999,9999,0);
        }
    }
    else if(ch==2 || ch==5)
    {
        if(turn==1)
        {
            if(ch==2)
            white_rook.setPawn(9999,9999,1);
            else
            white_rook.setPawn(9999,9999,0);
        }
        else
        {
            if(ch==2)
            black_rook.setPawn(9999,9999,1);
            else
            black_rook.setPawn(9999,9999,0);
        }
    }
    else if(ch==3)
    {
        if(turn==1)
        {
            white_queen.setPawn(9999,9999);
        }
        else
        {
            black_queen.setPawn(9999,9999);
        }
    }
    else if(ch==4)
    {
        if(turn==1)
        {

        }
        else
        {
            
        }
    }
}
bool isbishopdestroy(int x,int y,int end1,int end2,int turn)
{
    if(turn==1)
    {
        int x1=black_bishop.getX();
        int x2=black_bishop.getY();
        if(x==x1 && y==x2)
        {
            for(int i=x+1;i<end1;i+=1)
            {
                int ch=checkPawn(i,y);
                if(ch==9)
                continue;
                else if(i==end1 && y==end2)
                {
                    return true;
                }
            }
            for(int i=x-1;i>=0;i-=1)
            {
                int ch=checkPawn(i,y);
                if(ch==9)
                continue;
                else if(i==end1 && y==end2)
                return true;
            }
        }
        else
        {
            int x1=black_bishop.getX1();
            int x2=black_bishop.getX2();
            if(x==x1 && y==x2)
            {
                for(int i=y+1;i<end1;i+=1)
                {
                    int ch=checkPawn(x,i);
                    if(ch==9)
                    continue;
                    else if(x==end1 && i==end2)
                    return true;
                }
                for(int i=y-1;i>=0;i-=1)
                {
                    int ch=checkPawn(x,i);
                    if(ch==9)
                    continue;
                    else if(x==end1 && i==end2)
                    return true;
                }
            }
        }
    }
    else
    {
        int x1=white_bishop.getX();
        int x2=white_bishop.getY();
        if(x==x1 && y==x2)
        {
            for(int i=x+1;i<end1;i+=1)
            {
                int ch=checkPawn(i,y);
                if(ch==9)
                continue;
                else if(i==end1 && y==end2)
                {
                    return true;
                }
            }
            for(int i=x-1;i>=0;i-=1)
            {
                int ch=checkPawn(i,y);
                if(ch==9)
                continue;
                else if(i==end1 && y==end2)
                return true;
            }
        }
        else
        {
            int x1=white_bishop.getX1();
            int x2=white_bishop.getX2();
            if(x==x1 && y==x2)
            {
                for(int i=y+1;i<end1;i+=1)
                {
                    int ch=checkPawn(x,i);
                    if(ch==9)
                    continue;
                    else if(x==end1 && i==end2)
                    return true;
                }
                for(int i=y-1;i>=0;i-=1)
                {
                    int ch=checkPawn(x,i);
                    if(ch==9)
                    continue;
                    else if(x==end1 && i==end2)
                    return true;
                }
            }
        }
    }
    return false;
}
bool isknightdestroy(int x,int y,int end1,int end2,int turn)
{
    int newx1=x+2;
    int newx2=x-2;
    int newy1=y-1;
    int newy2=y+1;
    if(newx1==end1 && newy1==end2)
    return true;
    else if(newx1==end1 && newy2==end2)
    return true;
    else if(newx2==end1 && newy2==end2)
    return true;
    else if(newx2==end1 && newy1==end2)
    return true;
    newx1=x+1;
    newx2=x-1;
    newy1=y-2;
    newy2=y+2;
    if(newx1==end1 && newy1==end2)
    return true;
    else if(newx1==end1 && newy2==end2)
    return true;
    else if(newx2==end1 && newy2==end2)
    return true;
    else if(newx2==end1 && newy1==end2)
    return true;
    return false;
}
bool isrookdestroy(int x,int y,int end1,int end2,int turn)
{
    int newx1=x+1;
    int newy1=y+1;
    int flag=0;
    while(newx1<8 && newy1<8)
    {
        int num=checkPawn(newx1,newy1);
        if(num==9)
        continue;
        if(newx1==end1 && newy1==end2)
        {
            return true;
        }
        newx1+=1;
        newy1+=1;
    }
    newx1=x-1;
    newy1=y-1;
    while(newx1>=0 && newy1>=0)
    {
        int num=checkPawn(newx1,newy1);
        if(num==9)
        continue;
        if(newx1==end1 && newy1==end2)
        {
            return true;
        }
        newx1-=1;
        newy1-=1;
    }
    newx1=x-1;
    newy1=y+1;
    while(newx1>=0 && newy1<8)
    {
        int num=checkPawn(newx1,newy1);
        if(num==9)
        continue;
        if(newx1==end1 && newy1==end2)
        {
            return true;
        }
        newx1-=1;
        newy1+=1;
    }
    newx1=x+1;
    newy1=y-1;
    while(newx1<8 && newy1>=0)
    {
        int num=checkPawn(newx1,newy1);
        if(num==9)
        continue;
        if(newx1==end1 && newy1==end2)
        {
            return true;
        }
        newx1+=1;
        newy1-=1;
    }
    return false;
}
bool isqueendestroy(int x,int y,int end1,int end2,int turn)
{
    if(isbishopdestroy(x,y,end1,end2,turn) || isrookdestroy(x,y,end1,end2,turn))
    return true;
    else
    return false;
}
bool destroyPawn(int x,int y,int end1,int end2,int turn)
{
    int ch=checkPawn(x,y);
    int ch2=checkPawn(end1,end2);
    if(ch2==9)
    return false;
    if(ch==8)
    {
        if(issoldestroy(x,y,end1,end2))
        {
            if(turn==1)
            {
                ch=checkPawn(end1,end2);//destroy 0 pawn
                for(int i=0;i<8;i+=1)
                {
                    int x1=black_soldier[i].getX();
                    int x2=black_soldier[i].getY();
                    int d=black_soldier[i].getID();
                    if(x1==x && x2==y)
                    {
                        deletePawn(end1,end2,turn);
                        black_soldier[i].setPawn(d,end1,end2);
                        break;
                    }
                }
            }
            else
            {
                for(int i=0;i<8;i+=1)
                {
                    int x1=white_soldier[i].getX();
                    int x2=white_soldier[i].getY();
                    int d=white_soldier[i].getID();
                    if(x1==x && x2==y)
                    {
                        deletePawn(end1,end2,turn);
                        white_soldier[i].setPawn(d,end1,end2);
                        break;
                    }
                }
            }
        }
        else
        return false;
    }
    else if(ch==0 || ch==7)
    {
        if(isbishopdestroy(x,y,end1,end2,turn))
        {
            if(turn==1)
            {
                if(ch==0)
                black_bishop.setPawn(end1,end2,1);
                else
                black_bishop.setPawn(end1,end2,2);
                deletePawn(end1,end2,turn);
            }
            else
            {
                if(ch==0)
                white_bishop.setPawn(end1,end2,1);
                else
                white_bishop.setPawn(end1,end2,2);
                deletePawn(end1,end2,turn);
            }
        }
        else
        return false;
    }
    else if(ch==1 || ch==6)
    {
        if(isknightdestroy(x,y,end1,end2,turn))
        {
            if(turn==1)
            {
                if(ch==0)
                black_knight.setPawn(end1,end2,1);
                else
                black_knight.setPawn(end1,end2,2);
                deletePawn(end1,end2,turn);
            }
            else
            {
                if(ch==0)
                white_knight.setPawn(end1,end2,1);
                else
                white_knight.setPawn(end1,end2,2);
                deletePawn(end1,end2,turn);
            }
        }
        else
        return false;
    }
    else if(ch==2 || ch==5)
    {
        if(isrookdestroy(x,y,end1,end2,turn))
        {
            if(turn==1)
            {
                if(ch==0)
                black_rook.setPawn(end1,end2,1);
                else
                black_rook.setPawn(end1,end2,2);
                deletePawn(end1,end2,turn);
            }
            else
            {
                if(ch==0)
                white_rook.setPawn(end1,end2,1);
                else
                white_rook.setPawn(end1,end2,2);
                deletePawn(end1,end2,turn);
            }
        }
        else
        return false;
    }
    else if(ch==3)
    {
        if(isqueendestroy(x,y,end1,end2,turn))
        {
            if(turn==1)
            {
                black_queen.setPawn(end1,end2);
                deletePawn(end1,end2,turn);
            }
            else
            {
                white_queen.setPawn(end1,end2);
                deletePawn(end1,end2,turn);
            }
        }
        else
        return false;
    }
    return false;
}
int main()
{
    int first=1;
    int second=0;
    for(int i=0;i<8;i+=1)
    {
        black_soldier[i].setPawn(i,first,second++);
    }
    first=6;
    second=0;
    for(int i=0;i<8;i+=1)
    {
        white_soldier[i].setPawn(i,first,second++);
    }
    int turn=0;
    while(1)
    {
        printBoard();
        //cout<<"format four indicies from where to where"<<endl;
        bool ch=checkMate(turn);
        if(ch)
        {
            cout<<"Player "<<turn<<" Wins CheckMate"<<endl;
            break;
        }
        int a,b,c,d;
        if(turn==0)
        {
            //cout<<"Player 1 turn"<<endl;
            cin>>a>>b>>c>>d;
        }
        else
        {
            //cout<<"Player 2 turn"<<endl;
            cin>>a>>b>>c>>d;
        }
        bool ans=destroyPawn(a,b,c,d,turn);
        bool is=ismovable(a,b,c,d,turn);
        //if(is==false)
        //cout<<"INVALID INPUT"<<endl;
        if(turn==1)
        turn=0;
        else
        turn=1;
    }
    return 0;
}