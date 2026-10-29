# Lab 2 – SHAPE: Explore and Design

- Team name: Team 9
- Members' GitHub usernames: caocchinh, DUCDUCDUC38, bfhvn, phamvuminh080908

## Classroom record

### 1. Explore CAD and the printing process

Answer each question in one or two sentences and identify the source you used.

1. What does the CAD application do, what does the slicer do, and what does the printer do?
   What does the CAD application do, what does the slicer do, and what does the printer do?
CAD creates the 3D digital model, the slicer translates it into layer-by-layer G-code instructions, and the 3D printer executes that code by depositing material to create the physical part.  
[source](https://all3dp.com/2/what-is-3d-printing/)
2. For an initial sensor bracket, what advantage or limitation of PLA and PETG would affect your material choice?
PLA prints with sharper dimensional accuracy for quick fit checks, but PETG is preferred if the bracket needs higher heat resistance and impact toughness around warm electronics.  
[source](https://help.prusa3d.com/category/material-guide_220)
3. Which dimensions would you check to confirm that a part fits its component and the printer's build space? Why should you check an imported STL's size and units?
Check the bracket's mounting hole diameters and spacing against the sensor, plus its overall outer dimensions against the print bed limits. You must verify STL scale because the format is unitless, meaning a slicer can easily misread millimeters as inches (scaling it 25.4× too big).  
[source](https://all3dp.com/1/stl-file-format-3d-printing/)
4. Which file would you keep for future dimension changes, and when would STEP be useful?
   Keep the native CAD file (such as `.f3d` or `.sldprt`) to retain your editable parametric sketch history. A STEP file is essential when sharing the solid 3D geometry across different CAD programs without losing exact surfaces to mesh triangulation.  
[source](https://all3dp.com/2/step-file-format-simply-explained/)
5. How could print orientation affect the need for temporary supports? Describe one example.
   Orienting a part to keep overhangs under 45° allows layers to support themselves without extra scaffolding. For example, printing an L-bracket standing upright requires support structures beneath the cantilevered arm, whereas laying it flat on its side eliminates the overhang completely.  
[source](https://www.hubs.com/knowledge-base/how-design-parts-fdm-3d-printing/)

### 2. Choose a design for the final project

- Describe where the part would be used in your final project and what it would support, protect or position. Identify one important dimension or connection and label assumptions.
- Give the reference title, creator, link, license and available file types. State the recommended material, or write “not stated,” and explain your proposed print orientation.
- Propose one simple adaptation for your project. If browsing is inaccessible, identify the supplied example or your own design route and its project use instead.

### 3. Practise SolidWorks individually

- Tutorial source: [Solidworks Tutorial for Absolute Beginners!](https://www.youtube.com/watch?v=1du6w97Rsm4)
- Stage reached: cut extrude
- Representative native file: [labs/lab-02/Team09_Lab02_practice.SLDPRT](https://github.com/VinUni-CECS1011/f26-cecs1011-teamnine-labs/blob/5835a4f1d4509ccdffda23f25c8c20db0c57ff68/labs/lab-02/Team09_Lab02_practice.SLDPRT)

Insert **one representative practice screenshot** and caption it with the team name and stage reached. For example, use `![Team name: practice stage](practice.png)` with your uploaded filename. Each member should describe their own practice operation in the contribution table below; separate individual submissions are not required.

### 4. Begin the team design

- State your part's purpose and one measurable requirement, with a reason. Identify the source of its dimensions and label assumptions.
- Insert **one dimensioned starting sketch**, using a line such as `![Starting sketch](starting-sketch.png)` with your uploaded filename.
- Link the initial CAD document and describe the sketch or first feature created in class. If the same file is updated later, its earlier version remains in Git history.
- State which CAD software you will use after class and what remains to be completed. Record any unresolved access or modelling difficulty.

## Design completed after class

- CAD application/version:
- State whether you created a new model, adapted a reference or reconstructed a limited feature. Credit any reused source and identify the scope.

| Dimension/check | Intended value and reason | CAD result and checking method |
| --- | --- | --- |
| Critical dimension | | |
| Another relevant dimension | | |

Insert **one final-model image** showing the checked dimensions, using a line such as `![Final model and checked dimensions](final-model.png)`. Retain the starting sketch in the classroom record. There should be **three images in total**, including the practice screenshot.

- Explain what you created or changed, any revision and any remaining limitation.
- Link the final native CAD document and STL. State the export units or settings and whether you reopened the STL and checked its size.
- Propose one physical test that would check the part's fit or function.

## Contributions

Use one row per member and update it as work develops. Each member should contribute using their own GitHub account and explain their individual practice and team design work.

| GitHub username | Individual practice operation I can explain | Team design contribution and result I can explain |
| --- | --- | --- |
| caocchinh | | |
| DUCDUCDUC38 | | |
| bfhvn | | |
| phamvuminh080908 | | |

## Sources and AI use

List other sources. If AI was used, identify the tool, relevant prompt and output, and your verification or corrections. Otherwise, write “No AI used.”

Before submission, check the files and links against the [Lab 2 handout](https://vinuni-cecs1011.github.io/labs/lab-02.html#save-and-submit). Include your team name, ordinary repository link, report path and full SHA in the Canvas record. Copy the latest full repository commit SHA after saving everything; keep it out of this report.
