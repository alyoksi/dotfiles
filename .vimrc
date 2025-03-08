set nocompatible " we want new vim features whenever they are available
set bs=2         " backspace should work as we expect it to set history=50   " remember last 50 commands
set ruler        " show cursor position in the bottom line
syntax on 
" ======================================================================================================
set shiftwidth=4
set expandtab
set softtabstop=4
set autoindent
set smarttab
set smartindent
set shiftround
set scrolloff=8
"======================================================================================================
" automatically re-read files changed outside vim
set autoread " automatically save before each make/execute command set autowrite
"======================================================================================================
" text search settings
set incsearch  " show the first match already while I type
set ignorecase
set smartcase  " only be case-sensitive if I use uppercase in my query
set nohlsearch " I hate when half of the text lights up
"======================================================================================================
" reselect visual block after indent/outdent
vnoremap < <gv
vnoremap > >gv
"======================================================================================================
" force saving files that require root permission
cmap w!! %!sudo tee > /dev/null %
"======================================================================================================
" Don't redraw while executing macros (good performance config)
set lazyredraw
"======================================================================================================
let mapleader = ","
let g:mapleader = ","
"======================================================================================================
set number
"set relativenumber
set mouse=v
set encoding=utf-8
"======================================================================================================
nnoremap <leader>w <Esc>:w<CR>
nnoremap <leader>y <Esc>:%y+<CR>
nnoremap <leader>b <Esc>:bNext<CR>
noremap <Leader>a ggVG


nnoremap <leader>r <ESC> :w <CR> :!./%< <CR>
nnoremap <leader>c <ESC> :w <CR> :!g++ -fsanitize=address -ftrapv -std=c++17 -Wall -Wextra -Wshadow -O2 -DLOCAL -o %< % && ./%< <CR>

"nnoremap <leader>c <ESC> :w <CR> :!g++ -std=c++17 -Wall -Wextra -Wshadow -O2 -DLOCAL -o %< % && ./%< <CR>

"nnoremap <leader>c <ESC> :w <CR> :!g++ -std=c++17 -O2 -DLOCAL -o %< % && ./%< <CR>
 
nnoremap <leader>v <ESC> :w <CR> :!g++ -fsanitize=address -std=c++17 -Wall -Wextra -Wshadow -O2 -DLOCAL -o %< % && ./%< < input.in<CR>

call plug#begin('~/.vim/plugged') 
    Plug 'scrooloose/nerdtree', { 'on':  'NERDTreeToggle'  }
    "colorschemes
    Plug 'morhetz/gruvbox'

    "code completion
    "Plug 'ycm-core/YouCompleteMe'	

    "snippets
    Plug 'honza/vim-snippets'	
    Plug 'sirver/ultisnips'
    let g:UltiSnipsExpandTrigger = '<tab>'
    let g:UltiSnipsJumpForwardTrigger = '<tab>'
    let g:UltiSnipsSnippetsDir = "~/.vim/plugged/ultisnips/UltiSnips"

    Plug 'vim-airline/vim-airline'
    Plug 'jiangmiao/auto-pairs'
    Plug 'ctrlpvim/ctrlp.vim'
    "Plug 'easymotion/vim-easymotion'

call plug#end()

set completeopt=menu,menuone,longest
set background=dark

filetype indent on

"TODO bind Ctrl+A to work like in emacs
""Same to do with Ctrl+E

"inoremap jk <esc>
nnoremap <C-n> :NERDTree<CR>

colorscheme gruvbox
:hi Normal guibg=NONE ctermbg=NONE
