return require'packer'.startup(function()
    use 'wbthomason/packer.nvim'

    use 'EdenEast/nightfox.nvim'
    use { "ellisonleao/gruvbox.nvim" }
    use "savq/melange"

    use 'kyazdani42/nvim-tree.lua' use 'kyazdani42/nvim-web-devicons'

    use {
        "williamboman/mason.nvim",
        "williamboman/mason-lspconfig.nvim",
        "neovim/nvim-lspconfig",
    }

    use 'hrsh7th/nvim-cmp'
    use 'hrsh7th/cmp-nvim-lsp'
    use 'saadparwaiz1/cmp_luasnip'
    use 'rafamadriz/friendly-snippets'
    use 'L3MON4D3/LuaSnip'
    use 'onsails/lspkind.nvim'

    use {
	    'windwp/nvim-autopairs',
        config = function() require("nvim-autopairs").setup {} end
    }
    use {
        'nvim-lualine/lualine.nvim',
        requires = { 'kyazdani42/nvim-web-devicons', opt = true }
    }
    use {
        'romgrk/barbar.nvim',
        requires = {'kyazdani42/nvim-web-devicons'}
    }
    use {
        'nvim-treesitter/nvim-treesitter',
        run = ':TSUpdate'
    }
    use {
        'nvim-telescope/telescope.nvim', tag = '0.1.0',
        requires = { {'nvim-lua/plenary.nvim'} }
    }
end)

