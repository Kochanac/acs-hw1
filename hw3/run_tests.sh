#!/bin/sh

echo "[+] Testing..."

for i in $(seq 5)
do
  echo "[*] test $i started"
  python src/main.py -f tests/input/input$i -o tests/output/new_out$i
  if $( diff tests/output/new_out$i tests/output/out$i ); then
  	echo "[+] test $i ok"
  else 
	echo "[-] test $i failed"
  fi
done

echo "[+] Testing complete"
