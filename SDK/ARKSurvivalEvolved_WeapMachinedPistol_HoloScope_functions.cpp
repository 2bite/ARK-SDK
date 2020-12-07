// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedPistol_HoloScope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedPistol_HoloScope.WeapMachinedPistol_HoloScope_C.UserConstructionScript
// ()

void AWeapMachinedPistol_HoloScope_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_HoloScope.WeapMachinedPistol_HoloScope_C.UserConstructionScript");

	AWeapMachinedPistol_HoloScope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedPistol_HoloScope.WeapMachinedPistol_HoloScope_C.ExecuteUbergraph_WeapMachinedPistol_HoloScope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedPistol_HoloScope_C::ExecuteUbergraph_WeapMachinedPistol_HoloScope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_HoloScope.WeapMachinedPistol_HoloScope_C.ExecuteUbergraph_WeapMachinedPistol_HoloScope");

	AWeapMachinedPistol_HoloScope_C_ExecuteUbergraph_WeapMachinedPistol_HoloScope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
