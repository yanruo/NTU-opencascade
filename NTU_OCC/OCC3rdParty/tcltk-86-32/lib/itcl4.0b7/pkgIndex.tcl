# Tcl package index file, version 1.0

if {![package vsatisfies [package provide Tcl] 8.6]} {return}

package ifneeded itcl 4.0b7 [list load [file join $dir "itcl40b7.dll"] itcl]
package ifneeded Itcl 4.0b7 [list load [file join $dir "itcl40b7.dll"] itcl]
