//There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of 
//M students that can register for it. If there are K other students who have already enrolled in the course,
//determine if it will still be possible for all the N friends to do so or no
#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int n,m,k,r;
        scanf("%d %d %d",&n,&m,&k);
        r=m-k;
        if(n<=r)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        t--;
    }
}
