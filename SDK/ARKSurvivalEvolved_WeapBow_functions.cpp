// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBow.WeapBow_C.UserConstructionScript
// ()

void AWeapBow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow.WeapBow_C.UserConstructionScript");

	AWeapBow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBow.WeapBow_C.ExecuteUbergraph_WeapBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBow_C::ExecuteUbergraph_WeapBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow.WeapBow_C.ExecuteUbergraph_WeapBow");

	AWeapBow_C_ExecuteUbergraph_WeapBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
