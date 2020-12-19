// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_CupidBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBow_CupidBow.WeapBow_CupidBow_C.UserConstructionScript
// ()

void AWeapBow_CupidBow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_CupidBow.WeapBow_CupidBow_C.UserConstructionScript");

	AWeapBow_CupidBow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBow_CupidBow.WeapBow_CupidBow_C.ExecuteUbergraph_WeapBow_CupidBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBow_CupidBow_C::ExecuteUbergraph_WeapBow_CupidBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_CupidBow.WeapBow_CupidBow_C.ExecuteUbergraph_WeapBow_CupidBow");

	AWeapBow_CupidBow_C_ExecuteUbergraph_WeapBow_CupidBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
