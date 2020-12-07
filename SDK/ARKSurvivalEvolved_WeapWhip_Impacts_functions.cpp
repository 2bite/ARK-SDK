// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapWhip_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapWhip_Impacts.WeapWhip_Impacts_C.UserConstructionScript
// ()

void AWeapWhip_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapWhip_Impacts.WeapWhip_Impacts_C.UserConstructionScript");

	AWeapWhip_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapWhip_Impacts.WeapWhip_Impacts_C.ExecuteUbergraph_WeapWhip_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapWhip_Impacts_C::ExecuteUbergraph_WeapWhip_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapWhip_Impacts.WeapWhip_Impacts_C.ExecuteUbergraph_WeapWhip_Impacts");

	AWeapWhip_Impacts_C_ExecuteUbergraph_WeapWhip_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
