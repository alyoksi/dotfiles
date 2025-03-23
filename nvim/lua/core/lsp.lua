local lspconfig = require('lspconfig')

lspconfig.clangd.setup{
    cmd = 'clangd-18'
}
