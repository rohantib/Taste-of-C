find . -type f -name \*.sh -print | sed -e 's#^.*/##' -e 's/\.sh//'
