file1=$1
file2=$2
if [ -f $file2 ];
then
        $(cat $file1 >> $file2)
        echo "$file1 is Appended in $file2"
else
        $(cat $file1 > $file2)
        echo "$file2 is Created and has Content of $file1"
fi