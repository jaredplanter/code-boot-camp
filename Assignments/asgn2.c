#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_vowel( char arg )
{
  int i;
  if(arg < 91){
    arg = arg + 32;
  }
  char vowel[] = {'a','e','i','o','u'};
  for (i = 0; i < 10; ++i){
    if (arg == vowel[i])
    {
        return 1;
    }
  }

  return 0;
}

int main( int argc, char *argv[] )
{
  char word[10];
  char quit[] = "exit";

  while( strncmp(word, quit, 4) )
  {
    puts( "Enter a message:" );

    fgets( word, 10, stdin  );
    for( int i = 0; i <  strlen(word); i++ )
    {
      if( is_vowel( word[i]) )
      {
        printf( "Vowel: %c\n", word[i] );
      }
      else{
        printf( "%c\n", word[i] );
      }
    }
  }

  return 0;
}

