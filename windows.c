#include <stdio.h>
#include <windows.h>

int main()
{   //color list https://www.wikihow.com/Get-Color-in-C-Program
    system("color DF");//change colors
    printf("Windows.h Library\n");

    system("pause"); //pause program

    //The Imperial March using beeps
    Beep(440,500);
    system("color 04");
	  Beep(440,500);
  	system("color 40");
	  Beep(440,500);
    system("color 04");
	  Beep(349,350);
	  system("color 40");
	  Beep(523,150);
	  system("color 04");
	  Beep(440,500);
	  system("color 40");
	  Beep(349,350);
	  system("color 40");
	  Beep(523,150);
	  system("color 40");
	  Beep(440,1000);
	  system("color 40");
  	Beep(659,500);
  	system("color 04");
    Beep(659,500);
	  system("color 40");
	  Beep(659,500);
  	system("color 04");
	  Beep(698,350);
	  system("color 40");
	  Beep(523,150);
  	system("color 40");
	  Beep(415,500);
  	system("color 04");
  	Beep(349,350);
  	system("color 40");
  	Beep(523,150);
  	system("color 04");
  	Beep(440,1000);

	printf("this program will close in 5 seconds");
	Sleep(5000); //delay for 5 seconds

	return 0;
}
