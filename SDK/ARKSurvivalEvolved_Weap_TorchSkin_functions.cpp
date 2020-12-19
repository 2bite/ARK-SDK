// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Weap_TorchSkin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weap_TorchSkin.Weap_TorchSkin_C.UserConstructionScript
// ()

void AWeap_TorchSkin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_TorchSkin.Weap_TorchSkin_C.UserConstructionScript");

	AWeap_TorchSkin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_TorchSkin.Weap_TorchSkin_C.ExecuteUbergraph_Weap_TorchSkin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeap_TorchSkin_C::ExecuteUbergraph_Weap_TorchSkin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_TorchSkin.Weap_TorchSkin_C.ExecuteUbergraph_Weap_TorchSkin");

	AWeap_TorchSkin_C_ExecuteUbergraph_Weap_TorchSkin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
