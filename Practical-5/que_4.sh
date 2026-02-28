file=$1

if [ -r "$file" ]
then
        echo "File Is Readable!"
else
        echo "File is not Readable!"
fi