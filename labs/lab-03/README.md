# Lab 3 – THINK + ACT: Sense → Process → Act

- **Team name:** Team 9
- **Prototype or display label:**
- **Members' GitHub usernames:** caocchinh, DUCDUCDUC38, bfhvn, phamvuminh080908
- **Shared Wokwi project link:**

## 1. Explore the Nano, program and connections

### 1.1. Explore the Nano board — Activity 1

Record your team's discussion in one or two sentences per question.

1. In **Processor and memory**, identify the chip that runs your sketch. Which memory keeps the program when power is removed, and which memory loses its working data?
   - **Answer:** The ATmega328P runs the sketch. Flash and EEPROM keep the program, while SRAM loses its data when power is off.

2. In **Clock speed**, compare 16 MHz with the example laptop clock. Why does the frequency ratio alone not tell you how much faster a program will run?
   - **Answer:** 2.4 GHz is 150× the clock frequency, but architecture, cores, memory, and waiting time also affect speed.

3. In **Analogue pins**, **Digital pins** and **Power and ground**, locate A0, D9, 5V and GND. Which connections carry information, and which provide power or a reference voltage?
   - **Answer:** A0 and D9 carry information. 5V supplies power and GND is the common reference.

4. In **Built-in LED**, find D13 and try the control. Could A6 replace D13 as an output? Use the pin descriptions to explain your answer.
   - **Answer:** No. A6 is analogue-input only, so it cannot act as a digital output.

5. Imagine building a smart light that turns on automatically when a room gets dark. Which Arduino pins could you use to connect a light sensor and an LED? What would the Arduino program need to decide?
   - **Answer:** Connect the sensor's AO to A0, because A0 can measure a changing voltage, and connect the LED to a digital pin such as D13. The program checks whether the reading rises above a darkness threshold: if so, the LED turns on; otherwise, it stays off.

6. Imagine building an automatic window shade that closes when sunlight is too bright. How could you use readings from a light sensor to decide when to close the shade? What could you connect to the Arduino to physically move the shade?
   - **Answer:** Close the shade when the reading passes a brightness threshold. A servo on D9 moves the shade.

### 1.2. Trace the program — Activity 2

In one sentence, describe what happened to the startup and loop messages when you ran and restarted the Activity 2 program.

- **Answer:** The startup message prints `Ready`, the loop message prints `count` with its value increasing by `1` (`+= 1`) each loop, and the blink slows down from 500 ms to 1000 ms.

### 1.3. Explain the connections — Activities 3 and 4

Use one or two sentences for each explanation. Include a labelled sensor → controller → actuator chain; text is sufficient. Include the LCD as an additional output.

- **Why must the sensor, servo and Nano share GND?**
  - **Answer:** They share GND to use 0 V as a common reference. The Nano uses the 0 V to 5 V scale to interpret sensor and servo signals (such as PWM and ADC values) as voltages.

- **Why does A0 connect to an analogue input, and what would change in the code if you used A1 instead of A0?**
  - **Answer:** AO connects to an analogue input because the sensor outputs a voltage that varies with light, and the Nano's ADC measures that voltage. If you wire AO to A1, replace `analogRead(A0)` with `analogRead(A1)`.

- **What does D9 carry, which wires supply the servo's power, and what would change if the signal moved to D8?**
  - **Answer:** D9 carries the servo control pulses, V+ connects to 5 V, and GND provides the return path. If you move the signal wire to D8, change `shade.attach(9)` to `shade.attach(8)`.

## 2. Observe the sensor

Record two live input conditions before implementing the decision. The light setting is in lux; the sensor reading is the whole number returned by `analogRead(A0)`, from 0 to 1023.

| Condition  | Simulated light setting (lux) | Observed sensor reading (0–1023) |
| ---------- | ----------------------------- | -------------------------------- |
| Less light | 0.1                           | 1015                             |
| More light | 100000                        | 8                                |

Explain how the reading changes with light. Why does the 10-bit ADC return 0–1023 even though the Nano stores the result in a 16-bit `int`?

- **How the reading changes:** More light lowers the sensor's output voltage, so the reading dropped from 1015 at 0.1 lux to 8 at 100000 lux.
- **10-bit ADC vs. 16-bit `int`:** The 10-bit ADC produces 1,024 possible values, from 0 to 1023. The 16-bit `int` stores the result without changing the ADC's resolution.

## 3. State the requirement

- **Threshold T (sensor reading):**
- **Closed command (degrees):**
- **Open command (degrees):**

State the rule, including what happens at equality, and justify the threshold using your observations. Keep T between 1 and 1022.

## 4. Test and revise

Write predictions before running the tests. Record actual results separately and state whether each agrees. Mark an unexecuted test as “Not run.”

Complete the first three rows in Activity 5, before adding the LCD; record its state as “Not added.” Restore `int reading = analogRead(A0);`, then add the LCD and complete the two live-test rows in Activity 6.

| Test              | Input value and source                       | Expected command and response             | Observed command, virtual response and LCD state | Agreement or correction |
| ----------------- | -------------------------------------------- | ----------------------------------------- | ------------------------------------------------ | ----------------------- |
| Below threshold   | T − 1; injected software input               | `TEAM 9 / reading=506, commanded_angle=0` | `TEAM 9 / reading=506, commanded_angle=0`        |                         |
| At threshold      | T; injected software input                   |                                           |                                                  |                         |
| Above threshold   | T + 1; injected software input               |                                           |                                                  |                         |
| Bright live input | Record the light setting and observed count. |                                           |                                                  |                         |
| Live recovery     | Record the light setting and observed count. |                                           |                                                  |                         |

Explain one correction or limitation. Distinguish the injected tests from tests using the simulated sensor.

In the two live-test rows, record whether the LCD reading and command agree with the serial output and servo response. Use the handout’s [I2C explanation and connection table](https://vinuni-cecs1011.github.io/labs/lab-03.html#lcd-interface) to check the display wiring and address.

Insert **one screenshot** showing the complete circuit, readable LCD and serial output during a live test. Use your actual filename, for example `![Circuit and live test](controller.png)`, and add a caption identifying the condition and response. The LCD must show your team or prototype label, current reading and commanded state. The other results belong in the table; additional screenshots are not required.

## 5. Connect to the final project

In two or three sentences, describe an input → decision → output chain useful for your final project. State how the sensor and output connect to the controller, and name one physical test. Use the handout’s [project examples](https://vinuni-cecs1011.github.io/labs/lab-03.html#project-examples) for guidance. Your Lab 2 mount or enclosure may support this design.

## Source files

- [Controller program](sketch.ino).
- [Circuit diagram](diagram.json).
- [Library list](libraries.txt).

Restore `int reading = analogRead(A0);` in the final program so it uses the sensor rather than a fixed test value. Check that all three files are present beside this report and that the links open. Include both Servo and LiquidCrystal I2C in the library list. Save the same final version in Wokwi, then ask another member to open the shared project link above and run it. The GitHub SHA identifies the assessed version; the Wokwi link provides a runnable copy.

## Contributions

Use one row per member. Each member should commit meaningful work using their own GitHub account and explain their practice or team contribution. Prediction, coding, testing, interpretation, paired work and documentation all count when supported by evidence.

| GitHub username  | Contribution and related evidence | One result or concept I can explain |
| ---------------- | --------------------------------- | ----------------------------------- |
| caocchinh        |                                   |                                     |
| DUCDUCDUC38      |                                   |                                     |
| bfhvn            |                                   |                                     |
| phamvuminh080908 |                                   |                                     |

## Sources and AI use

Credit sources beyond the supplied course checkpoints. If AI was used, identify the tool, relevant prompt and output, and your verification or corrections. Otherwise, write “No AI used.”

Before submission, check this record against the handout supplied for Lab 3. Submit your team name, ordinary repository URL, report path, latest full `main` SHA and shared Wokwi project link in Canvas after all files are saved. Keep the SHA out of this report.
