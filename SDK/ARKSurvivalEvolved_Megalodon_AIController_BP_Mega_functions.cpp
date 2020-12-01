// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalodon_AIController_BP_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalodon_AIController_BP_Mega.Megalodon_AIController_BP_Mega_C.UserConstructionScript
// ()

void AMegalodon_AIController_BP_Mega_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalodon_AIController_BP_Mega.Megalodon_AIController_BP_Mega_C.UserConstructionScript");

	AMegalodon_AIController_BP_Mega_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalodon_AIController_BP_Mega.Megalodon_AIController_BP_Mega_C.ExecuteUbergraph_Megalodon_AIController_BP_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegalodon_AIController_BP_Mega_C::ExecuteUbergraph_Megalodon_AIController_BP_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalodon_AIController_BP_Mega.Megalodon_AIController_BP_Mega_C.ExecuteUbergraph_Megalodon_AIController_BP_Mega");

	AMegalodon_AIController_BP_Mega_C_ExecuteUbergraph_Megalodon_AIController_BP_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
