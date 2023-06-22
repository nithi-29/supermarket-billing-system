#include<stdio.h>
int main()
{
    char name[50];
    int phone_number;
    int customer_id,body_soap,hair_cream,hair_spray,body_spray;


    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int thumbs_up;

    int total,cosmetics_total,grocery_total,beverge_total;
    printf("-----------------------\n");
    printf("BILLING SYSTEM\n");
    printf("-----------------------\n");
    printf("customer details\n\n");

    printf("customer name : \n");
    scanf("%s",&name);
    printf("customer number : \n");
    scanf("%d",&phone_number);
    printf("customer id : \n");
    scanf("%d",&customer_id);

    printf("-----------------------\n");
    printf("COSMETICS");
    printf("body soap(RS 10): ");
    scanf("%d",&body_soap);
    printf("hair cream(RS 25): ");
    scanf("%d",&hair_cream);
    printf("body spray(RS 50): ");
    scanf("%d",&body_spray);
    printf("hair spray(RS 50): ");
    scanf("%d",&hair_spray);

    printf("-----------------------\n");
    printf("GROCERIES\n\n");
    printf("sugar(RS 100): ");
    scanf("%d",&sugar);
    printf("Tea(RS 15): ");
    scanf("%d",&tea);
    printf("coffee(RS 50): ");
    scanf("%d",&coffee);
    printf("rice(RS 150): ");
    scanf("%d",&rice);
    printf("wheat(RS 160): ");
    scanf("%d",&wheat);

    printf("-----------------------\n");
    printf("BEVERAGES\n\n");
    printf("pepsi(RS 30): ");
    scanf("%d",&pepsi);
    printf("sprite(RS 35): ");
    scanf("%d",&sprite);
    printf("coke(RS 30): ");
    scanf("%d",&coke);
    printf("mojitos(RS 25): ");
    scanf("%d",&mojitos);
    printf("thumbs up (RS 35): ");
    scanf("%d",&thumbs_up);
    printf("------------------------\n");
    int boso,hc,hs,bosp;
    boso=10*body_soap;
    hc=25*hair_cream;
    hs=50*hair_spray;
    bosp=50*body_spray;
    cosmetics_total=boso+hc+hs+bosp;

    printf("body soap : %dRS\n",boso);
    printf("hair cream : %dRS\n",hc);
    printf("hair spray : %dRS\n",hs);
    printf("body spray: %dRS\n",bosp);
    printf("total cosmetics price : %dRS\n",cosmetics_total);
    printf("-------------------------\n");
    int s,t,c,r,w;
    s=100*sugar;
    t=15*tea;
    c=50*coffee;
    r=150*rice;
    w=160*wheat;
    grocery_total=s+t+c+r+w;
    printf("sugar : %dRS\n",s);
    printf("tea : %dRS\n",t);
    printf("coffee : %dRS\n",c);
    printf("rice : %dRS\n",r);
    printf("wheat : %dRS\n",w);
    printf("total groceries price : %dRS\n",grocery_total);
    printf("-------------------------\n");
    int pep,spr,cok,moj,thu;
    pep=30*pepsi;
    spr=35*sprite;
    cok=30*coke;
    moj=25*mojitos;
    thu=35*thumbs_up;
    beverge_total=pep+spr+cok+moj+thu;
    printf("pepsi : %dRS\n",pep);
    printf("sprite : %dRS\n",spr);
    printf("coke : %dRS\n",cok);
    printf("mojitos : %dRS\n",moj);
    printf("thumbs up : %dRS\n",thu);
    printf("total beverages cost : %dRS\n",beverge_total);
    printf("---------------------------\n");
    total=cosmetics_total+grocery_total+beverge_total;
    printf("total amount: %dRS\n",total);
    printf("---------------------------\n");
    printf("-----------------------------------------------\n");
    printf("ANTEIKU SUPER MARKET\n\n");
    printf("customer name: %s\n",name);
    printf("customer phone number: %d\n",phone_number);
    printf("customer id: %d\n",customer_id);

    printf("product name          quantity        price\n\n");
    printf("body soap                %d              %d\n",body_soap,boso);
    printf("hair cream               %d              %d\n",hair_cream,hc);
    printf("body spray               %d              %d\n",body_spray,bosp);
    printf("hair spray               %d              %d\n",hair_spray,hs);
    printf("sugar                    %d              %d\n",sugar,s);
    printf("tea                      %d              %d\n",tea,t);
    printf("coffee                   %d              %d\n",coffee,c);
    printf("rice                     %d              %d\n",rice,r);
    printf("wheat                    %d              %d\n",wheat,w);
    printf("pepsi                    %d              %d\n",pepsi,pep);
    printf("sprite                   %d              %d\n",sprite,spr);
    printf("coke                     %d              %d\n",coke,cok);
    printf("mojitos                  %d              %d\n",mojitos,moj);
    printf("thumbs up                %d              %d\n",thumbs_up,thu);

    printf("grocery total price : %d\n\n",grocery_total);
    printf("cosmetic total price :%d\n\n",cosmetics_total);
    printf("beverage total price : %d\n\n",beverge_total);
    printf("total price : %d\n\n",total);
    printf("----------------------------------------\n");
    return 0;
































}
