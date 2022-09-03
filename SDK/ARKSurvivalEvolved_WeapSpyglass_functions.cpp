// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSpyglass_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSpyglass.WeapSpyglass_C.ForceDisableCameraOverrides
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapSpyglass_C::ForceDisableCameraOverrides()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpyglass.WeapSpyglass_C.ForceDisableCameraOverrides");

	AWeapSpyglass_C_ForceDisableCameraOverrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapSpyglass.WeapSpyglass_C.BPCanToggleAccessory
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapSpyglass_C::BPCanToggleAccessory()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpyglass.WeapSpyglass_C.BPCanToggleAccessory");

	AWeapSpyglass_C_BPCanToggleAccessory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapSpyglass.WeapSpyglass_C.UserConstructionScript
// ()

void AWeapSpyglass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpyglass.WeapSpyglass_C.UserConstructionScript");

	AWeapSpyglass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSpyglass.WeapSpyglass_C.ExecuteUbergraph_WeapSpyglass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSpyglass_C::ExecuteUbergraph_WeapSpyglass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpyglass.WeapSpyglass_C.ExecuteUbergraph_WeapSpyglass");

	AWeapSpyglass_C_ExecuteUbergraph_WeapSpyglass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
