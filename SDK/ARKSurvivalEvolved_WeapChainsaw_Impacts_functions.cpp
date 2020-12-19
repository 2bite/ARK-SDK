// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapChainsaw_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapChainsaw_Impacts.WeapChainsaw_Impacts_C.UserConstructionScript
// ()

void AWeapChainsaw_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainsaw_Impacts.WeapChainsaw_Impacts_C.UserConstructionScript");

	AWeapChainsaw_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainsaw_Impacts.WeapChainsaw_Impacts_C.ExecuteUbergraph_WeapChainsaw_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapChainsaw_Impacts_C::ExecuteUbergraph_WeapChainsaw_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainsaw_Impacts.WeapChainsaw_Impacts_C.ExecuteUbergraph_WeapChainsaw_Impacts");

	AWeapChainsaw_Impacts_C_ExecuteUbergraph_WeapChainsaw_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
