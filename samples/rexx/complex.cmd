/******************************************************************************/
/*  complex                  Object REXX Samples                              */
/*                                                                            */
/*  A complex number class.                                                   */
/*                                                                            */
/*  This program demonstrates how to create a complex number class using the  */
/*  ::class and ::method directives.  Also shown is an example of subclassing */
/*  the complex number class (the vector subclass).  Finally, the stringlike  */
/*  class demonstrates the use of a mixin to provide some string behavior to  */
/*  the complex number class.                                                 */
/******************************************************************************/

                                            /* complex number data class      */
::class complex public inherit stringlike

::method init                               /* initialize a complex number    */
expose real imaginary                       /* expose the state data          */
use arg first, second                       /* access the two numbers         */
real = first + 0                            /* force rounding                 */
if arg(2,'o') then                          /* no second argument?            */
  imaginary = 0                             /* imaginary part is zero         */
else                                                                               
  imaginary = second + 0                    /* force rounding on the second   */
                                                                                   
::method '[]' class                         /* create a new complex number    */
use arg first, second                       /* access the two numbers         */
if arg(2,'o') then                          /* only one argument?             */
  return self~new(first)                    /* just create as a real number   */
else                                                                               
  return self~new(first, second)            /* create both parts              */
                                                                                   
::method real                               /* return real part of a complex  */
expose real                                 /* access the state information   */
return real                                 /* return that value              */
                                                                                   
::method imaginary                          /* return imaginary part          */
expose imaginary                            /* access the state information   */
return imaginary                            /* return the value               */
                                                                                   
::method '+'                                /* addition method                */
expose real imaginary                       /* access the state values        */
use arg adder                               /* get the operand                */
if arg(1,'o') then                          /* prefix plus operation?         */
  return self                               /* don't do anything with this    */
tempreal = real + adder~real                /* add the real parts             */
                                            /* add the imaginary parts        */
tempimaginary = imaginary + adder~imaginary
                                            /* return a new item of same class*/
return self~class~new(tempreal, tempimaginary)

::method '-'                                /* subtraction method             */
expose real imaginary                       /* access the state values        */
use arg adder                               /* get the operand                */
if arg(1,'o') then                          /* prefix minus operation?        */
                                            /* negate the number              */
  return self~class~new(-real, -imaginary)
tempreal = real - adder~real                /* subtract the real part         */
                                            /* subtract the imaginary part    */
tempimaginary = imaginary - adder~imaginary
                                            /* return a new item              */
return self~class~new(tempreal, tempimaginary)

::method '*'                                /* multiplication method          */
expose real imaginary                       /* access the state values        */
use arg multiplier                          /* get the operand                */
                                            /* calculate the real part        */
tempreal = (real * multiplier~real) - (imaginary * multiplier~imaginary)
                                            /* calculate the imaginary part   */
tempimaginary = (real * multiplier~imaginary) + (imaginary * multiplier~real)
                                            /* return a new item              */
return self~class~new(tempreal, tempimaginary)

::method '/'                                /* division method                */ 
expose real imaginary                       /* access the state values        */ 
use arg divisor                             /* get the operand                */ 
a=real                                      /* get real and imaginaries for   */                             
b=imaginary                                 /* both numbers                   */                             
c=divisor~real                                                           
d=divisor~imaginary                                                      
qr=((b*d)+(a*c))/(c**2+d**2)                /* generate the new result values */                             
qi=((b*c)-(a*d))/(c**2+d**2)                                             
return self~class~new(qr,qi)                /* return the new value           */

::method '%'                                /* integer division method        */ 
expose real imaginary                       /* access the state values        */ 
use arg divisor                             /* get the operand                */ 
a=real                                      /* get real and imaginaries for   */                             
b=imaginary                                 /* both numbers                   */                             
c=divisor~real                                                           
d=divisor~imaginary                                                      
qr=((b*d)+(a*c))%(c**2+d**2)                /* generate the new result values */                             
qi=((b*c)-(a*d))%(c**2+d**2)                                             
return self~class~new(qr,qi)                /* return the new value           */

::method '//'                               /* remainder method               */ 
expose real imaginary                       /* access the state values        */ 
use arg divisor                             /* get the operand                */ 
a=real                                      /* get real and imaginaries for   */                             
b=imaginary                                 /* both numbers                   */                             
c=divisor~real                                                           
d=divisor~imaginary                                                      
qr=((b*d)+(a*c))//(c**2+d**2)               /* generate the new result values */                             
qi=((b*c)-(a*d))//(c**2+d**2)                                             
return self~class~new(qr,qi)                /* return the new value           */

::method string                             /* format as a string value       */
expose real imaginary                       /* get the state info             */
return real'+'imaginary'i'                  /* format as real+imaginaryi      */

::class vector subclass complex public      /* vector subclass of complex     */

::method '[]' class                         /* quick creation of a vector item*/ 
use arg first, second                       /* get the arguments              */ 
return self~new(first, second)              /* create a new vector item       */ 
                                                                                    
::method string                             /* format as a string value       */ 
return '('self~real','self~imaginary')'     /* format as '(a,b)'              */ 
                                                                                    
                                            /* class for adding generalized   */ 
                                            /* string support to an object    */ 
::CLASS stringlike PUBLIC MIXINCLASS object

::METHOD unknown UNGUARDED                  /* create an unknown method       */
  use arg msgname, args                     /* get the message and arguments  */
                                            /* forward to the string value    */
  return .message~new(self~string, msgname, 'a', args)~send

::METHOD makestring                         /* add MAKESTRING capability      */
  return self~string                        /* return the string value        */
