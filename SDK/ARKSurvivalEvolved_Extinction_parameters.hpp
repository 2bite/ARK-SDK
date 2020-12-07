#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Extinction_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Extinction.Extinction_C.DomeStreaming
struct AExtinction_C_DomeStreaming_Params
{
};

// Function Extinction.Extinction_C.AscensionToggle
struct AExtinction_C_AscensionToggle_Params
{
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Lights;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.OnRep_IsMeteorStorm
struct AExtinction_C_OnRep_IsMeteorStorm_Params
{
};

// Function Extinction.Extinction_C.DomeToggles
struct AExtinction_C_DomeToggles_Params
{
	bool                                               isEntering;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.SpawnMeteors
struct AExtinction_C_SpawnMeteors_Params
{
	struct FVector                                     Start_Point;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End_Point;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.SetWaterLine
struct AExtinction_C_SetWaterLine_Params
{
	bool                                               IsUnderwater;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isRiverWater;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaterDepth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.K2Node_MatineeController_185_Finished
struct AExtinction_C_K2Node_MatineeController_185_Finished_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_46_Finished
struct AExtinction_C_K2Node_MatineeController_46_Finished_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_40_DLIGHT
struct AExtinction_C_K2Node_MatineeController_40_DLIGHT_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_40_Finished
struct AExtinction_C_K2Node_MatineeController_40_Finished_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_132_END
struct AExtinction_C_K2Node_MatineeController_132_END_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_132_Finished
struct AExtinction_C_K2Node_MatineeController_132_Finished_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_HideSubtitle
struct AExtinction_C_K2Node_MatineeController_31_HideSubtitle_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_NextSubtitle
struct AExtinction_C_K2Node_MatineeController_31_NextSubtitle_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_ResetSubtitles
struct AExtinction_C_K2Node_MatineeController_31_ResetSubtitles_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_OpenCredits
struct AExtinction_C_K2Node_MatineeController_31_OpenCredits_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot05
struct AExtinction_C_K2Node_MatineeController_31_Shot05_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot04
struct AExtinction_C_K2Node_MatineeController_31_Shot04_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot03
struct AExtinction_C_K2Node_MatineeController_31_Shot03_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot02
struct AExtinction_C_K2Node_MatineeController_31_Shot02_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot01
struct AExtinction_C_K2Node_MatineeController_31_Shot01_Params
{
};

// Function Extinction.Extinction_C.K2Node_MatineeController_31_Finished
struct AExtinction_C_K2Node_MatineeController_31_Finished_Params
{
};

// Function Extinction.Extinction_C.katyperry
struct AExtinction_C_katyperry_Params
{
};

// Function Extinction.Extinction_C.Start Rain
struct AExtinction_C_Start_Rain_Params
{
};

// Function Extinction.Extinction_C.Stop Rain
struct AExtinction_C_Stop_Rain_Params
{
};

// Function Extinction.Extinction_C.playit
struct AExtinction_C_playit_Params
{
};

// Function Extinction.Extinction_C.stopit
struct AExtinction_C_stopit_Params
{
};

// Function Extinction.Extinction_C.stoptime
struct AExtinction_C_stoptime_Params
{
};

// Function Extinction.Extinction_C.StartTime
struct AExtinction_C_StartTime_Params
{
};

// Function Extinction.Extinction_C.CancelWeatherMatinee
struct AExtinction_C_CancelWeatherMatinee_Params
{
};

// Function Extinction.Extinction_C.Stop_Weather
struct AExtinction_C_Stop_Weather_Params
{
};

// Function Extinction.Extinction_C.ReceiveTick
struct AExtinction_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.Rain Stopped
struct AExtinction_C_Rain_Stopped_Params
{
};

// Function Extinction.Extinction_C.ReceiveBeginPlay
struct AExtinction_C_ReceiveBeginPlay_Params
{
};

// Function Extinction.Extinction_C.Cold Front
struct AExtinction_C_Cold_Front_Params
{
};

// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_42_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_42_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_52_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_52_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_121_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_121_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_134_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_134_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.Heat Wave
struct AExtinction_C_Heat_Wave_Params
{
};

// Function Extinction.Extinction_C.Start Meteors
struct AExtinction_C_Start_Meteors_Params
{
};

// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_368_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_368_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_388_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_388_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_585_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_585_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_607_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_607_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_528_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_528_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_553_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_553_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_768_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_768_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_795_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_795_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_823_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_823_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_852_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_852_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_945_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_945_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_978_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_978_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1012_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1012_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1047_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1047_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1083_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1083_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1120_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1120_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1158_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1158_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1197_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1197_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1237_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1237_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1278_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1278_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1320_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1320_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1363_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1363_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1407_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1407_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1452_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1452_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1498_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1498_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1545_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1545_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1593_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1593_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1642_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1642_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1692_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1692_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1743_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1743_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2013_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2013_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2070_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2070_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2706_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2706_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2785_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2785_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.Meteor_Strike
struct AExtinction_C_Meteor_Strike_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_372_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_372_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_437_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_437_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_503_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_503_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_570_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_570_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_638_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_638_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_707_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_707_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1185_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1185_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1256_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1256_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2448_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2448_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2521_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2521_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3243_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3243_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3318_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3318_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_592_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_592_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_669_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_669_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_747_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_747_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_826_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_826_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_987_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_987_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1069_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1069_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1152_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1152_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1321_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1321_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_870_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_870_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_1312_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_1312_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__MatineeValueInterpolationContainer_EX_4_K2Node_ActorBoundEvent_1743_ActorMatineeUpdated__DelegateSignature
struct AExtinction_C_BndEvt__MatineeValueInterpolationContainer_EX_4_K2Node_ActorBoundEvent_1743_ActorMatineeUpdated__DelegateSignature_Params
{
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_534_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_534_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_626_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_626_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_719_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_719_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_813_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_813_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_908_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_908_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_1004_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_1004_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1101_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1101_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1199_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1199_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2283_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2283_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2383_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2383_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_1940_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_1940_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_2249_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_2249_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2522_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2522_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2831_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2831_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3348_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3348_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3444_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3444_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7246_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7246_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7344_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7344_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16495_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16495_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16597_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16597_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1624_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1624_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1728_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1728_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1344_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1344_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_1976_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_1976_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_2084_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_2084_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2407_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2407_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2517_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2517_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2737_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2737_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2849_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2849_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3184_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3184_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3298_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3298_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3767_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3767_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3883_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3883_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5840_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5840_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5958_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5958_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6311_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6311_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6431_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6431_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7266_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7266_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7388_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7388_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7753_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7753_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7877_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7877_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8740_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8740_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8866_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8866_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16009_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16009_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16137_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16137_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17790_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17790_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17920_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17920_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1572_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1572_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1706_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1706_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1330_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1330_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1466_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1466_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2413_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2413_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2551_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2551_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4060_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4060_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4200_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4200_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5175_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5175_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5317_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5317_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6588_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6588_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6732_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6732_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1430_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1430_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1576_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1576_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4640_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4640_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4788_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4788_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_4937_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_4937_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_5087_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_5087_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5238_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5238_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5390_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5390_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5543_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5543_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5697_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5697_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_5852_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_5852_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_6008_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_6008_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12098_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12098_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12256_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12256_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.Start Eclipse
struct AExtinction_C_Start_Eclipse_Params
{
};

// Function Extinction.Extinction_C.KingKaijuDefeatMatinee
struct AExtinction_C_KingKaijuDefeatMatinee_Params
{
};

// Function Extinction.Extinction_C.KingKaijuSummonMatinee
struct AExtinction_C_KingKaijuSummonMatinee_Params
{
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3266_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3266_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3438_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3438_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_1061_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_1061_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.Ascend0
struct AExtinction_C_Ascend0_Params
{
};

// Function Extinction.Extinction_C.Ascend1
struct AExtinction_C_Ascend1_Params
{
};

// Function Extinction.Extinction_C.Ascend2
struct AExtinction_C_Ascend2_Params
{
};

// Function Extinction.Extinction_C.BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1490_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1490_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1658_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1658_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_1063_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_1063_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1218_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1218_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1374_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1374_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2170_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2170_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2328_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2328_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_942_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_942_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1102_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1102_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_1263_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_1263_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1425_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1425_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3198_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3198_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3362_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3362_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1321_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1321_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1503_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1503_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_7920_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_7920_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_8088_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_8088_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_1815_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_1815_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_2164_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_2164_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.PreLoadAscension
struct AExtinction_C_PreLoadAscension_Params
{
};

// Function Extinction.Extinction_C.BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_4622_ActorBeginOverlapSignature__DelegateSignature
struct AExtinction_C_BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_4622_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1336_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1336_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1506_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1506_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.FinishShot6
struct AExtinction_C_FinishShot6_Params
{
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_996_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_996_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_1165_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_1165_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_2855_PostprocessVolumeEnteredSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_2855_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_3025_PostprocessVolumeLeftSignature__DelegateSignature
struct AExtinction_C_BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_3025_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extinction.Extinction_C.StopKKMatinees
struct AExtinction_C_StopKKMatinees_Params
{
};

// Function Extinction.Extinction_C.ExecuteUbergraph_Extinction
struct AExtinction_C_ExecuteUbergraph_Extinction_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
