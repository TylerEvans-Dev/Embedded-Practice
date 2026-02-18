# Practice questions for embedded interview prep.


## Question 1 (DO-178)
what are the various 5 levels of prior. for DO-178 please give examples

## Question 2 (Systems)
why would you choose freertos over Zephyr?

## Question 2.1 
what are some diff. network Topology setups?


## Question 3 (Specific To Interupts)
How do you handle shared variables between an Interrupt Service Routine (ISR) and the main background loop to prevent race conditions?


## Question 3 (ANSI/MISRA C)

which of the following violates the ANSI MISRA C standard
<ul id="really bad don't do this">
    <li>
        a '
        int v = 0;
        int x = v++
        '
    </li>
    <li>
        b  '
        int v = 0;
        int x = 0;
        int x = v;
        v++
        '
    </li> 
    <li> 
        c 'int q;
        int j;
        j--;'
    </li> 
</ul>

## Question 5 coded example. see practice_question.c in main






</br>

# Gen. Questions if there is addtional desire for review. 
not needed but good to consider answers will be linked below. if you have time could be good. 
## Question (physical)
 what is a pullup/pulldown resistor and what values are the resitors typically in the range of
<a href="https://www.electronics-tutorials.ws/logic/pull-up-resistor.html">link to ans </a>
 
## Question (tran. protocols)
what is I2C, and I3C?

<a href="https://www.totalphase.com/blog/2022/05/i2c-vs-i3c-what-are-the-differences/?srsltid=AfmBOoo-Wy0klNoTA9jRn3e73W3vLsG1-n_JQUweq0q1NwrSAgn-QhXL"> link to ans</a>

what is SPI?
<a href="https://learn.sparkfun.com/tutorials/serial-peripheral-interface-spi/all">link to ans</a>
what is CAN?
<a href="https://en.wikipedia.org/wiki/CAN_bus">link to ans</a>
what is USART, UART, and what are the diffrence between the two?
<a href="https://www.geeksforgeeks.org/computer-networks/difference-between-usart-and-uart/">link to ans</a>


## Question (open protocol)
what would be the best choice for an actuator?
  var. ans.
what would be the best choice for a display?
  var. ans. 
what would be the best choice for a microsd card?
  var. ans.
when would it be ideal to use I2C over SPI
