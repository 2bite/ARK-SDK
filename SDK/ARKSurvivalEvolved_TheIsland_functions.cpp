// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TheIsland_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TheIsland.TheIsland_C.OnRep_CurrentTekCaveDifficulty
// ()

void ATheIsland_C::OnRep_CurrentTekCaveDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.OnRep_CurrentTekCaveDifficulty");

	ATheIsland_C_OnRep_CurrentTekCaveDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.IsReallyUnderwater
// ()
// Parameters:
// bool                           ReallyUnderwater               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::IsReallyUnderwater(bool* ReallyUnderwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.IsReallyUnderwater");

	ATheIsland_C_IsReallyUnderwater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReallyUnderwater != nullptr)
		*ReallyUnderwater = params.ReallyUnderwater;
}


// Function TheIsland.TheIsland_C.OnRep_bIsRaining
// ()

void ATheIsland_C::OnRep_bIsRaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.OnRep_bIsRaining");

	ATheIsland_C_OnRep_bIsRaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.K2Node_MatineeController_1_Finished
// ()

void ATheIsland_C::K2Node_MatineeController_1_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.K2Node_MatineeController_1_Finished");

	ATheIsland_C_K2Node_MatineeController_1_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.K2Node_MatineeController_15_Finished
// ()

void ATheIsland_C::K2Node_MatineeController_15_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.K2Node_MatineeController_15_Finished");

	ATheIsland_C_K2Node_MatineeController_15_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.K2Node_MatineeController_22_Finished
// ()

void ATheIsland_C::K2Node_MatineeController_22_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.K2Node_MatineeController_22_Finished");

	ATheIsland_C_K2Node_MatineeController_22_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.K2Node_MatineeController_38_Finished
// ()

void ATheIsland_C::K2Node_MatineeController_38_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.K2Node_MatineeController_38_Finished");

	ATheIsland_C_K2Node_MatineeController_38_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.K2Node_MatineeController_176_EnableCollision
// ()

void ATheIsland_C::K2Node_MatineeController_176_EnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.K2Node_MatineeController_176_EnableCollision");

	ATheIsland_C_K2Node_MatineeController_176_EnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.K2Node_MatineeController_176_DisableCollision
// ()

void ATheIsland_C::K2Node_MatineeController_176_DisableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.K2Node_MatineeController_176_DisableCollision");

	ATheIsland_C_K2Node_MatineeController_176_DisableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.K2Node_MatineeController_176_Finished
// ()

void ATheIsland_C::K2Node_MatineeController_176_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.K2Node_MatineeController_176_Finished");

	ATheIsland_C_K2Node_MatineeController_176_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.ReceiveBeginPlay
// ()

void ATheIsland_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.ReceiveBeginPlay");

	ATheIsland_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.ReceiveTick");

	ATheIsland_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__DayCycleManager3_K2Node_ActorBoundEvent_12_ActorMatineeUpdated__DelegateSignature
// ()

void ATheIsland_C::BndEvt__DayCycleManager3_K2Node_ActorBoundEvent_12_ActorMatineeUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__DayCycleManager3_K2Node_ActorBoundEvent_12_ActorMatineeUpdated__DelegateSignature");

	ATheIsland_C_BndEvt__DayCycleManager3_K2Node_ActorBoundEvent_12_ActorMatineeUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.MakeItRain
// ()

void ATheIsland_C::MakeItRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.MakeItRain");

	ATheIsland_C_MakeItRain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.FogItUp
// ()

void ATheIsland_C::FogItUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.FogItUp");

	ATheIsland_C_FogItUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.katyperry
// ()

void ATheIsland_C::katyperry()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.katyperry");

	ATheIsland_C_katyperry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.noweather
// ()

void ATheIsland_C::noweather()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.noweather");

	ATheIsland_C_noweather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.doweather
// ()

void ATheIsland_C::doweather()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.doweather");

	ATheIsland_C_doweather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__MatineeValueInterpolationContainer_4_K2Node_ActorBoundEvent_256_ActorMatineeUpdated__DelegateSignature
// ()

void ATheIsland_C::BndEvt__MatineeValueInterpolationContainer_4_K2Node_ActorBoundEvent_256_ActorMatineeUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__MatineeValueInterpolationContainer_4_K2Node_ActorBoundEvent_256_ActorMatineeUpdated__DelegateSignature");

	ATheIsland_C_BndEvt__MatineeValueInterpolationContainer_4_K2Node_ActorBoundEvent_256_ActorMatineeUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.stoptime
// ()

void ATheIsland_C::stoptime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.stoptime");

	ATheIsland_C_stoptime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.StartTime
// ()

void ATheIsland_C::StartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.StartTime");

	ATheIsland_C_StartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_2608_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_2608_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_2608_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_2608_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_2609_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_2609_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_2609_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_2609_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_2610_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_2610_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_2610_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_2610_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_2611_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_2611_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_2611_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_2611_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_2612_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_2612_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_2612_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_2612_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_2613_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_2613_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_2613_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_2613_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_2614_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_2614_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_2614_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_2614_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_2615_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_2615_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_2615_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_2615_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_2616_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_2616_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_2616_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_2616_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_2617_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_2617_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_2617_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_2617_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_2618_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_2618_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_2618_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_2618_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_2619_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_2619_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_2619_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_2619_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_2620_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_2620_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_2620_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_2620_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_2621_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_2621_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_2621_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_2621_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_2622_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_2622_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_2622_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_2622_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_2623_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_2623_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_2623_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_2623_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_2624_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_2624_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_2624_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_2624_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_2625_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_2625_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_2625_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_2625_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_2626_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_2626_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_2626_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_2626_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_2627_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_2627_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_2627_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_2627_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_2628_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_2628_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_2628_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_2628_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_2630_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_2630_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_2630_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_2630_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_2631_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_2631_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_2631_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_2631_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_2632_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_2632_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_2632_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_2632_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_2633_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_2633_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_2633_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_2633_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_2634_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_2634_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_2634_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_2634_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_2635_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_2635_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_2635_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_2635_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_2636_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_2636_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_2636_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_2636_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_2637_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_2637_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_2637_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_2637_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_2638_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_2638_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_2638_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_2638_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_2639_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_2639_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_2639_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_2639_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_2640_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_2640_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_2640_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_2640_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_2641_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_2641_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_2641_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_2641_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_5343_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_5343_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_5343_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_5343_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_5344_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_5344_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_5344_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_5344_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_5345_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_5345_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_5345_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_5345_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_5346_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_5346_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_5346_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_5346_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_5347_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_5347_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_5347_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_5347_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_5348_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_5348_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_5348_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_5348_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_5349_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_5349_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_5349_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_5349_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_5350_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_5350_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_5350_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_5350_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_5351_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_5351_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_5351_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_5351_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_5352_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_5352_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_5352_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_5352_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_5353_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_5353_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_5353_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_5353_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_5354_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_5354_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_5354_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_5354_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_5355_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_5355_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_5355_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_5355_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_5356_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_5356_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_5356_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_5356_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_5357_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_5357_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_5357_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_5357_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_5358_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_5358_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_5358_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_5358_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_5359_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_5359_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_5359_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_5359_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_5360_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_5360_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_5360_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_5360_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_5361_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_5361_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_5361_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_5361_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_5362_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_5362_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_5362_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_5362_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_5363_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_5363_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_5363_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_5363_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_5365_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_5365_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_5365_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_5365_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_5366_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_5366_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_5366_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_5366_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_5367_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_5367_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_5367_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_5367_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_5368_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_5368_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_5368_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_5368_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_5369_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_5369_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_5369_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_5369_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_5370_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_5370_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_5370_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_5370_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_5371_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_5371_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_5371_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_5371_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_5372_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_5372_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_5372_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_5372_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_5373_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_5373_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_5373_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_5373_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_5374_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_5374_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_5374_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_5374_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_5375_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_5375_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_5375_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_5375_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_5376_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_5376_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_5376_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_5376_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_1514_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_1514_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_1514_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_1514_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_997_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_997_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_997_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_997_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_1124_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_1124_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_1124_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_1124_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.RainStopped
// ()

void ATheIsland_C::RainStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.RainStopped");

	ATheIsland_C_RainStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_3377_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_3377_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_3377_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_3377_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_3506_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_3506_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_3506_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_3506_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_3636_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_3636_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_3636_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_3636_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3767_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3767_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3767_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3767_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3899_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3899_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3899_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3899_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_2747_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_2747_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_2747_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_2747_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_2871_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_2871_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_2871_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_2871_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_2996_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_2996_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_2996_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_2996_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3122_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3122_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3122_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3122_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3249_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3249_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3249_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3249_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1642_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1642_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1642_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1642_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1776_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1776_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1776_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1776_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2030_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2030_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2030_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2030_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2167_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2167_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2167_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2167_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume_10_K2Node_ActorBoundEvent_957_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume_10_K2Node_ActorBoundEvent_957_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume_10_K2Node_ActorBoundEvent_957_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume_10_K2Node_ActorBoundEvent_957_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__VolcanoCavePostProcessVolume_K2Node_ActorBoundEvent_979_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__VolcanoCavePostProcessVolume_K2Node_ActorBoundEvent_979_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__VolcanoCavePostProcessVolume_K2Node_ActorBoundEvent_979_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__VolcanoCavePostProcessVolume_K2Node_ActorBoundEvent_979_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.NetSetTekCaveDifficulty
// ()
// Parameters:
// int                            difficulty                     (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::NetSetTekCaveDifficulty(int difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.NetSetTekCaveDifficulty");

	ATheIsland_C_NetSetTekCaveDifficulty_Params params;
	params.difficulty = difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.NetClearTekCaveDifficulty
// ()

void ATheIsland_C::NetClearTekCaveDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.NetClearTekCaveDifficulty");

	ATheIsland_C_NetClearTekCaveDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.EndTekCave
// ()

void ATheIsland_C::EndTekCave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.EndTekCave");

	ATheIsland_C_EndTekCave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.ActivateTekCave
// ()
// Parameters:
// int                            difficulty                     (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::ActivateTekCave(int difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.ActivateTekCave");

	ATheIsland_C_ActivateTekCave_Params params;
	params.difficulty = difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.EnableEndBossArena
// ()

void ATheIsland_C::EnableEndBossArena()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.EnableEndBossArena");

	ATheIsland_C_EnableEndBossArena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.DisableEndBossArena
// ()

void ATheIsland_C::DisableEndBossArena()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.DisableEndBossArena");

	ATheIsland_C_DisableEndBossArena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature");

	ATheIsland_C_BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.coldfront
// ()

void ATheIsland_C::coldfront()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.coldfront");

	ATheIsland_C_coldfront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.HeatWave
// ()

void ATheIsland_C::HeatWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.HeatWave");

	ATheIsland_C_HeatWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_834_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_834_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_834_PostprocessVolumeLeftSignature__DelegateSignature");

	ATheIsland_C_BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_834_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.timberlake
// ()

void ATheIsland_C::timberlake()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.timberlake");

	ATheIsland_C_timberlake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.stoprain
// ()

void ATheIsland_C::stoprain()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.stoprain");

	ATheIsland_C_stoprain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.stopfog
// ()

void ATheIsland_C::stopfog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.stopfog");

	ATheIsland_C_stopfog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheIsland.TheIsland_C.ExecuteUbergraph_TheIsland
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATheIsland_C::ExecuteUbergraph_TheIsland(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheIsland.TheIsland_C.ExecuteUbergraph_TheIsland");

	ATheIsland_C_ExecuteUbergraph_TheIsland_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
