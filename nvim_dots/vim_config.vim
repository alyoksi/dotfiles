:set number
:set relativenumber
:set autoindent
:set smarttab
:set expandtab
":set noswapfile
:set smartindent

:set mouse=v
:set encoding=utf-8

:set tabstop=4
:set shiftwidth=4
:set softtabstop=4
:set scrolloff=8

syntax on


call plug#begin('~/.config/nvim/plugged') 
Plug 'scrooloose/nerdtree', { 'on':  'NERDTreeToggle' }

"colorschemes
Plug 'morhetz/gruvbox'

Plug 'ycm-core/YouCompleteMe' 
"Plug 'mattia72/vim-delphi'
Plug 'vim-airline/vim-airline'
Plug 'jiangmiao/auto-pairs'
Plug 'ctrlpvim/ctrlp.vim'
Plug 'easymotion/vim-easymotion'

"For LSP
"Plug 'neovim/nvim-lspconfig'
"Plug 'hrsh7th/nvim-cmp'
"Plug 'hrsh7th/cmp-nvim-lsp'
"Plug 'saadparwaiz1/cmp_luasnip'
"Plug 'L3MON4D3/LuaSnip'

call plug#end()

set completeopt=menu,menuone,longest

filetype indent on
"TODO bind Ctrl+A to work like in emacs
"Same to do with Ctrl+E

"inoremap jk <esc>
nnoremap <C-n> :NERDTree<CR>

colorscheme gruvbox


