// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPike_Skin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPike_Skin.WeapPike_Skin_C.UserConstructionScript
// ()

void AWeapPike_Skin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike_Skin.WeapPike_Skin_C.UserConstructionScript");

	AWeapPike_Skin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPike_Skin.WeapPike_Skin_C.ExecuteUbergraph_WeapPike_Skin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPike_Skin_C::ExecuteUbergraph_WeapPike_Skin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPike_Skin.WeapPike_Skin_C.ExecuteUbergraph_WeapPike_Skin");

	AWeapPike_Skin_C_ExecuteUbergraph_WeapPike_Skin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
