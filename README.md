# nvidia-arch

[+] Initial commit. Donot run on distros other than arch linux
- Installs nvidia basic utilities
- Updates mkinitcpio and kernel hooks
- Maybe replaces integrated display 
- Works only on X11

[ Recommended install: use program file instead of script. ]

###  Installation  ###

1)

  $ git clone https://github.com/jetblackwing/nvidia-arch.git
  
  $ gcc nvidiaconf.c  -o nvidiaconf
  
  $ chmod +x nvidiaconf
  
  $ sudo ./nvidiaconf
  
  ... and reboot
  
  
        [ OR ]
  

2)

  $ git clone https://github.com/jetblackwing/nvidia-arch.git

  $ cd nvidia-arch

  $ chmod +x nvidia-setup

  $ sudo ./nvidia-setup

  reboot & enjoy :)
