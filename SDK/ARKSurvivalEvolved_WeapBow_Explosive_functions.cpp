// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_Explosive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBow_Explosive.WeapBow_Explosive_C.UserConstructionScript
// ()

void AWeapBow_Explosive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Explosive.WeapBow_Explosive_C.UserConstructionScript");

	AWeapBow_Explosive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBow_Explosive.WeapBow_Explosive_C.ExecuteUbergraph_WeapBow_Explosive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBow_Explosive_C::ExecuteUbergraph_WeapBow_Explosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Explosive.WeapBow_Explosive_C.ExecuteUbergraph_WeapBow_Explosive");

	AWeapBow_Explosive_C_ExecuteUbergraph_WeapBow_Explosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
