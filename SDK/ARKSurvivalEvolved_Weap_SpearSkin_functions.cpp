// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Weap_SpearSkin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weap_SpearSkin.Weap_SpearSkin_C.UserConstructionScript
// ()

void AWeap_SpearSkin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_SpearSkin.Weap_SpearSkin_C.UserConstructionScript");

	AWeap_SpearSkin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_SpearSkin.Weap_SpearSkin_C.ExecuteUbergraph_Weap_SpearSkin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeap_SpearSkin_C::ExecuteUbergraph_Weap_SpearSkin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_SpearSkin.Weap_SpearSkin_C.ExecuteUbergraph_Weap_SpearSkin");

	AWeap_SpearSkin_C_ExecuteUbergraph_Weap_SpearSkin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
