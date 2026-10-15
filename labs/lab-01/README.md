# Lab 1 — SENSE: Giving a System Senses

- Team name:
- GitHub usernames:

Complete the tasks below in the same order as the lab handout. Replace prompts with your results and keep units visible.

## How to insert your photos

1. Save your own measurement photos as JPG or PNG. Use clear filenames, such as `fixed-resistor.jpg` or `ldr-covered.png`.
2. Upload them to `labs/lab-01/evidence/` in this private Labs repository using **Add file → Upload files**, then commit the upload. If the folder is missing, follow [Lab 1, Step 5](https://vinuni-cecs1011.github.io/labs/lab-01.html#upload-photos) to create it.
3. Edit this report. Replace each **Insert your photo here** prompt with an image line using your actual filename, for example: `![Fixed-resistor measurement showing the reading and unit](evidence/fixed-resistor.jpg)`. Paste the line without surrounding backticks. The `!` displays the photo inside the report.
4. Add a short caption below the image. Select **Preview** and check that the photo is visible, the reading/unit can be read, and the caption explains the result. Check filename spelling, extension and letter case if the image does not appear.
5. Commit the report update using your own account. Keep the photos in the repository so the submitted version contains both the report and evidence.

This starter contains no example photos. Insert your team's own evidence. Remove these setup instructions when your report is complete. Follow [the handout](https://vinuni-cecs1011.github.io/labs/lab-01.html) for the experiment and final submission checklist.

## Part 1: Meet the tools and the sensor

### Task 1. Measure a fixed resistor

- Nominal resistance and marked tolerance:
- Measured resistance (kΩ):
- Acceptable range (kΩ) and comparison with the measured value:

**Insert your photo here:** fixed-resistor measurement, showing the reading and unit. Add a caption stating what was measured.

### Task 2. Investigate the photoresistor

- How we reproduced the exposed and covered conditions:
- Exposed LDR resistance (kΩ):
- Covered LDR resistance (kΩ):
- How resistance changes with light:
- Our prediction for Vout when covering the LDR, and why:

**Insert your photo here:** exposed LDR resistance measurement, with a caption identifying the condition and reading.

**Insert your photo here:** covered LDR resistance measurement, with a caption identifying the condition and reading.

## Part 2: Build the sensor circuit

### Task 3. Set up the power supply

- Supply setting: 5 V; current limit: 0.01 A (10 mA).
- Measured supply voltage, Vs (V):

### Task 4. Build a voltage divider

**Insert your photo here:** your own circuit, labelled to identify +5 V, Vout and GND. Add a caption explaining these connections and note any correction made before powering the circuit.

### Task 5. Measure the output voltage

Use the fixed resistance from Task 1, the LDR resistances from Task 2 and the supply voltage from Task 3. Calculate Vout = Vs × Rphoto / (Rs + Rphoto), using the same units for both resistances. Show one calculation with your measured values.

| Condition and method | LDR resistance (kΩ) | Calculated output (V) | Measured output (V) |
| --- | --- | --- | --- |
| Exposed: | | | |
| Covered: | | | |

- Explanation of the observed change in Vout:
- Comparison of calculated and measured output; one difference or limitation:

## Part 3: Observe the signal over time

### Task 6. Connect the oscilloscope

- Probe tip and ground-reference connections:
- Probe attenuation and matching oscilloscope setting:

### Task 7. Observe the live signal

**Insert your photo here:** oscilloscope capture showing the signal change, with voltage and time scales visible. Add a caption describing what the trace shows. If you use a short recording instead, insert an accessible recording link here and explain the same result.

- Voltage scale and time scale:
- What changed when we covered/uncovered the LDR:
- Comparison with the multimeter readings and what the time trace reveals:

## Project connection

What quantity might our project measure? What decision would it support? What assumption needs testing? Our project need not use an LDR.

## Contributions

Add one row per member. Include physical, paired, analytical and documentation work as relevant. Each member commits meaningful work using their own account; commit counts are not graded.

| GitHub username | Work completed and result I can explain | Evidence or report section |
| --- | --- | --- |
| | | |

## Sources and AI use

Cite sources. Disclose permitted AI tools, purpose, relevant prompts/output used and how we checked or corrected it, or state that no AI was used. Keep private information out of the report and prompts.

Before submitting, check that your measurement photos appear inside the report and follow the handout's checklist. Submit your ordinary Labs repository link and the latest full commit SHA once per team in Canvas before the deadline. The report is `labs/lab-01/README.md`; no permanent link is required. Do not insert the SHA into this report. If you revise the work, update the SHA in Canvas only when resubmission is allowed.
