// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompoundBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCompoundBow.WeapCompoundBow_C.UserConstructionScript
// ()

void AWeapCompoundBow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow.WeapCompoundBow_C.UserConstructionScript");

	AWeapCompoundBow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCompoundBow.WeapCompoundBow_C.ExecuteUbergraph_WeapCompoundBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCompoundBow_C::ExecuteUbergraph_WeapCompoundBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow.WeapCompoundBow_C.ExecuteUbergraph_WeapCompoundBow");

	AWeapCompoundBow_C_ExecuteUbergraph_WeapCompoundBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
