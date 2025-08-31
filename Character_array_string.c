/*Character array [string]:-
                                         |
character name[] = {'a','b',.....}       |     char name[50] = "string"
                                         |     %s -> formate spacifier
for(i=0; name[] != '\0'; i++){           |    printf("%s",name);  |string
printf("%c",name[i]);                    |     printf("%s",name[1]);  s
}                                        |
output:- ab....                          |

NULL:- end of the string
  |    
  '\0' ,-symbol


*/
int main(){
    char name[50];
    
    printf("enter your name");
    scanf("%s",&name);
    
    
    printf("your enterned name:- %s\n",name);
    
    
    return 0;
}