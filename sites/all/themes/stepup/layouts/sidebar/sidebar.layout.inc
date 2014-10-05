name = Sidebar
description = Single sidebar layout - First Sidebar and Content
template=sidebar-layout
engine = phptemplate
core = 7.x

; Regions
regions[branding]       = Branding
regions[header]         = Header
regions[navigation]     = Navigation
regions[highlighted]    = Highlighted
regions[help]           = Help
regions[content]        = Content
regions[sidebar_first]  = First Sidebar
regions[footer]         = Footer

stylesheets[all][]= css/layouts/sidebar/sidebar.layout.css
stylesheets[all][]= css/layouts/sidebar/sidebar.layout.no-query.css

; Plugins
plugins[panels][layouts] = panels/layouts
plugins[panels][styles] = panels/styles

