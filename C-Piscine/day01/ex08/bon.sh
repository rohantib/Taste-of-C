ldapsearch -Q 'cn=* bon*' | sed 's/^cn:.* [Bb][Oo][Nn]/&/p' | wc -l | sed 's/ *//'
