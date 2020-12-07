// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStonePick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapStonePick.WeapStonePick_C.UserConstructionScript
// ()

void AWeapStonePick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStonePick.WeapStonePick_C.UserConstructionScript");

	AWeapStonePick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapStonePick.WeapStonePick_C.ExecuteUbergraph_WeapStonePick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapStonePick_C::ExecuteUbergraph_WeapStonePick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStonePick.WeapStonePick_C.ExecuteUbergraph_WeapStonePick");

	AWeapStonePick_C_ExecuteUbergraph_WeapStonePick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
