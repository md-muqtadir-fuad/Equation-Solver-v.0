#include<stdio.h>
#include<math.h>
double main()
    {
        //Author_Md_Muqtadir_Fuad_Date_15.11.2021_(+6.00GTM)_Bangladesh
        //This program can solve 3 types of mathematical problems
        double a,b,c,a_1,a_2,a_3,b_1,b_2,b_3,c_1,c_2,c_3,d_1,d_2,d_3,D_x,D_y,D_z,D,x,y,z,x_1,x_2;
        int i;
        double x_part_1,x_part_2;

        printf("Enter the type of Equation\n 1.ax+by+c=0");
        printf("\n 2.ax+by+cz=d");
        printf("\n 3.ax^2+bx+c=0\n");
        printf("\n Type of equation is:\t");
        scanf("%d",&i);

        if(i==1)
        {
            printf("\na_1=");
            scanf("%lf",&a_1);
            printf("\nb_1=");
            scanf("%lf",&b_1);
            printf("\nc_1=");
            scanf("%lf",&c_1);
            printf("\na_2=");
            scanf("%lf",&a_2);
            printf("\nb_2=");
            scanf("%lf",&b_2);
            printf("\nc_2=");
            scanf("%lf",&c_2);

            x=((b_1*c_2-b_2*c_1)/(a_1*b_2-a_2*b_1));
            y=((c_1*a_2-c_2*a_1)/(a_1*b_2-a_2*b_1));

            printf("\n\n Solution: x=%.3lf,y=%.3lf",x,y);
        }
        else if(i==2)
        {
            printf("\na_1=");
            scanf("%lf",&a_1);
            printf("\nb_1=");
            scanf("%lf",&b_1);
            printf("\nc_1=");
            scanf("%lf",&c_1);
            printf("\nd_1=");
            scanf("%lf",&d_1);
            printf("\na_2=");
            scanf("%lf",&a_2);
            printf("\nb_2=");
            scanf("%lf",&b_2);
            printf("\nc_2=");
            scanf("%lf",&c_2);
            printf("\nd_2=");
            scanf("%lf",&d_2);

            printf("\na_3=");
            scanf("%lf",&a_3);
            printf("\nb_3=");
            scanf("%lf",&b_3);
            printf("\nc_3=");
            scanf("%lf",&c_3);
            printf("\nd_3=");
            scanf("%lf",&d_3);

            D=(a_1*(b_2*c_3-c_2*b_3)-b_1*(a_2*c_3-c_2*a_3)+c_1*(a_2*b_3-b_2*a_3));
            D_x=(d_1*(b_2*c_3-c_2*b_3)-b_1*(d_2*c_3-c_2*d_3)+c_1*(d_2*b_3-b_2*d_3));
            D_y=(a_1*(d_2*c_3-c_2*d_3)-d_1*(a_2*c_3-c_2*a_3)+c_1*(a_2*d_3-d_2*a_3));
            D_z=(a_1*(b_2*d_3-d_2*b_3)-b_1*(a_2*d_3-d_2*a_3)+d_1*(a_2*b_3-b_2*a_3));

            x=D_x/D;
            y=D_y/D;
            z=D_z/D;

            printf("\n\n Solution: x=%.3lf,y=%.3lf,z=%.3lf",x,y,z);

        }

        else if(i==3)
        {
            printf("\na=");
            scanf("%lf",&a);
            printf("\nb=");
            scanf("%lf",&b);
            printf("\nc=");
            scanf("%lf",&c);

            D=(b*b-4*a*c);

            if(D>=0)
            {
                x_1=((-b+sqrt(b*b-4*a*c))/(2*a));
                x_2=((-b-sqrt(b*b-4*a*c))/(2*a));

                printf("\n\n Solution: x_1=%.3lf,x_2=%.3lf",x_1,x_2);
            }
            else
            {
             z=abs(b*b-4*a*c);
             x_part_1=(-b/(2*a));
             x_part_2=(sqrt(z)/(2*a));

             printf("\n\n Solution: x_1=%.3lf+%.3lfi,x_2=%.3lf-%.3lfi",x_part_1,x_part_2,x_part_1,x_part_2);

            }
        }

    }
