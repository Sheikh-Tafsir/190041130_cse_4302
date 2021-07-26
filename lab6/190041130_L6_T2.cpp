//2
#include<bits/stdc++.h>
using namespace std;
class Matrix3D{
private:
    int mat[3][3];
public:
    Matrix3D(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                mat[i][j]=0;
            }
        }
    }
    Matrix3D(int a1,int a2,int a3,int b1,int b2,int b3,int c1,int c2,int c3){
        mat[0][0]=a1;
        mat[0][1]=a2;
        mat[0][2]=a3;
        mat[1][0]=b1;
        mat[1][1]=b2;
        mat[1][2]=b3;
        mat[2][0]=c1;
        mat[2][1]=c2;
        mat[2][2]=c3;

    }
    void get(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    double det(){
        double a,b,c;
        a=mat[0][0]*(mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1]);
        b=mat[0][1]*(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0]);
        c=mat[0][2]*(mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);

        return a-b+c;
    }
    void inverse(){
        int imat[3][3]={};

        imat[0][0]=(mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1]);
        imat[0][1]=-(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0]);
        imat[0][2]=(mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
        imat[1][0]=-(mat[0][1]*mat[2][2] - mat[0][2]*mat[2][1]);
        imat[1][1]=(mat[0][0]*mat[2][2] - mat[0][2]*mat[2][0]);
        imat[1][2]=-(mat[0][0]*mat[2][1] - mat[0][1]*mat[2][0]);
        imat[2][0]=(mat[0][1]*mat[1][2] - mat[0][2]*mat[1][1]);
        imat[2][1]=-(mat[0][0]*mat[1][2] - mat[0][2]*mat[1][0]);
        imat[2][2]=(mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0]);

        double d=det();
        for(int j=0;j<3;j++){
            for(int i=0;i<3;i++){
                cout<<(double)imat[i][j]*(1/d)<<" ";
            }
            cout<<endl;
        }

    }

    Matrix3D operator + (Matrix3D right){
        Matrix3D temp;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                temp.mat[i][j]=mat[i][j]+right.mat[i][j];
            }
        }
        return temp;
    }
    Matrix3D operator - (Matrix3D right){
        Matrix3D temp;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                temp.mat[i][j]=mat[i][j]-right.mat[i][j];
            }
        }
        return temp;
    }
    Matrix3D operator * (Matrix3D right){
        Matrix3D temp;
        for (int i=0;i<3;i++){
            for (int j = 0; j < 3; j++){
                temp.mat[i][j] = (mat[i][0]*right.mat[j][0]) + (mat[i][1]*right.mat[j][1]) + (mat[i][2]*right.mat[j][2]);
            }
        }
        return temp;
    }
    ~Matrix3D(){}
};
int main()
{
    Matrix3D m1(2,1,5,-1,-2,-2,3,1,2);
    Matrix3D m2(2,1,5,-1,-2,-2,3,1,2),m3;
    m1.get();
    cout<<m1.det()<<endl;

    m1.inverse();
    m3=m1+m2;
    m3.get();
    cout<<endl;

    m3=m1-m2;
    m3.get();
    cout<<endl;

    m3=m1*m2;
    m3.get();
    cout<<endl;
    return 0;

}
