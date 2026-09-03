/*
	Used by Radar and other maps to determine what % of 1 is 50m on arma maps... no solution yet just listed them all manually. 
*/

_scale = switch worldName do {
	case "Altis": {0.014};	
	case "Stratis": {0.045};
	case "Malden": {0.035};
	case "Tanoa": {0.024};
	case "vr": {0.050};
	
	case "optre_gridlock": {0.4};
	case "Iribus_OPTRE": {0.094};
	case "Blood_OPTRE": {0.094};

	default {0.024}; 
	
};

_scale