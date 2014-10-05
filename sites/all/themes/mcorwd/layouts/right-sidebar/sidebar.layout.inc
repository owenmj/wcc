name = Sidebar
description = Single sidebar layout - First Sidebar and Content
template=right-sidebar-layout
engine = phptemplate
core = 7.x

; Regions
regions[branding]       = Branding
regions[header]         = Header
regions[navigation]     = Navigation
regions[highlighted]    = Highlighted
regions[help]           = Help
regions[content]        = Content
regions[sidebar_second]  = Second Sidebar
regions[footer]         = Footer

stylesheets[all][]= css/layouts/right-sidebar/sidebar.layout.css
stylesheets[all][]= css/layouts/right-sidebar/sidebar.layout.no-query.css

; Plugins
plugins[panels][layouts] = panels/layouts
plugins[panels][styles] = panels/styles

