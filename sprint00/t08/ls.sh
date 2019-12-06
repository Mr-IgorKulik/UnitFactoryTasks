ls -1  $1 >> .name.txt
ls -lh $1 > .size.txt
tail -n +2 .size.txt > .tmp1.txt
cut -d' ' -f5 .tmp1.txt > .tmp.txt
sed -e 'R .tmp.txt' .name.txt | sed 'N; s/\n/ /'
rm .size.txt
rm .name.txt
rm .tmp.txt
rm .tmp1.txt
