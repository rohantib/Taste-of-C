ldapsearch -Q uid=z\* | sed -n 's/cn: //p' | tail -r
