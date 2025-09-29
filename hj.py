txt = "bla bla \"asu\" bla"
print("fungsi double quote=", txt)
txt = "bla bla \'asu\' bla"
print("fungsi single quote=", txt)
txt = "bla bla \\asu\\ bla"
print("fungsi backslash=", txt)
txt = "bla bla \n asu \n bla"
print("ASCII Linefeed=", txt)
txt = "bla bla \t asu \t bla"
print("ASCII Horizoantal Tab=", txt)
txt = "bla bla \b asu \b bla"
print("ASCII Backspace=", txt)
txt = "bla bla \f asu \f bla"
print("ASCII Formfeed=", txt)
txt = "bla bla \r asu \r bla"
print("ASCII Cariage return=",txt)
txt = "bla bla \v asu \v bla"
print("ASCII Vertical Tab=", txt)

txt = "bla bla \a asu \a bla"
print("ASCII Bell=", txt)

# raw string
txt = r"bla bla \asu\ bla"
print("raw string=", txt)