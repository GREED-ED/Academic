float* myfunction(float *);
int main()
{
 float *f[]={ };
f=myfunction(f);//this is called passing an array of float pointer
and result gets stored in f
//now print f
printf()
}
float *myfunction (static float *f)
{
 return f;
}
