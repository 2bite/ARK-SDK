// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Carno_AIController_BP_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carno_AIController_BP_Mega.Carno_AIController_BP_Mega_C.UserConstructionScript
// ()

void ACarno_AIController_BP_Mega_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_AIController_BP_Mega.Carno_AIController_BP_Mega_C.UserConstructionScript");

	ACarno_AIController_BP_Mega_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Carno_AIController_BP_Mega.Carno_AIController_BP_Mega_C.ExecuteUbergraph_Carno_AIController_BP_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACarno_AIController_BP_Mega_C::ExecuteUbergraph_Carno_AIController_BP_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_AIController_BP_Mega.Carno_AIController_BP_Mega_C.ExecuteUbergraph_Carno_AIController_BP_Mega");

	ACarno_AIController_BP_Mega_C_ExecuteUbergraph_Carno_AIController_BP_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
