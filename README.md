<!-----

You have some errors, warnings, or alerts. If you are using reckless mode, turn it off to see inline alerts.
* ERRORs: 0
* WARNINGs: 0
* ALERTS: 10

Conversion time: 2.788 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β34
* Mon Mar 27 2023 13:43:11 GMT-0700 (PDT)
* Source doc: FluidNinja + Oceanology Guide
* This document has images: check for >>>>>  gd2md-html alert:  inline image link in generated source and store images to your server. NOTE: Images in exported zip file from Google Docs may not appear in  the same order as they do in your doc. Please check the images!


WARNING:
You have 3 H1 headings. You may want to use the "H1 -> H2" option to demote all headings by one level.

----->


<p style="color: red; font-weight: bold">>>>>>  gd2md-html alert:  ERRORs: 0; WARNINGs: 1; ALERTS: 10.</p>
<ul style="color: red; font-weight: bold"><li>See top comment block for details on ERRORs and WARNINGs. <li>In the converted Markdown or HTML, search for inline alerts that start with >>>>>  gd2md-html alert:  for specific instances that need correction.</ul>

<p style="color: red; font-weight: bold">Links to alert messages:</p><a href="#gdcalert1">alert1</a>
<a href="#gdcalert2">alert2</a>
<a href="#gdcalert3">alert3</a>
<a href="#gdcalert4">alert4</a>
<a href="#gdcalert5">alert5</a>
<a href="#gdcalert6">alert6</a>
<a href="#gdcalert7">alert7</a>
<a href="#gdcalert8">alert8</a>
<a href="#gdcalert9">alert9</a>
<a href="#gdcalert10">alert10</a>

<p style="color: red; font-weight: bold">>>>>> PLEASE check and correct alert issues and delete this message and the inline alerts.<hr></p>



# **FluidNinja + Oceanology Guide**

This is a guide for integrating the plugins so that you can get water interaction FX from Ninja while having the aesthetics and functionality of Oceanology.

**[Preview Video](https://www.youtube.com/watch?v=R91vouwOHCw)**

Shader performance comparison:



<p id="gdcalert1" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image1.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert2">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image1.png "image_tooltip")


CPU performance cost:



<p id="gdcalert2" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image2.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert3">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image2.png "image_tooltip")


It costs ~0.5ms on my Ryzen 9 3950X


# Installation


## Dependencies

This guide is assuming you have a clean **FluidNinjaLIVE 1.8.51.5** present in your content folder like this:



<p id="gdcalert3" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image3.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert4">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image3.png "image_tooltip")


And that you did its migration guide(mainly for setting up FluidTrace collision channel).

Also that **Oceanology 5.1.4** is already installed in your** project.**


## Step 1 - Clone Repo

Clone repo or download and extract the release package

## Step 2 - Oceanology Fix

You need to **copy** the **QuadTree.h** provided in the files and **overwrite** the one found in your Oceanology plugin.

The path is _Oceanology_Plugin\Source\Oceanology_Plugin\Public\QuadTree.h_

This path assumes you have Oceanology installed in the Plugins folder of your project.



<p id="gdcalert4" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image4.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert5">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image4.png "image_tooltip")


The plugin was made with Oceanology in your project Plugins folder, so this is the recommended way of using it.

Alternatively, your Oceanology might be installed in the Engine like it is by default from the marketplace, in that case the path is _Program Files\Epic Games\UE_5.1\Engine\Plugins\Marketplace\Oceanology_Plugin\Source\Oceanology_Plugin\Public\QuadTree.h_

The plugin contains a child of BP_Oceanology_Infinity, so you might have to reparent the actor when doing it this way.


## Step 3 - Install WaterInteraction Plugin

In the files provided **copy** the **WaterInteraction folder** to your project Plugins folder.

Open your project and on the top left go Edit -> Plugins to open the plugins tab.

Search for “water” in the Plugins window and enable the plugin.



<p id="gdcalert5" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image5.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert6">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image5.png "image_tooltip")



## Step 4 - Checkout the Test Map



1. Open settings on your content browser
2. Make sure Show Plugin Content is True
3. Find the WaterInteraction Content under Plugins
4. Open the Test Map



<p id="gdcalert6" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image6.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert7">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image6.png "image_tooltip")


Now you can **play** and **hold LMB** to run around and confirm the **installation went through successfully!**


# Setup



1. **Add or replace** your existing BP_Oceanology_Infinity with the **BP_Oceanology_Infinity_FluidNinja** provided in the plugin.
2. **Open BP_TopDownCharacter** in the plugin as an example. Copy the WaterInteractionActor and WaterSplashActor components to your Player Character class
3. **Very Important!**

<p id="gdcalert7" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image7.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert8">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image7.png "image_tooltip")
** **Open NinjaLive_Area_Water blueprint, select NinjaLiveComponent, search for a variable called “Force Trace Mesh Vertical Position” and make sure it is the same value as the Location.Z of the BP_Oceanology_Infinity_FluidNinja in your level. Do the same for NinjaLive_Water_Splashes, only increment it by -20
4. Optional:

<p id="gdcalert8" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image8.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert9">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image8.png "image_tooltip")
You can define **which object types interact** with the water sim by adding them to this array. You can also define which bones to trace for skeletal meshes(You might want to add hand_r and hand_l if you have swimming in your game)


# Editing Appearance

It is important to note when making changes it is recommended you **make a duplicate** beforehand **for comparison**.

The adjustments you can do are across a very wide set of interlinked parameters in the materials and blueprints, so be careful to **test** what they do **thoroughly** and make deliberate changes.


## Material Parameters

You can edit a lot of material parameters that affect the colour, normals, height etc. of the waves generated by the water simulation by opening up **M_Oceanology_Inst_FluidNinja**.

There you can see a lot of parameter categories, keep in mind that most of the **Oceanology parameters are overridden by the blueprint**, so focus on the Ninja parameters whose changes are kept. You can **hover over the parameter name** to see where it’s coming from, all those coming from MF_FluidNinjaFX you can edit.



<p id="gdcalert9" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image9.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert10">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image9.png "image_tooltip")


A cool simple one you can try out first is **ApplySineWavesToNormal**, set it to true and compare how the ripples look while you walk around.


## Simulation Parameters

The sim and interaction with it is controlled by parameters in two places.

You can find params on interaction in the Class Defaults of the NinjaLive_Area_Water actor,

There you can adjust important things such as **Trace Mesh Size** and **Interaction Volume Size**.

The simulation itself is controlled by NinjaLiveComponent, where you can adjust things that control how the fluidsim is drawn.

There are additional parameters stored in the Default Preset variable, you can **open the Data Table** and check them out also.

**Very Important!**

You can **debug** what is happening with the underlying simulation by **setting the Trace Mesh Invisible variable to false.**

Then you will see the simulation rendered to the trace mesh like this:



<p id="gdcalert10" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image10.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert11">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image10.png "image_tooltip")

