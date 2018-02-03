#include"headers.h"
int main()
{
struct sockaddr_in addr;
int skret , cfd , len;
char * ch,*c;
ch=(char*)malloc(sizeof(char)*50);
c=(char*)malloc(sizeof(char)*50);
skret=socket(AF_INET,SOCK_STREAM,0);
addr.sin_family=AF_INET;
addr.sin_addr.s_addr=inet_addr("127.0.0.1");
addr.sin_port=htons(4000);
len=sizeof(struct sockaddr_in);
while(1)
{
scanf("%s",ch);
printf("client\n");
cfd=connect(skret,(struct sockaddr *) & addr,len);
if(cfd == -1)
{
perror("error in connect");
}
printf("client----%d\n",cfd);
if(strncmp(skret,"exit",4)!=0))
{
exit(EXIT_FAILURE);
}
write(skret,ch,50);
read(skret,c,50);
printf("read val =%s\n",c);
}
}
