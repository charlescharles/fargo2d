/** \file var.c

Contains the function that connects the string of the parameter file to global variables.
The var() function is found in Interpret.c

*/

#define __LOCAL
#include "fargo.h"
#undef __LOCAL

void
InitVariables()
{
  var("DT", &DT, REAL, YES, "1.");
  var("SIGMA0", &SIGMA0, REAL, YES, "173.");
  var("NINTERM", &NINTERM, INT, YES, "10.");
  var("NTOT", &NTOT, INT, YES, "1501.");
  var("OUTPUTDIR", OUTPUTDIR, STRING, YES, "~masset");
  var("INNERBOUNDARY", OPENINNERBOUNDARY, STRING, NO, "WALL");
  var("OUTERBOUNDARY", OPENOUTERBOUNDARY, STRING, NO, "WALL");
  var("LABELADVECTION", ADVLABEL, STRING, NO, "NO");
  var("TRANSPORT", TRANSPORT, STRING, NO, "FAST");
  var("PLANETCONFIG", PLANETCONFIG, STRING, NO, "Systems/SolarSystem.cfg");
  var("MASSTAPER", &MASSTAPER, REAL, NO, "0.0000001");
  var("RADIALSPACING", GRIDSPACING, STRING, NO, "ARITHMETIC");
  var("NRAD", &NRAD, INT, YES, "64.0");
  var("NSEC", &NSEC, INT, YES, "64.0");
  var("RMIN", &RMIN, REAL, YES, "1.0");
  var("RMAX", &RMAX, REAL, YES, "1.0");
  var("THICKNESSSMOOTHING", &THICKNESSSMOOTHING, REAL, NO, "0.0");
  var("ROCHESMOOTHING", &ROCHESMOOTHING, REAL, NO, "0.0");
  var("ASPECTRATIO", &ASPECTRATIO, REAL, YES, "0.05");
  var("VISCOSITY", &VISCOSITY, REAL, NO, "0.0");
  var("ALPHAVISCOSITY", &ALPHAVISCOSITY, REAL, NO, "0.0");
  var("SIGMASLOPE", &SIGMASLOPE, REAL, YES, "0.0");
  var("RELEASERADIUS", &RELEASERADIUS, REAL, NO, "0.0");
  var("RELEASEDATE", &RELEASEDATE, REAL, NO, "0.0");
  var("OMEGAFRAME", &OMEGAFRAME, REAL, NO, "0.0");
  var("DISK", DISK, STRING, NO, "YES");
  var("FRAME", FRAME, STRING, NO, "FIXED");
  var("OUTERSOURCEMASS", OUTERSOURCEMASS, STRING, NO, "NO");
  var("WRITEDENSITY", WRITEDENSITY, STRING, NO, "YES");
  var("WRITEVELOCITY", WRITEVELOCITY, STRING, NO, "YES");
  var("INDIRECTTERM", INDIRECTTERM, STRING, NO, "YES");
  var("EXCLUDEHILL", EXCLUDEHILL, STRING, NO, "NO");
  var("IMPOSEDDISKDRIFT", &IMPOSEDDISKDRIFT, REAL, NO, "0.0");
  var("FLARINGINDEX", &FLARINGINDEX, REAL, NO, "0.0");
  var("ECCENTRICITY", &ECCENTRICITY, REAL, NO, "0.0");
  var("CAVITYRADIUS", &CAVITYRADIUS, REAL, NO, "0.0");
  var("CAVITYRATIO", &CAVITYRATIO, REAL, NO, "1.0");
  var("CAVITYWIDTH", &CAVITYWIDTH, REAL, NO, "1.0");
  var("TRANSITIONRADIUS", &TRANSITIONRADIUS, REAL, NO, "0.0");
  var("TRANSITIONRATIO", &TRANSITIONRATIO, REAL, NO, "1.0");
  var("TRANSITIONWIDTH", &TRANSITIONWIDTH, REAL, NO, "1.0");
  var("LAMBDADOUBLING", &LAMBDADOUBLING, REAL, NO, "0.0");
  var("NELSONBOUND", &NELSONBOUND, INT, NO, "0");
  var("MASSTIME", &MASSTIME, REAL, NO, "0.0");
  var("DENSITYFLOOR", &DENSITYFLOOR, REAL, NO, "0.0");

  var("TRUNCATETYPE", &TRUNCATETYPE, INT, NO, "0");
  var("TRUNCATERADIUS", &TRUNCATERADIUS, REAL, NO, "0.0");
  var("TRUNCATEWIDTH", &TRUNCATEWIDTH, REAL, NO, "0.0");
  var("TRUNCATEDENSITY", &TRUNCATEDENSITY, REAL, NO, "0.0");
  var("POTENTIALDAMPING", &POTENTIALDAMPING, INT, NO, "0");

}

