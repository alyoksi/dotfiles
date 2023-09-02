local set = vim.opt

set.expandtab = true
set.smarttab = true

vim.o.foldcolumn = '1' -- '0' is not bad
vim.o.foldlevel = 99 -- Using ufo provider need a large value, feel free to decrease the value
vim.o.foldlevelstart = 99
vim.o.foldenable = true

set.tabstop = 4
set.shiftwidth = 4
set.softtabstop = 4
set.scrolloff = 8

set.number = true
set.relativenumber = true
set.autoindent = true
set.smartindent = true

set.mouse = v
set.encoding = 'utf-8'

set.hlsearch = true
set.incsearch = true
set.ignorecase = true
set.smartcase = true

set.splitbelow = true 
set.splitright = true

set.wrap = false
set.cursorline = true
set.hidden = true
--set.noswapfile = 1 

set.foldmethod = "expr"
set.foldexpr = "nvim_treesitter#foldexpr()"

set.clipboard = unnamedplus

vim.cmd[[
    augroup remember_folds
        autocmd!
        au BufWinLeave *.* mkview 1
        au BufWinEnter *.* silent! loadview 1
    augroup END
]]
