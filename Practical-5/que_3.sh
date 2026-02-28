user=$1
response=$(finger | grep $user)
if [ $? = 0 ]
then
echo "$user is Logged In!"
else
echo "$user is not Logged In!"
fi