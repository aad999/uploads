#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int userChoice;
    int m, n, i, j;
    while(1){
        printf("\nTo ADD,\t\t\t\t\t\tENTER 1");
        printf("\nTo SUBTRACT,\t\t\t\t\tENTER 2");
        printf("\nTo MULTIPLY,\t\t\t\t\tENTER 3");
        printf("\nTo FIND TRANSPOSE OF A MATRIX,\t\t\tENTER 4");
        printf("\nTo EVALUATE DETERMINANT OF A 3x3 SQUARE MATRIX,\tENTER 5");
        printf("\nTo FIND ADJOINT OF A 3x3 SQUARE MATRIX\t\tENTER 6");
        printf("\nTo FIND INVERSE OF A 3x3 SQUARE MATRIX\t\tENTER 7");
        printf("\nTo EXIT,\t\t\t\t\tENTER 0\n\nCHOICE: ");
        scanf("%d", &userChoice);
        if((userChoice==1)||(userChoice==2)){
            printf("\n\nGive number of rows and columns of the matrices: ");
            scanf("%d %d", &m, &n);
            float A[m][n], B[m][n], C[m][n];
            if(userChoice==1){
                printf("\n\nFIRST MATRIX\n");
                for(i=0;i<m;i++){
                    printf("\n\nGive %d elements of row-%d: ", n, i+1);
                    for(j=0;j<n;j++){
                        scanf("%f", &A[i][j]);
                    }
                }
                printf("\n\nSECOND MATRIX\n");
                for(i=0;i<m;i++){
                    printf("\n\nGive %d elements of row-%d: ", n, i+1);
                    for(j=0;j<n;j++){
                        scanf("%f", &B[i][j]);
                    }
                }
                for(i=0;i<m;i++){
                    for(j=0;j<n;j++){
                        C[i][j]=(A[i][j]+B[i][j]);
                    }
                }
                printf("\n\nSUM of the given two matrices is: \n\n");
                for(i=0;i<m;i++){
                    for(j=0;j<n;j++){
                        if(j==(n-1)){
                            printf("\t%3f", C[i][j]);
                            printf("\n\n");
                        }
                        else{
                            printf("\t%3f", C[i][j]);
                        }
                    }
                }
            }
            else if(userChoice==2){
                printf("\n\nFIRST MATRIX\n");
                for(i=0;i<m;i++){
                    printf("\n\nGive %d elements of row-%d: ", n, i+1);
                    for(j=0;j<n;j++){
                        scanf("%f", &A[i][j]);
                    }
                }
                printf("\n\nSECOND MATRIX\n");
                for(i=0;i<m;i++){
                    printf("\n\nGive %d elements of row-%d: ", n, i+1);
                    for(j=0;j<n;j++){
                        scanf("%f", &B[i][j]);
                    }
                }
                for(i=0;i<m;i++){
                    for(j=0;j<n;j++){
                        C[i][j]=(A[i][j]-B[i][j]);
                    }
                }
                printf("\n\nSUM of the given two matrices is: \n\n");
                for(i=0;i<m;i++){
                    for(j=0;j<n;j++){
                        if(j==(n-1)){
                            printf("\t%3f", C[i][j]);
                            printf("\n\n");
                        }
                        else{
                            printf("\t%3f", C[i][j]);
                        }
                    }
                }
            }
        }
        else if(userChoice==3){
            int p, q;
            printf("\n\nGive number of rows and columns of the first matrix: ");
            scanf("%d %d", &m, &n);
            printf("\nGive number of rows and columns of the second matrix: ");
            scanf("%d %d", &p, &q);
            if(n==p){
                int k;
                float A[m][n], B[p][q], C[m][q], sum;
                printf("\n\nFIRST MATRIX\n");
                for(i=0;i<m;i++){
                    printf("\n\nGive %d elements of row-%d: ", n, i+1);
                    for(j=0;j<n;j++){
                        scanf("%f", &A[i][j]);
                    }
                }
                printf("\n\nSECOND MATRIX\n");
                for(i=0;i<p;i++){
                    printf("\n\nGive %d elements of row-%d: ", q, i+1);
                    for(j=0;j<q;j++){
                        scanf("%f", &B[i][j]);
                    }
                }
                for(i=0;i<m;i++){
                    for(j=0;j<q;j++){
                        sum=0;
                        for(k=0;k<n;k++){
                            sum=(sum+(A[i][k]*B[k][j]));
                        }
                        C[i][j]=sum;
                    }
                }
                printf("\n\nPRODUCT of the given two matrices is: \n\n");
                for(i=0;i<m;i++){
                    for(j=0;j<q;j++){
                        if(j==(q-1)){
                            printf("\t%f", C[i][j]);
                            printf("\n\n");
                        }
                        else{
                            printf("\t%f", C[i][j]);
                        }
                    }
                }
            }
            else{
                printf("\n\nINVALID INPUT\n\n");
            }
        }
        else if(userChoice==4){
            printf("\n\nGive number of rows and columns of the matrix: ");
            scanf("%d %d", &m, &n);
            float A[m][n],trA[m][n];
            for(i=0;i<m;i++){
                printf("\n\nGive %d elements of row-%d: ", n, i+1);
                for(j=0;j<n;j++){
                    scanf("%f", &A[i][j]);
                }
            }
            printf("\n\nGiven matrix is: \n");
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    if(j==(n-1)){
                        printf("\t%3f", A[i][j]);
                        printf("\n\n");
                    }
                    else{
                        printf("\t%3f", A[i][j]);
                    }
                }
            }
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    trA[i][j]=A[j][i];
                }
            }
            printf("\n\nTranspose of the given matrix is: \n");
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    if(j==(m-1)){
                        printf("\t%3f", trA[i][j]);
                        printf("\n\n");
                    }
                    else{
                        printf("\t%3f", trA[i][j]);
                    }
                }
            }
        }
        else if((userChoice==5)||(userChoice==6)||(userChoice==7)){
            if(userChoice==5){
                float A[3][3];
                printf("\n\nGive elements of the 3x3 matrix\n");
                for(i=0;i<3;i++){
                    printf("\n\nGive 3 elements of row-%d: ", i+1);
                    for(j=0;j<3;j++){
                        scanf("%f", &A[i][j]);
                    }
                }
                float det;
                det = (A[0][0]*(A[1][1]*i - A[1][2]*A[2][1])) - (A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0])) + (A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]));
                printf("DETERMINANT of given 3x3 matrix is: %f", det);
            }
            else if((userChoice==6)||(userChoice==7)){
                printf("\n\n\nWORK IN PROGRESS\nSORRY FOR INCONVENIENCE\n\n\n");
            }
        }
        else if(userChoice==0){
            printf("\n\nTHANK YOU\n\n"); exit (0);
        }
    }
    return 0;
}
