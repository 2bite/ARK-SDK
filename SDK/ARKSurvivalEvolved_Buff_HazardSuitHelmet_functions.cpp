// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuitHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_HazardSuitHelmet_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.AllowPostProcessEffect");

	ABuff_HazardSuitHelmet_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPNotifyOtherBuffActivated
// ()
// Parameters:
// class APrimalBuff**            OtherBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HazardSuitHelmet_C::BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPNotifyOtherBuffActivated");

	ABuff_HazardSuitHelmet_C_BPNotifyOtherBuffActivated_Params params;
	params.OtherBuff = OtherBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPNotifyOtherBuffDeactivated
// ()
// Parameters:
// class APrimalBuff**            OtherBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HazardSuitHelmet_C::BPNotifyOtherBuffDeactivated(class APrimalBuff** OtherBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPNotifyOtherBuffDeactivated");

	ABuff_HazardSuitHelmet_C_BPNotifyOtherBuffDeactivated_Params params;
	params.OtherBuff = OtherBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.RefreshFullHazardSuitBuff
// ()

void ABuff_HazardSuitHelmet_C::RefreshFullHazardSuitBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.RefreshFullHazardSuitBuff");

	ABuff_HazardSuitHelmet_C_RefreshFullHazardSuitBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.UserConstructionScript
// ()

void ABuff_HazardSuitHelmet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.UserConstructionScript");

	ABuff_HazardSuitHelmet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HazardSuitHelmet_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPActivated");

	ABuff_HazardSuitHelmet_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HazardSuitHelmet_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPDeactivated");

	ABuff_HazardSuitHelmet_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.ExecuteUbergraph_Buff_HazardSuitHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HazardSuitHelmet_C::ExecuteUbergraph_Buff_HazardSuitHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.ExecuteUbergraph_Buff_HazardSuitHelmet");

	ABuff_HazardSuitHelmet_C_ExecuteUbergraph_Buff_HazardSuitHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
