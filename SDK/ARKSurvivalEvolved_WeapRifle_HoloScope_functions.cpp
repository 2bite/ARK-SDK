// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRifle_HoloScope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRifle_HoloScope.WeapRifle_HoloScope_C.UserConstructionScript
// ()

void AWeapRifle_HoloScope_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_HoloScope.WeapRifle_HoloScope_C.UserConstructionScript");

	AWeapRifle_HoloScope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRifle_HoloScope.WeapRifle_HoloScope_C.ExecuteUbergraph_WeapRifle_HoloScope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRifle_HoloScope_C::ExecuteUbergraph_WeapRifle_HoloScope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_HoloScope.WeapRifle_HoloScope_C.ExecuteUbergraph_WeapRifle_HoloScope");

	AWeapRifle_HoloScope_C_ExecuteUbergraph_WeapRifle_HoloScope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
