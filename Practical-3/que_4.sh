a=`grep $1 $2`
if [ $? -eq 0 ]
then
    echo "String Found"
else
    echo "String Not Found"
fi