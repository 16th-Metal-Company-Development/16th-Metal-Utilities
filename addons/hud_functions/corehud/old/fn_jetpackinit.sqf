/*
OPTRE_Fnc_HudInit  

Author: Big_Wilk

Description: Adds Ehs and key binds for huds

Command: Call 
Return: Nothing  
Syntax: N/A
Parameters: 
Media: None 

Usage: Call this function at the start of your mission, in your init.sqf for example
Example: 0 = [] call OPTRE_Fnc_hudInit32Bit

MP: run on each client 
*/

// Vars

if isDedicated exitWith {};

0 = [] execVM "OPTRE_FunctionsLibrary\Scripts\Keys2.sqf"; // needs to wait for other cba stuff to be initialised 