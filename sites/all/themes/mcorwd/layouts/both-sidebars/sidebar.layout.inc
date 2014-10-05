name = Sidebar
description = Both sidebars layout - First Sidebar, Second Sidebar and Content
template=both-sidebars-layout
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
regions[sidebar_second]  = Second Sidebar
regions[footer]         = Footer

stylesheets[all][]= css/layouts/both-sidebars/sidebar.layout.css
stylesheets[all][]= css/layouts/both-sidebars/sidebar.layout.no-query.css

; Plugins
plugins[panels][layouts] = panels/layouts
plugins[panels][styles] = panels/styles

