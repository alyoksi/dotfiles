#!/bin/bash

# TODO : current version is obsolete

sudo apt install build-essential
sudo apt install i3
sudo apt install rofi 

# Installing zsh + oh-my-zsh + 2 plugins
sudo apt install zsh
sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
git clone https://github.com/zsh-users/zsh-autosuggestions ~/.oh-my-zsh/custom/plugins/zsh-autosuggestions
git clone https://github.com/zsh-users/zsh-syntax-highlighting.git ~/.oh-my-zsh/custom/plugins/zsh-syntax-highlighting

sudo apt install vim-gtk
curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
    https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
vim test.cpp

git clone https://github.com/Alyoksi/dotfiles.git ~
rm -rf ~/.config/i3
mv ~/dotfiles/i3 ~/.config
mv ~/dotfiles/i3status ~/.config
mv ~/dotfiles/rofi ~/.config
mv ~/dotfiles/UltiSnips ~/.vim/plugged/ultisnips
rm -rf ~/dotfiles

# CP files
git clone https://github.com/Alyoksi/linuxbackup.git
mv ~/linuxbackup ~/KTP


