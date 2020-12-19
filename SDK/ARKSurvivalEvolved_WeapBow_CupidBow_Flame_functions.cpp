// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_CupidBow_Flame_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C.UserConstructionScript
// ()

void AWeapBow_CupidBow_Flame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C.UserConstructionScript");

	AWeapBow_CupidBow_Flame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C.ExecuteUbergraph_WeapBow_CupidBow_Flame
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBow_CupidBow_Flame_C::ExecuteUbergraph_WeapBow_CupidBow_Flame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C.ExecuteUbergraph_WeapBow_CupidBow_Flame");

	AWeapBow_CupidBow_Flame_C_ExecuteUbergraph_WeapBow_CupidBow_Flame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
