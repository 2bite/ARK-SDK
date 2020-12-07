// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHarpoon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapHarpoon.WeapHarpoon_C.UserConstructionScript
// ()

void AWeapHarpoon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon.WeapHarpoon_C.UserConstructionScript");

	AWeapHarpoon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHarpoon.WeapHarpoon_C.ExecuteUbergraph_WeapHarpoon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapHarpoon_C::ExecuteUbergraph_WeapHarpoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon.WeapHarpoon_C.ExecuteUbergraph_WeapHarpoon");

	AWeapHarpoon_C_ExecuteUbergraph_WeapHarpoon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
