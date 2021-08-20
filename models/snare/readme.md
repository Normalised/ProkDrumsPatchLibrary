
Migrations

Top Level create a DefaultValues.txt

Write list of param name to default value for latest preset version, e.g.

[code]
SineAFreq = 100.0
SineAFrqAttackTime = 0.0
[/code]

Create a folder for each preset version

Create ParamNames.txt in the folder

Paste param names from the Config.h params enum, e.g. :

[code]
SineAFreq, SineAFrqAttackTime, SineAFrqDecayTime, SineAFrqEnvAmount, SineAFrqDecayExtendLevel, SineAFrqDecayExtendFactor,
SineBFreq, SineBFrqAttackTime, SineBFrqDecayTime, SineBFrqEnvAmount, SineBFrqDecayExtendLevel, SineBFrqDecayExtendFactor,
[/code]

Paste the DefaultParams.h header file from the module source into the relevant preset version directory (normally current - 1)

Run the ProkDrumPatchUpdateApp to generate a new DefaultParams.h in <CurrentVersion> folder. Copy that back into the module source code.
	

## Adding new params workflow

Module

1. Update modelVersion in ThonkSnare/src/SnareEngine.h 
2. Add params to ThonkSnare/src/SnareEngine.h
3. Create folder for version in ThonkSnare/migrations
4. Create ParamNames.txt in the folder
5. Paste param names from the ThonkSnare/src/SnareEngine.h
6. Implement param usage in ThonkSnare/src/SnareEngine.cpp
7. Update ThonkSnare/migrations/DefaultValues.txt with default values for new parameters
8. Run header update app (Prok Drum Patch Tools)
9. Replace DefaultParams.h. Copy ThonkSnare/migrations/<VERSION>/DefaultParams.h to ThonkSnare top level folder.

UI

1. Update config.version in ProkModularCore src/com/prokmodular/drums/SnareModel.java
2. Add UI to ProkModularCore src/com/prokmodular/drums/SnareUI.java
3. Test
