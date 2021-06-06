// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompoundBow_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCompoundBow_Stone.WeapCompoundBow_Stone_C.UserConstructionScript
// ()

void AWeapCompoundBow_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Stone.WeapCompoundBow_Stone_C.UserConstructionScript");

	AWeapCompoundBow_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCompoundBow_Stone.WeapCompoundBow_Stone_C.ExecuteUbergraph_WeapCompoundBow_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCompoundBow_Stone_C::ExecuteUbergraph_WeapCompoundBow_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Stone.WeapCompoundBow_Stone_C.ExecuteUbergraph_WeapCompoundBow_Stone");

	AWeapCompoundBow_Stone_C_ExecuteUbergraph_WeapCompoundBow_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
