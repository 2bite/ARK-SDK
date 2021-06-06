// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompoundBow_Explosive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCompoundBow_Explosive.WeapCompoundBow_Explosive_C.UserConstructionScript
// ()

void AWeapCompoundBow_Explosive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Explosive.WeapCompoundBow_Explosive_C.UserConstructionScript");

	AWeapCompoundBow_Explosive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCompoundBow_Explosive.WeapCompoundBow_Explosive_C.ExecuteUbergraph_WeapCompoundBow_Explosive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCompoundBow_Explosive_C::ExecuteUbergraph_WeapCompoundBow_Explosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Explosive.WeapCompoundBow_Explosive_C.ExecuteUbergraph_WeapCompoundBow_Explosive");

	AWeapCompoundBow_Explosive_C_ExecuteUbergraph_WeapCompoundBow_Explosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
