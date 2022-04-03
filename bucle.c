int i = 0;
int user;


int main(){
    printf("Choose\n");
    scanf("%d", &user);
    switch(user){
	case 0:
	    printf("User %d \n", user);
	    for(i = 0; i < 50; i ++){
		printf("%d \n", i);
	    }
	    break;

	case 1:
	    printf("User %d \n", user);
	    do{	
		printf("%d \n", i);
		i = 1 + i;
	    }while(i <= 10);

	    break;

	case 2:
	    printf("User %d \n", user);
	    while (i < 20){
		printf("Tengo $%d \n", i);
		i = i + 1;
	    }
	    break;

	default:
	    printf("User default %d", user);
	    break;
    }
    return 0;
}
   
