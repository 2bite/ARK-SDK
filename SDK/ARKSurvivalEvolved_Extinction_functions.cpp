// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Extinction_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Extinction.Extinction_C.DomeStreaming
// ()

void AExtinction_C::DomeStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.DomeStreaming");

	AExtinction_C_DomeStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.AscensionToggle
// ()
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Lights                         (Parm, ZeroConstructor, IsPlainOldData)

void AExtinction_C::AscensionToggle(bool Hidden, bool Lights)
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.AscensionToggle");

	AExtinction_C_AscensionToggle_Params params;
	params.Hidden = Hidden;
	params.Lights = Lights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.OnRep_IsMeteorStorm
// ()

void AExtinction_C::OnRep_IsMeteorStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.OnRep_IsMeteorStorm");

	AExtinction_C_OnRep_IsMeteorStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.DomeToggles
// ()
// Parameters:
// bool                           isEntering                     (Parm, ZeroConstructor, IsPlainOldData)

void AExtinction_C::DomeToggles(bool isEntering)
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.DomeToggles");

	AExtinction_C_DomeToggles_Params params;
	params.isEntering = isEntering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.SpawnMeteors
// ()
// Parameters:
// struct FVector                 Start_Point                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End_Point                      (Parm, ZeroConstructor, IsPlainOldData)

void AExtinction_C::SpawnMeteors(const struct FVector& Start_Point, const struct FVector& End_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.SpawnMeteors");

	AExtinction_C_SpawnMeteors_Params params;
	params.Start_Point = Start_Point;
	params.End_Point = End_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.SetWaterLine
// ()
// Parameters:
// bool                           IsUnderwater                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRiverWater                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          WaterDepth                     (Parm, ZeroConstructor, IsPlainOldData)

void AExtinction_C::SetWaterLine(bool IsUnderwater, bool isRiverWater, float WaterDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.SetWaterLine");

	AExtinction_C_SetWaterLine_Params params;
	params.IsUnderwater = IsUnderwater;
	params.isRiverWater = isRiverWater;
	params.WaterDepth = WaterDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_185_Finished
// ()

void AExtinction_C::K2Node_MatineeController_185_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_185_Finished");

	AExtinction_C_K2Node_MatineeController_185_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_46_Finished
// ()

void AExtinction_C::K2Node_MatineeController_46_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_46_Finished");

	AExtinction_C_K2Node_MatineeController_46_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_40_DLIGHT
// ()

void AExtinction_C::K2Node_MatineeController_40_DLIGHT()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_40_DLIGHT");

	AExtinction_C_K2Node_MatineeController_40_DLIGHT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_40_Finished
// ()

void AExtinction_C::K2Node_MatineeController_40_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_40_Finished");

	AExtinction_C_K2Node_MatineeController_40_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_132_END
// ()

void AExtinction_C::K2Node_MatineeController_132_END()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_132_END");

	AExtinction_C_K2Node_MatineeController_132_END_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_132_Finished
// ()

void AExtinction_C::K2Node_MatineeController_132_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_132_Finished");

	AExtinction_C_K2Node_MatineeController_132_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_HideSubtitle
// ()

void AExtinction_C::K2Node_MatineeController_31_HideSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_HideSubtitle");

	AExtinction_C_K2Node_MatineeController_31_HideSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_NextSubtitle
// ()

void AExtinction_C::K2Node_MatineeController_31_NextSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_NextSubtitle");

	AExtinction_C_K2Node_MatineeController_31_NextSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_ResetSubtitles
// ()

void AExtinction_C::K2Node_MatineeController_31_ResetSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_ResetSubtitles");

	AExtinction_C_K2Node_MatineeController_31_ResetSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_OpenCredits
// ()

void AExtinction_C::K2Node_MatineeController_31_OpenCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_OpenCredits");

	AExtinction_C_K2Node_MatineeController_31_OpenCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot05
// ()

void AExtinction_C::K2Node_MatineeController_31_Shot05()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot05");

	AExtinction_C_K2Node_MatineeController_31_Shot05_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot04
// ()

void AExtinction_C::K2Node_MatineeController_31_Shot04()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot04");

	AExtinction_C_K2Node_MatineeController_31_Shot04_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot03
// ()

void AExtinction_C::K2Node_MatineeController_31_Shot03()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot03");

	AExtinction_C_K2Node_MatineeController_31_Shot03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot02
// ()

void AExtinction_C::K2Node_MatineeController_31_Shot02()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot02");

	AExtinction_C_K2Node_MatineeController_31_Shot02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot01
// ()

void AExtinction_C::K2Node_MatineeController_31_Shot01()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_Shot01");

	AExtinction_C_K2Node_MatineeController_31_Shot01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.K2Node_MatineeController_31_Finished
// ()

void AExtinction_C::K2Node_MatineeController_31_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.K2Node_MatineeController_31_Finished");

	AExtinction_C_K2Node_MatineeController_31_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.katyperry
// ()

void AExtinction_C::katyperry()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.katyperry");

	AExtinction_C_katyperry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Start Rain
// ()

void AExtinction_C::Start_Rain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Start Rain");

	AExtinction_C_Start_Rain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Stop Rain
// ()

void AExtinction_C::Stop_Rain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Stop Rain");

	AExtinction_C_Stop_Rain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.playit
// ()

void AExtinction_C::playit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.playit");

	AExtinction_C_playit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.stopit
// ()

void AExtinction_C::stopit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.stopit");

	AExtinction_C_stopit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.stoptime
// ()

void AExtinction_C::stoptime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.stoptime");

	AExtinction_C_stoptime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.StartTime
// ()

void AExtinction_C::StartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.StartTime");

	AExtinction_C_StartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.CancelWeatherMatinee
// ()

void AExtinction_C::CancelWeatherMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.CancelWeatherMatinee");

	AExtinction_C_CancelWeatherMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Stop_Weather
// ()

void AExtinction_C::Stop_Weather()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Stop_Weather");

	AExtinction_C_Stop_Weather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AExtinction_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.ReceiveTick");

	AExtinction_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Rain Stopped
// ()

void AExtinction_C::Rain_Stopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Rain Stopped");

	AExtinction_C_Rain_Stopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.ReceiveBeginPlay
// ()

void AExtinction_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.ReceiveBeginPlay");

	AExtinction_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Cold Front
// ()

void AExtinction_C::Cold_Front()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Cold Front");

	AExtinction_C_Cold_Front_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_42_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_42_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_42_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_42_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_52_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_52_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_52_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_52_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_121_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_121_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_121_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_121_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_134_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_134_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_134_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_134_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Heat Wave
// ()

void AExtinction_C::Heat_Wave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Heat Wave");

	AExtinction_C_Heat_Wave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Start Meteors
// ()

void AExtinction_C::Start_Meteors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Start Meteors");

	AExtinction_C_Start_Meteors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_368_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_368_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_368_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_368_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_388_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_388_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_388_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_388_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_585_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_585_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_585_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_585_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_607_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_607_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_607_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_607_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_528_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_528_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_528_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_528_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_553_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_553_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_553_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_553_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_768_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_768_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_768_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_768_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_795_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_795_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_795_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_795_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_823_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_823_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_823_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_823_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_852_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_852_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_852_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_852_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_945_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_945_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_945_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_945_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_978_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_978_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_978_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_978_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1012_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1012_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1012_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1012_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1047_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1047_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1047_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1047_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1083_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1083_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1083_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1083_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1120_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1120_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1120_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1120_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1158_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1158_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1158_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1158_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1197_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1197_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1197_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1197_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1237_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1237_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1237_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1237_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1278_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1278_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1278_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1278_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1320_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1320_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1320_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1320_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1363_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1363_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1363_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1363_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1407_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1407_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1407_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1407_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1452_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1452_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1452_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1452_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1498_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1498_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1498_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1498_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1545_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1545_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1545_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1545_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1593_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1593_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1593_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1593_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1642_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1642_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1642_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1642_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1692_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1692_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1692_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1692_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1743_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1743_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1743_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1743_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2013_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2013_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2013_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2013_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2070_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2070_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2070_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2070_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2706_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2706_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2706_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2706_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2785_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2785_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2785_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2785_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Meteor_Strike
// ()
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void AExtinction_C::Meteor_Strike(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Meteor_Strike");

	AExtinction_C_Meteor_Strike_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_372_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_372_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_372_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_372_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_437_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_437_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_437_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_437_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_503_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_503_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_503_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_503_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_570_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_570_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_570_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_570_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_638_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_638_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_638_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_638_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_707_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_707_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_707_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_707_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1185_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1185_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1185_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1185_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1256_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1256_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1256_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1256_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2448_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2448_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2448_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2448_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2521_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2521_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2521_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2521_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3243_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3243_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3243_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3243_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3318_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3318_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3318_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3318_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_592_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_592_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_592_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_592_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_669_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_669_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_669_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_669_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_747_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_747_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_747_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_747_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_826_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_826_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_826_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_826_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_987_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_987_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_987_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_987_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1069_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1069_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1069_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1069_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1152_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1152_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1152_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1152_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1321_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1321_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1321_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1321_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_870_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_870_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_870_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_870_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_1312_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_1312_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_1312_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_1312_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__MatineeValueInterpolationContainer_EX_4_K2Node_ActorBoundEvent_1743_ActorMatineeUpdated__DelegateSignature
// ()

void AExtinction_C::BndEvt__MatineeValueInterpolationContainer_EX_4_K2Node_ActorBoundEvent_1743_ActorMatineeUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__MatineeValueInterpolationContainer_EX_4_K2Node_ActorBoundEvent_1743_ActorMatineeUpdated__DelegateSignature");

	AExtinction_C_BndEvt__MatineeValueInterpolationContainer_EX_4_K2Node_ActorBoundEvent_1743_ActorMatineeUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_534_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_534_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_534_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_534_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_626_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_626_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_626_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_626_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_719_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_719_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_719_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_719_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_813_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_813_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_813_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_813_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_908_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_908_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_908_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_908_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_1004_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_1004_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_1004_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_1004_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1101_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1101_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1101_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1101_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1199_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1199_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1199_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1199_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2283_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2283_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2283_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2283_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2383_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2383_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2383_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2383_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_1940_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_1940_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_1940_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_1940_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_2249_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_2249_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_2249_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_2249_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2522_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2522_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2522_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2522_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2831_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2831_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2831_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2831_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3348_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3348_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3348_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3348_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3444_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3444_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3444_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3444_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7246_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7246_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7246_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7246_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7344_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7344_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7344_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7344_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16495_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16495_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16495_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16495_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16597_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16597_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16597_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16597_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1624_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1624_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1624_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1624_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1728_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1728_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1728_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1728_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1344_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1344_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1344_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1344_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_1976_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_1976_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_1976_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_1976_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_2084_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_2084_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_2084_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_2084_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2407_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2407_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2407_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2407_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2517_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2517_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2517_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2517_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2737_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2737_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2737_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2737_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2849_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2849_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2849_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2849_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3184_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3184_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3184_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3184_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3298_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3298_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3298_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3298_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3767_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3767_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3767_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3767_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3883_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3883_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3883_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3883_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5840_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5840_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5840_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5840_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5958_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5958_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5958_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5958_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6311_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6311_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6311_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6311_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6431_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6431_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6431_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6431_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7266_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7266_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7266_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7266_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7388_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7388_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7388_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7388_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7753_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7753_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7753_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7753_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7877_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7877_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7877_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7877_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8740_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8740_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8740_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8740_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8866_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8866_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8866_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8866_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16009_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16009_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16009_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16009_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16137_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16137_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16137_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16137_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17790_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17790_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17790_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17790_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17920_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17920_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17920_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17920_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1572_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1572_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1572_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1572_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1706_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1706_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1706_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1706_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1330_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1330_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1330_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1330_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1466_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1466_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1466_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1466_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2413_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2413_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2413_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2413_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2551_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2551_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2551_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2551_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4060_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4060_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4060_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4060_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4200_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4200_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4200_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4200_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5175_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5175_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5175_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5175_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5317_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5317_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5317_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5317_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6588_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6588_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6588_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6588_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6732_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6732_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6732_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6732_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1430_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1430_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1430_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1430_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1576_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1576_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1576_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1576_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4640_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4640_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4640_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4640_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4788_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4788_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4788_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4788_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_4937_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_4937_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_4937_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_4937_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_5087_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_5087_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_5087_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_5087_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5238_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5238_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5238_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5238_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5390_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5390_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5390_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5390_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5543_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5543_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5543_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5543_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5697_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5697_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5697_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5697_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_5852_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_5852_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_5852_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_5852_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_6008_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_6008_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_6008_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_6008_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12098_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12098_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12098_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12098_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12256_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12256_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12256_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12256_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Start Eclipse
// ()

void AExtinction_C::Start_Eclipse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Start Eclipse");

	AExtinction_C_Start_Eclipse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.KingKaijuDefeatMatinee
// ()

void AExtinction_C::KingKaijuDefeatMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.KingKaijuDefeatMatinee");

	AExtinction_C_KingKaijuDefeatMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.KingKaijuSummonMatinee
// ()

void AExtinction_C::KingKaijuSummonMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.KingKaijuSummonMatinee");

	AExtinction_C_KingKaijuSummonMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3266_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3266_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3266_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3266_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3438_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3438_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3438_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3438_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_1061_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_1061_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_1061_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_1061_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Ascend0
// ()

void AExtinction_C::Ascend0()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Ascend0");

	AExtinction_C_Ascend0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Ascend1
// ()

void AExtinction_C::Ascend1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Ascend1");

	AExtinction_C_Ascend1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.Ascend2
// ()

void AExtinction_C::Ascend2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.Ascend2");

	AExtinction_C_Ascend2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1490_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1490_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1490_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1490_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1658_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1658_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1658_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1658_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_1063_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_1063_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_1063_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_1063_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1218_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1218_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1218_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1218_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1374_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1374_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1374_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1374_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2170_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2170_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2170_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2170_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2328_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2328_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2328_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2328_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_942_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_942_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_942_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_942_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1102_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1102_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1102_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1102_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_1263_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_1263_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_1263_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_1263_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1425_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1425_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1425_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1425_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3198_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3198_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3198_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3198_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3362_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3362_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3362_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3362_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1321_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1321_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1321_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1321_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1503_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1503_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1503_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1503_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_7920_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_7920_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_7920_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_7920_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_8088_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_8088_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_8088_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_8088_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_1815_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_1815_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_1815_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_1815_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_2164_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_2164_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_2164_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_2164_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.PreLoadAscension
// ()

void AExtinction_C::PreLoadAscension()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.PreLoadAscension");

	AExtinction_C_PreLoadAscension_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_4622_ActorBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AExtinction_C::BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_4622_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_4622_ActorBeginOverlapSignature__DelegateSignature");

	AExtinction_C_BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_4622_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1336_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1336_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1336_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1336_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1506_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1506_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1506_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1506_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.FinishShot6
// ()

void AExtinction_C::FinishShot6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.FinishShot6");

	AExtinction_C_FinishShot6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_996_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_996_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_996_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_996_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_1165_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_1165_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_1165_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_1165_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_2855_PostprocessVolumeEnteredSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_2855_PostprocessVolumeEnteredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_2855_PostprocessVolumeEnteredSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_2855_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_3025_PostprocessVolumeLeftSignature__DelegateSignature
// ()

void AExtinction_C::BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_3025_PostprocessVolumeLeftSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_3025_PostprocessVolumeLeftSignature__DelegateSignature");

	AExtinction_C_BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_3025_PostprocessVolumeLeftSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.StopKKMatinees
// ()

void AExtinction_C::StopKKMatinees()
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.StopKKMatinees");

	AExtinction_C_StopKKMatinees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Extinction.Extinction_C.ExecuteUbergraph_Extinction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExtinction_C::ExecuteUbergraph_Extinction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Extinction.Extinction_C.ExecuteUbergraph_Extinction");

	AExtinction_C_ExecuteUbergraph_Extinction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
