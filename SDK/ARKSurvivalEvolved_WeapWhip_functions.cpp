// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapWhip_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapWhip.WeapWhip_C.UserConstructionScript
// ()

void AWeapWhip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapWhip.WeapWhip_C.UserConstructionScript");

	AWeapWhip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapWhip.WeapWhip_C.ExecuteUbergraph_WeapWhip
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapWhip_C::ExecuteUbergraph_WeapWhip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapWhip.WeapWhip_C.ExecuteUbergraph_WeapWhip");

	AWeapWhip_C_ExecuteUbergraph_WeapWhip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
