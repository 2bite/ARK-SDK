// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mek_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mek_AIController_BP.Mek_AIController_BP_C.UserConstructionScript
// ()

void AMek_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_AIController_BP.Mek_AIController_BP_C.UserConstructionScript");

	AMek_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_AIController_BP.Mek_AIController_BP_C.ExecuteUbergraph_Mek_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMek_AIController_BP_C::ExecuteUbergraph_Mek_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_AIController_BP.Mek_AIController_BP_C.ExecuteUbergraph_Mek_AIController_BP");

	AMek_AIController_BP_C_ExecuteUbergraph_Mek_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
