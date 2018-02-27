curl -s https://projects.intra.42.fr/uploads/document/document/266/contacts_hard.txt | grep -i "^Nicolas\tBauer" | grep "-" | rev |cut -f2 | rev
