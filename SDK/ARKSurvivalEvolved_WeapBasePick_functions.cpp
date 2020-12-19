// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBasePick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBasePick.WeapBasePick_C.UserConstructionScript
// ()

void AWeapBasePick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBasePick.WeapBasePick_C.UserConstructionScript");

	AWeapBasePick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBasePick.WeapBasePick_C.ExecuteUbergraph_WeapBasePick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBasePick_C::ExecuteUbergraph_WeapBasePick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBasePick.WeapBasePick_C.ExecuteUbergraph_WeapBasePick");

	AWeapBasePick_C_ExecuteUbergraph_WeapBasePick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
