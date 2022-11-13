#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("This program will now automatically install nvidia config.");
  
  printf("\nPlease note that it will only install for arch based distros with rolling release kernels.");
  
  printf("\nProgram will execute in 30 seconds, because I dont know how to put conditional statements.");
  
  system("sleep 3");
  system("pacman -S nvidia nvidia-utils nvidia-settings");

//System configuration of /etc/pacman.d/hooks/nvidia.hook
  printf("\nWriting data to /etc/pacman.d/hooks/nvidia.hook ...");
  system("rm /etc/pacman.d/hooks/nvidia.hook || touch /etc/pacman.d/hooks/nvidia.hook");
  system("echo \[Trigger] >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo Operation=Install >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo Operation=Upgrade >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo Operation=Remove >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo Type=Package >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo Target=nvidia >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo Target=linux >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo \[Action] >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo Description=Update Nvidia module in initcpio >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo Depends=mkinitcpio >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo When=PostTransaction >> /etc/pacman.d/hooks/nvidia.hook");
  system("echo NeedsTargets >> /etc/pacman.d/hooks/nvidia.hook");
//  system("echo \"Exec=/bin/sh -c 'while read -r trg; do case $trg in linux) exit 0; esac; done; /usr/bin/mkinitcpio -P'\" >> /etc/pacman.d/hooks/nvidia.hook");

  {
   FILE *fp;
   char ch;
   char *filename = "/etc/pacman.d/hooks/nvidia.hook";
   char *content = "Exec=/bin/sh -c \'while read -r trg; do case $trg in linux) exit 0; esac; done; /usr/bin/mkinitcpio -P\'";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);     
}
 
  
  
//System configuration of /etc/modprobe.d/blacklist-nvidia-nouveau.conf 
  printf("\nWriting data to /etc/modprobe.d/blacklist-nvidia-nouveau.conf ...");
  system("rm /etc/modprobe.d/blacklist-nvidia-nouveau.conf || touch /etc/modprobe.d/blacklist-nvidia-nouveau.conf");
  system("echo blacklist nouveau >> /etc/modprobe.d/blacklist-nvidia-nouveau.conf");
  
  
    //System configuration of /etc/X11/xorg.conf/20-nvidia.conf
  printf("\nWriting data to /etc/X11/xorg.conf.d/20-nvidia.conf ...");
  system("rm /etc/X11/xorg.conf.d/20-nvidia.conf || mkdir /etc/X11/xorg.conf.d/ && touch /etc/X11/xorg.conf.d/20-nvidia.conf");
  printf("\nParsing data  ...");
  printf("\n Completed 0 of 14 strings");  
  
 {
 
   FILE *fp;
   
   char ch;
   
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   
   char *content = "Section \"OutputClass\"";
   
/*  open for writing */

fp = fopen(filename, "r");

   printf("\nContents of %s  -\n\n", filename);
   
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   
fclose(fp);

   fp = fopen(filename, "a");
   
   /* Write content to file */
   
   fprintf(fp, "%s\n", content);
   
   fclose(fp);
   
   fp = fopen(filename, "r");
   
   printf("\nContents of %s  -\n", filename);
   
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   
   fclose(fp);
   
     
}
 
   printf("\n Completed 1 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "Identifier \"intel\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}
 
   printf("\n Completed 2 of 14 strings");  
   {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "MatchDriver \"i915\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 3 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "Driver \"modesetting\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 4 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "EndSection";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 5 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "Section \"OutputClass\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 6 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "Identifier \"nvidia\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 7 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "MatchDriver \"nvidia-drm\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 8 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "Driver \"nvidia\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 9 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "Option \"AllowEmptyInitialConfiguration\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 10 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "Option \"PrimaryGPU\" \"yes\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 11 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "ModulePath \"/usr/lib/nvidia/xorg\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 12 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "ModulePath \"/usr/lib/xorg/modules\"";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}

  printf("\n Completed 13 of 14 strings");  
  {
   FILE *fp;
   char ch;
   char *filename = "/etc/X11/xorg.conf.d/20-nvidia.conf";
   char *content = "EndSection";
/*  open for writing */
fp = fopen(filename, "r");
   printf("\nContents of %s  -\n\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
fclose(fp);
   fp = fopen(filename, "a");
   /* Write content to file */
   fprintf(fp, "%s\n", content);
   fclose(fp);
   fp = fopen(filename, "r");
   printf("\nContents of %s  -\n", filename);
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c", ch);
   }
   fclose(fp);
     
}
  printf("\n Completed 14 of 14 strings");  

  

  printf("\n Begin stripping with mkinitcpio and adding hooks ...");  
//Loading Kernel Hooks

  system("sed -i 's/MODULES=()/MODULES=(nvidia nvidia_modeset nvidia_uvm nvidia_drm)/g' /etc/mkinitcpio.conf");
  system("mkinitcpio -P linux");
  
  //System configuration of .xinitrc
  
    printf("\n Configuring .xinitrc ...");  
  system("xrandr --listproviders");
  system("rm ~/.xinitrc");
  system("echo \"xrandr --setprovideroutputsource modesetting NVIDIA-0 \" >> ~/.xinitrc");
  system("echo \"xrandr --auto \" >> ~/.xinitrc");
  system("echo \"exec i3 &>> \"/var/log/i3.log \" \" >> ~/.xinitrc");
  

    printf("\n Finishing Setup and exiting ...");
    
 
  
    return 0;
}
