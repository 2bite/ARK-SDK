// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_AIController_BP_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_AIController_BP_Mega.Wyvern_AIController_BP_Mega_C.UserConstructionScript
// ()

void AWyvern_AIController_BP_Mega_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Mega.Wyvern_AIController_BP_Mega_C.UserConstructionScript");

	AWyvern_AIController_BP_Mega_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_AIController_BP_Mega.Wyvern_AIController_BP_Mega_C.ExecuteUbergraph_Wyvern_AIController_BP_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_AIController_BP_Mega_C::ExecuteUbergraph_Wyvern_AIController_BP_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Mega.Wyvern_AIController_BP_Mega_C.ExecuteUbergraph_Wyvern_AIController_BP_Mega");

	AWyvern_AIController_BP_Mega_C_ExecuteUbergraph_Wyvern_AIController_BP_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
