// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Griffin_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Griffin_AIController_BP.Griffin_AIController_BP_C.UserConstructionScript
// ()

void AGriffin_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_AIController_BP.Griffin_AIController_BP_C.UserConstructionScript");

	AGriffin_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_AIController_BP.Griffin_AIController_BP_C.ExecuteUbergraph_Griffin_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGriffin_AIController_BP_C::ExecuteUbergraph_Griffin_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_AIController_BP.Griffin_AIController_BP_C.ExecuteUbergraph_Griffin_AIController_BP");

	AGriffin_AIController_BP_C_ExecuteUbergraph_Griffin_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif