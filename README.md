
# **FluidNinja + Oceanology Guide**

This is a guide for integrating the plugins so that you can get water interaction FX from Ninja while having the aesthetics and functionality of Oceanology.

[![GitHub release](https://img.shields.io/github/v/release/sartaq12/WaterInteractionPlugin)](../../releases/latest)
&nbsp;&nbsp;&nbsp;&nbsp;[![ReleaseDate](https://img.shields.io/github/release-date/sartaq12/WaterInteractionPlugin)](../../releases/latest)
&nbsp;&nbsp;&nbsp;&nbsp;[![Downloads](https://img.shields.io/github/downloads/sartaq12/WaterInteractionPlugin/total)](../../releases/latest)
&nbsp;&nbsp;&nbsp;&nbsp;[![Oceanology Discord Server](https://img.shields.io/discord/654364478493687819?label=Oceanology&logo=Oceanology)](https://discord.gg/wXgZ6n8juB)
&nbsp;&nbsp;&nbsp;&nbsp;[![FluidNinja Discord Server](https://img.shields.io/discord/850913821240983553?label=FluidNinja&logo=FluidNinja)](https://discord.gg/ge2Fe8vDez)

**Preview Video:**  

https://github.com/Sartaq12/WaterInteractionPlugin/assets/37218094/21d838fa-7ea8-4cc1-99b3-70558a320262

Shader performance comparison:
![image3](https://user-images.githubusercontent.com/37218094/228063750-8339ddb2-451e-4046-bbeb-dc25c05646a2.png)

CPU performance cost:
![image7](https://user-images.githubusercontent.com/37218094/228063796-54f1d284-1c11-4059-b076-119a36afb0c6.png)
It costs ~0.5ms on my Ryzen 9 3950X

# Installation

## Dependencies
https://www.unrealengine.com/marketplace/en-US/product/fluidninja-live    
https://www.unrealengine.com/marketplace/en-US/product/oceanology   

This guide is assuming you have a clean **FluidNinjaLIVE 1.8.51.5** present in your content folder like this:
![image5](https://user-images.githubusercontent.com/37218094/228064034-16f4efe9-3fba-4f96-9657-b387f64d1960.png)

And that you did its migration guide(mainly for setting up FluidTrace collision channel).
Also that **Oceanology 5.1.5** is already installed in your project.


## Step 1 - Clone Repo

Clone repo or download and extract the release package

## Step 2 - Install WaterInteraction Plugin

In the files provided **copy** the **WaterInteraction folder** to your project Plugins folder.

Open your project and on the top left go Edit -> Plugins to open the plugins tab.

Search for “water” in the Plugins window and enable the plugin.
![image2](https://user-images.githubusercontent.com/37218094/228064200-7e0a647a-e3cc-4544-83af-c11e8f7d72b3.png)


## Step 3 - Checkout the Test Map

1. Open settings on your content browser
2. Make sure Show Plugin Content is True
3. Find the WaterInteraction Content under Plugins
4. Open the Test Map
![image9](https://user-images.githubusercontent.com/37218094/228064272-7cc537c3-35a5-49dd-a2b8-369f776ec051.png)

Now you can **play** and **hold LMB** to run around and confirm the **installation went through successfully!**


# Setup

1. **Add or replace** your existing Oceanology with the **Oceanology_FluidNinja** provided in the plugin.
2. **Open BP_TopDownCharacter** in the plugin as an example. Copy the nodes in **Begin Play** event to your Player Character class
3. **Very Important!**  
![image1](https://user-images.githubusercontent.com/37218094/228065541-597cd52e-ce37-4668-b330-ff9c6aeb85e6.png)
Open NinjaLive_Area_Water blueprint, select NinjaLiveComponent, search for a variable called “Force Trace Mesh Vertical Position” and make sure it is the same value as the Location.Z of the Oceanology_FluidNinja in your level. Do the same for NinjaLive_Water_Splashes, only increment it by -20  

4. Optional:
![image4](https://user-images.githubusercontent.com/37218094/228064433-684e2eaf-a6ea-4b5c-86fa-b63aee890275.png)

You can define **which object types interact** with the water sim by adding them to this array. You can also define which bones to trace for skeletal meshes(You might want to add hand_r and hand_l if you have swimming in your game)


# Editing Appearance

It is important to note when making changes it is recommended you **make a duplicate** beforehand **for comparison**.

The adjustments you can do are across a very wide set of interlinked parameters in the materials and blueprints, so be careful to **test** what they do **thoroughly** and make deliberate changes.


## Material Parameters

You can edit a lot of material parameters that affect the colour, normals, height etc. of the waves generated by the water simulation by opening up **M_Oceanology_Inst_FluidNinja**.

There you can see a lot of parameter categories, keep in mind that most of the **Oceanology parameters are overridden by the blueprint**, so focus on the Ninja parameters whose changes are kept. You can **hover over the parameter name** to see where it’s coming from, all those coming from MF_FluidNinjaFX you can edit.
![image10](https://user-images.githubusercontent.com/37218094/228064466-07f571d9-83fc-426f-9358-f76807a03dcd.png)

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
![image8](https://user-images.githubusercontent.com/37218094/228064500-12c7aba4-d07e-4a99-aafd-a14849c676db.png)
