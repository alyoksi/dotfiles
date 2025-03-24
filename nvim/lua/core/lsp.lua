require("mason").setup()
require("mason-lspconfig").setup()

-- installing LS's
require("mason-lspconfig").setup {
    ensure_installed = { "lua_ls" },
}

-- enabling lua LS
--require("lspconfig").lua_ls.setup {}


require('core.setup.snippy')
require('core.setup.nvim_cmp')

local on_attach = function(client, bufnr)
  local opts = { noremap = true, silent = true, buffer = bufnr }
  -- Hover documentation
  vim.keymap.set('n', '<leader>k', vim.lsp.buf.hover, opts)
  -- Go to definition
  vim.keymap.set('n', 'gd', vim.lsp.buf.definition, opts)
  -- Go to declaration
  vim.keymap.set('n', 'gD', vim.lsp.buf.declaration, opts)
  -- Rename symbol
  vim.keymap.set('n', '<leader>rn', vim.lsp.buf.rename, opts)
  -- Open diagnostics float
  vim.keymap.set('n', '<leader>e', vim.diagnostic.open_float, opts)
end


-- Set up lspconfig.
local capabilities = require('cmp_nvim_lsp').default_capabilities()

-- Replace <YOUR_LSP_SERVER> with each lsp server you've enabled.
require('lspconfig').lua_ls.setup {
    capabilities = capabilities,
    on_attach=on_attach,
}
