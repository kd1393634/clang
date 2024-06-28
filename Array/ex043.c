#include <stdio.h>
main()
{
	char date[] = "orange";
	int i;
	i = 0;
	while (date[i] != '\0') {
		i++;
	}
	
	printf("•¶š—ñ:%s\n", &date[0]);
	printf("•¶š”‚Í%d •¶š\n", i);
}